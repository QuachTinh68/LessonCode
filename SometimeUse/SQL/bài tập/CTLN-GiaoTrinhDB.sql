--Cơ sở dữ liệu bán hàng:  17, 18,  19
--17 Những mặt hàng nào chưa từng được khách hàng đặt mua?
SELECT MAHANG, TENHANG
FROM MATHANG 
WHERE MATHANG.MAHANG NOT IN (SELECT CHITIETDATHANG.MAHANG
							 FROM CHITIETDATHANG)
							 
//*5. 18 Những nhân viên nào của công ty chưa từng lập bất kỳ một hoá đơn đặt hàng
nào?*//
SELECT MANHANVIEN, HO, TEN
FROM NHANVIEN
WHERE NHANVIEN.MANHANVIEN NOT IN (SELECT MANHANVIEN
								  FROM DONDATHANG)
--5. 19 Những nhân viên nào của công ty có lương cơ bản cao nhất?
SELECT MANHANVIEN, HO, TEN
FROM NHANVIEN
WHERE LUONGCOBAN= (SELECT MAX(LUONGCOBAN)
					FROM NHANVIEN)
					