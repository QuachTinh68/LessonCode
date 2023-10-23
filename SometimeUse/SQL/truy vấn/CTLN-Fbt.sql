--Đề mẫu FPT:  Câu 4, 11, 12, 13, 14--
//*Câu 4: Liệt kê thông tin của các nhà cung cấp đã từng đăng ký cung cấp những dòng xe
thuộc hãng xe "Toyota" với mức phí có đơn giá là 15.000 VNĐ/km hoặc những dòng xe
thuộc hãng xe "KIA" với mức phí có đơn giá là 20.000 VNĐ/km*//
SELECT NHACUNGCAP.*
FROM NHACUNGCAP
WHERE NHACUNGCAP.MaNhaCC IN (SELECT DISTINCT DANGKYCUNGCAP.MaNhaCC
							 FROM DANGKYCUNGCAP INNER JOIN DONGXE ON DONGXE.DongXe=DANGKYCUNGCAP.DongXe
												INNER JOIN MUCPHI ON MUCPHI.MaMP=DANGKYCUNGCAP.MaMP
							 WHERE (HangXe='Toyota' and DonGia=15000) OR (HangXe='KIA' AND DonGia=20000)
							)
//*Câu 11: Liệt kê thông tin của các nhà cung cấp đã từng đăng ký cung cấp phương tiện thuộc
dòng xe "Hiace" hoặc từng đăng ký cung cấp phương tiện thuộc dòng xe "Cerato"*//
SELECT NHACUNGCAP.*
FROM NHACUNGCAP
WHERE NHACUNGCAP.MaNhaCC IN (SELECT DANGKYCUNGCAP.MaNhaCC
							 FROM DANGKYCUNGCAP JOIN DONGXE ON DONGXE.DongXe=DANGKYCUNGCAP.DongXe
							 WHERE (DANGKYCUNGCAP.DongXe='Hiace' OR DANGKYCUNGCAP.DongXe='Crerato')
							 )
//*Câu 12: Liệt kê thông tin của các nhà cung cấp chưa từng thực hiện đăng ký cung cấp
phương tiện lần nào cả*?*//
SELECT NHACUNGCAP.*
FROM NHACUNGCAP
WHERE NHACUNGCAP.MaNhaCC NOT IN (SELECT DANGKYCUNGCAP.MaNhaCC
								 FROM DANGKYCUNGCAP)

//*Câu 13: Liệt kê thông tin của các nhà cung cấp đã từng đăng ký cung cấp phương tiện thuộc
dòng xe "Hiace" và chưa từng đăng ký cung cấp phương tiện thuộc dòng xe "Cerato"*//
SELECT DISTINCT NHACUNGCAP.*
FROM NHACUNGCAP 
WHERE NHACUNGCAP.MaNhaCC IN (SELECT DISTINCT DANGKYCUNGCAP.MaNhaCC FROM DANGKYCUNGCAP WHERE DongXe = 'Hiace')
AND NHACUNGCAP.MaNhaCC NOT IN (SELECT DISTINCT DANGKYCUNGCAP.MaNhaCC FROM DANGKYCUNGCAP WHERE DongXe = 'Cerato')

//*Câu 14: Liệt kê thông tin của những dòng xe chưa được nhà cung cấp nào đăng ký cho thuê
vào năm "2015" nhưng đã từng được đăng ký cho thuê vào năm "2016"*//
SELECT * FROM DONGXE
WHERE DongXe NOT IN (SELECT DongXe FROM DANGKYCUNGCAP WHERE YEAR(NgayBatDauCungCap) = 2015)
AND  DongXe IN (SELECT DongXe FROM DANGKYCUNGCAP WHERE YEAR(NgayBatDauCungCap) = 2016)
