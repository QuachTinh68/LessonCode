Giả sử chúng ta có cơ sở dữ liệu sau(xem ở PHỤ LỤC):
Product(maker, model, type)
PC(model, speed, ram, hd, rd, price)
Laptop(model, speed, ram, hd, screen, price)
Printer(model, color, type, price)
Bài 1: Viết các truy vấn sau:
1. Tìm các nhà sản xuất các máy in

SELECT DISTINCT maker
FROM Product
WHERE type = 'Printer';

2. Tìm số model, kích cỡ bộ nhớ và kích cỡ màn hình của các máy xách
tay (Laptop) có giá trên $2000

SELECT model, ram, screen
FROM Laptop
WHERE price > 2000;


3. Đưa ra tất cả các bộ trong quan hệ Printer với các máy in màu. Chú ý
rằng color là thuộc tính có giá trị lôgic
SELECT *
FROM Printer
WHERE color = TRUE;


4. Đưa ra số model, tốc độ và kích cỡ của đĩa cứng đối với các máy PC
coa đĩa DVD 12X hoặc 16X và giá thấp hơn $2000. Bán có thể xem
thuộc tính rd như là thuộc tính có giá trị là chuỗi ký tự.

SELECT model, speed, hd
FROM PC
WHERE rd LIKE 'DVD%' AND (rd = '12X' OR rd = '16X') AND price < 2000;


Bài 2:
1. Đưa ra số model và giá của tất cả các sản phẩm (với mọi kiểu) do nhà sản xuất
B làm ra

SELECT model, price
FROM Product 
WHERE maker = 'B';

2. Tìm các kích cỡ đĩa cứng có trong hai hoặc nhiều hơn PC

SELECT hd
FROM PC
GROUP BY hd
HAVING COUNT(*) >= 2;


3. Đưa ra các cặp model PC có cùng tốc độ và bộ nhớ (ram). Một cặp chỉ được
liệt kê một lần nghĩa là liệt kê (i,j) nhưng không liệt kê (j,i).

SELECT p1.model, p2.model
FROM PC p1, PC p2
WHERE p1.speed = p2.speed AND p1.ram = p2.ram AND p1.model < p2.model;

4. Đưa ra các nhà sản xuất sản xuất ít nhất là hai loại máy tính khác nhau (PC
hoặc Laptop) với tốc độ ít nhất là 1000.

SELECT maker
FROM Product
WHERE maker IN (
    SELECT maker
    FROM Product
    WHERE type = 'PC' AND speed >= 1000
    GROUP BY maker
    HAVING COUNT(DISTINCT type) >= 2
    UNION
    SELECT maker
    FROM Product
    WHERE type = 'Laptop' AND speed >= 1000
    GROUP BY maker
    HAVING COUNT(DISTINCT type) >= 2
);

Bài 3:

Trong phần bài tập này, bạn phải sử dụng ít nhất một truy vấn con trong câu trả
lời và viết mỗi truy vấn trong hai cách khác nhau.
1. Đưa ra những người sản xuất các PC có tốc độ ít nhất là 1200.
/*cách 1*/
SELECT maker
FROM Product
WHERE model IN (
    SELECT model
    FROM PC
    WHERE speed >= 1200
);
/*cách 2*/
SELECT p.maker
FROM Product p
JOIN PC pc ON p.model = pc.model
WHERE pc.speed >= 1200;

2. Đưa ra các máy in có giá cao nhất.
/*cách 1*/
SELECT *
FROM Printer
WHERE price = (
    SELECT MAX(price)
    FROM Printer
);

/*cách 2*/
SELECT p.model
FROM Printer p
WHERE NOT EXISTS (
    SELECT *
    FROM Printer
    WHERE price > p.price
);

3. Đưa ra các máy xách tay có tốc độ thấp hơn tốc độ của các PC
/*cách 1*/
SELECT model
FROM Laptop
WHERE speed < (
    SELECT MIN(speed)
    FROM PC
);

/*cách 2*/
SELECT l.model
FROM Laptop l
JOIN PC pc ON l.speed < pc.speed;

4. Đưa ra số model của các mục (PC, laptop, printer) với giá cao nhất.
/*cách 1*/
SELECT COUNT(model)
FROM (
    SELECT model
    FROM PC
    UNION ALL
    SELECT model
    FROM Laptop
    UNION ALL
    SELECT model
    FROM Printer
) AS AllProducts
WHERE model IN (
    SELECT model
    FROM (
        SELECT model, MAX(price) AS max_price
        FROM (
            SELECT model, price
            FROM PC
            UNION ALL
            SELECT model, price
            FROM Laptop
            UNION ALL
            SELECT model, price
            FROM Printer
        ) AS Products
        GROUP BY model
    ) AS MaxPrices
    WHERE price = max_price
);


/*cách 2*/
WITH AllProducts AS (
    SELECT model, price
    FROM PC
    UNION ALL
    SELECT model, price
    FROM Laptop
    UNION ALL
    SELECT model, price
    FROM Printer
), MaxPrices AS (
    SELECT model, MAX(price) AS max_price
    FROM AllProducts
    GROUP BY model
)
SELECT COUNT(model)
FROM MaxPrices
WHERE (model, price) IN (
    SELECT model, max_price
    FROM MaxPrices
);

5. Đưa ra nhà sản xuất của máy in màu có giá thấp nhất.
/*cách 1*/
WITH AllProducts AS (
    SELECT model, price
    FROM PC
    UNION ALL
    SELECT model, price
    FROM Laptop
    UNION ALL
    SELECT model, price
    FROM Printer
), MaxPrices AS (
    SELECT model, MAX(price) AS max_price
    FROM AllProducts
    GROUP BY model
)
SELECT COUNT(model)
FROM MaxPrices
WHERE (model, price) IN (
    SELECT model, max_price
    FROM MaxPrices
);

/*cách 2*/
SELECT p.maker
FROM Product p
JOIN Printer pr ON p.model = pr.model
WHERE pr.color = TRUE
ORDER BY pr.price
LIMIT 1;


6. Đưa ra các nhà sản xuất của các PC có bộ xử lý nhanh nhất trong số các
PC có dung lượng RAM bé nhất.
/*cách 1*/
SELECT maker
FROM Product
WHERE type = 'PC' AND speed = (
    SELECT MAX(speed)
    FROM PC
    WHERE ram = (
        SELECT MIN(ram)
        FROM PC
    )
);

/*cách 2*/
SELECT p1.maker
FROM Product p1
JOIN PC pc1 ON p1.model = pc1.model
WHERE pc1.ram = (
    SELECT MIN(ram)
    FROM PC
) AND pc1.speed = (
    SELECT MAX(speed)
    FROM PC
    WHERE ram = (
        SELECT MIN(ram)
        FROM PC
    )
);




