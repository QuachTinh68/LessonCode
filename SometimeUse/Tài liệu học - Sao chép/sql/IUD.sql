--INSERT INTO (chèn giá trị vào)
INSERT INTO table_name (column1, column2,...) VALUES (value1, value2,...)
select * from Customers
INSERT INTO Customers (CustomerID,  CompanyName)
						values('AAABC','HUSC')
INSERT INTO Customers (CustomerID,  CompanyName, Region)
						values('AAABD','HUSC','VN')

INSERT INTO Customers (CustomerID, ContactName, Region,	Country, CompanyName)
						values('AAAAA','Xin Chao', 'VN','Vietnam','HUSC')


-- NULL value; Lưu ý Gía trị ở cột key


--UPDATE: cập nhật lại 1 dòng dữ liệu
UPDATE table_name
SET column1=value1, column2=value2,...
WHERE condition;
-- Chỉ cập nhật 1 dòng dữ liệu
UPDATE Customers 
SET ContactName='HO QUOC DUNG', ContactTitle='Senior Lecture', Phone='0777333296'
WHERE CustomerID='AAAAA'
-- Cập nhập cho 2 dòng dữ liệu
UPDATE Customers
SET ContactName='HO QUOC DUNG', ContactTitle='Senior Lecture', 
	Phone='0777333296'
WHERE CompanyName='HUSC' 

-- Câu lệnh DELETE (xoá)
DELETE FROM table_name WHERE conditions;
delete from Customers where CustomerID='AAAAA';

delete from Customers where CustomerID='ALFKI';

select* from Customers