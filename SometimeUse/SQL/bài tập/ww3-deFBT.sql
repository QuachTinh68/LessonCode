---Câu 6, Câu 7, Câu 16, Câu 17--
//*Câu 6: Liệt kê thông tin toàn bộ nhà cung cấp được sắp xếp tăng dần theo tên nhà cung cấp
và giảm dần theo mã số thuế*//
SELECT *
FROM NHACUNGCAP
ORDER BY TenNhaCC ASC, MaSoThue DESC

//*Câu 7: Đếm số lần đăng ký cung cấp phương tiện tương ứng cho từng nhà cung cấp với yêu
cầu chỉ đếm cho những nhà cung cấp thực hiện đăng ký cung cấp có ngày bắt đầu cung cấp là
"20/11/2015"*// 
SELECT NHACUNGCAP.MaNhaCC,TenNhaCC, COUNT(DANGKYCUNGCAP.MaNhaCC) AS SOLANCC
FROM NHACUNGCAP JOIN DANGKYCUNGCAP ON NHACUNGCAP.MaNhaCC=DANGKYCUNGCAP.MaNhaCC
WHERE NgayBatDauCungCap = '11/20/2015'
GROUP BY NHACUNGCAP.MaNhaCC,TenNhaCC

//*Câu 16: Tính tổng số lượng xe đã được đăng ký cho thuê tương ứng với từng dòng xe với
yêu cầu chỉ thực hiện tính đối với những lần đăng ký cho thuê có mức phí với đơn giá là
20.000 VNĐ trên 1 km*//
SELECT DONGXE.DongXe, SUM(SoLuongXeDangKy) AS  TONGSOLUONGXEDANGKY
FROM DANGKYCUNGCAP JOIN DONGXE ON DANGKYCUNGCAP.DongXe=DONGXE.DongXe
					JOIN MUCPHI ON MUCPHI.MaMP=DANGKYCUNGCAP.MaMP
WHERE DonGia='20000'
GROUP BY DONGXE.DongXe
//*Câu 17: Liệt kê MaNCC, SoLuongXeDangKy với yêu cầu chỉ liệt kê những nhà cung cấp
có địa chỉ là "Hai Chau" và chỉ mới thực hiện đăng ký cho thuê một lần duy nhất, kết quả
được sắp xếp tăng dần theo số lượng xe đăng ký*//
SELECT NHACUNGCAP.MaNhaCC,  DANGKYCUNGCAP.SoLuongXeDangKy
FROM NHACUNGCAP 
JOIN DANGKYCUNGCAP ON NHACUNGCAP.MaNhaCC = DANGKYCUNGCAP.MaNhaCC
WHERE NHACUNGCAP.DiaChi = 'Hai Chau'
GROUP BY NHACUNGCAP.MaNhaCC,DANGKYCUNGCAP.SoLuongXeDangKy
HAVING COUNT(DANGKYCUNGCAP.MaNhaCC) = 1
ORDER BY DANGKYCUNGCAP.SoLuongXeDangKy ASC
