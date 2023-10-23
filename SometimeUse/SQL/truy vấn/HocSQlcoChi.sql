--Ví dụ 1--
Select MAHANG AS 'MÃ HÀNG', TENHANG AS 'TÊN HÀNG', GIAHANG AS 'GIÁ HÀNG'
from MATHANG
--Ví dụ 2--
SELECT * FROM MATHANG
---Ví dụ 3--
select MAHANG, TENHANG, GIAHANG FROM MATHANG
---Ví dụ 4---Các biểu thức toán học, các phép toán.+,-,*,/;
---Cho biết mã hàng, tên hàng, số lượng và thành tiền của các mặt hàng trong công ty(Thành tiền = Sốlượng * giá tiền)--
Select MAHANG AS 'MÃ HÀNG', TENHANG AS'TÊN HÀNG', SOLUONG AS 'SỐ LƯỢNG', (SOLUONG*GIAHANG) AS 'THÀNH TIỀN' 
From MATHANG
----CASE....WHEN...END---(Trả về giá trị 1 cột)--
--CHO Biết mã nhân viên, tên nhân viên, lương cơ bản , phụ cấp và lương (lương =lương cơ banr + phụ cấp)--
select MANHANVIEN, HO+' '+TEN AS HOTEN, LUONGCOBAN, PHUCAP, 
	CASE
		WHEN PHUCAP IS NULL THEN  LUONGCOBAN
		ELSE LUONGCOBAN+PHUCAP 
	END AS LUONG
from NHANVIEN
---So sánh một giá trị với null "is null"--
select DISTINCT HangXe 
from dbo.DONGXE