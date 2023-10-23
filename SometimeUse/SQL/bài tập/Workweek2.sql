---Sử dụng câu lệnh SELECT để viết các yêu cầu truy vấn dữ liệu sau đây:
----5. 1 Cho biết danh sách các đối tác cung cấp hàng cho công ty.
SELECT MACONGTY, TENCONGTY FROM dbo.NHACUNGCAP
---5. 2 Mã hàng, tên hàng và số lượng của các mặt hàng hiện có trong công ty.
SELECT MAHANG, TENHANG, SOLUONG FROM dbo.MATHANG
---5. 3 Họ tên và địa chỉ và năm bắt đầu làm việc của các nhân viên trong công ty.
SELECT HO + ' '+ TEN AS N'HỌ VÀ TÊN', DIACHI, YEAR(NGAYLAMVIEC) AS N'NĂM BẮT ĐẦU LÀM VIỆC' FROM dbo.NHANVIEN
---5. 4 Địa chỉ và điện thoại của nhà cung cấp có tên giao dịch A là gì?
SELECT DIACHI, DIENTHOAI FROM dbo.NHACUNGCAP
WHERE TENGIAODICH ='A'
---5. 5 Cho biết mã và tên của các mặt hàng có giá lớn hơn 1000 và số lượng hiện có ít hơn 50
SELECT MAHANG, TENHANG 
FROM dbo.MATHANG
WHERE GIAHANG > 1000 and SOLUONG < 50
---5. 6 Cho biết mỗi mặt hàng trong công ty do ai cung cấp.
SELECT NHACUNGCAP.MACONGTY, TENCONGTY, MALOAIHANG, TENHANG
FROM DBO.MATHANG JOIN  DBO.NHACUNGCAP ON MATHANG.MACONGTY=NHACUNGCAP.MACONGTY
---5. 7 Công ty B đã cung cấp những mặt hàng nào?
SELECT NHACUNGCAP.MACONGTY, TENCONGTY, MALOAIHANG, TENHANG
FROM DBO.MATHANG JOIN  DBO.NHACUNGCAP ON MATHANG.MACONGTY=NHACUNGCAP.MACONGTY
WHERE TENCONGTY = N'Công ty B'
---5. 8 Loại hàng thực phẩm do những công ty nào cung cấp và địa chỉ của các công ty đó là gì?
SELECT NHACUNGCAP.MACONGTY, TENCONGTY, LOAIHANG.MALOAIHANG, TENLOAIHANG
FROM DBO.LOAIHANG JOIN DBO.MATHANG ON LOAIHANG.MALOAIHANG=MATHANG.MALOAIHANG
				  JOIN DBO.NHACUNGCAP ON NHACUNGCAP.MACONGTY=MATHANG.MACONGTY 
WHERE TENLOAIHANG LIKE N'Thực phẩm'
---5. 9 Những khách hàng nào (tên giao dịch) đã đặt mua mặt hàng Sữa hộp XYZ của công ty?---
SELECT TENGIAODICH
FROM KHACHHANG JOIN DONDATHANG ON KHACHHANG.MAKHACHHANG=DONDATHANG.MAKHACHHANG
				JOIN CHITIETDATHANG ON CHITIETDATHANG.SOHOADON=DONDATHANG.SOHOADON
				JOIN MATHANG ON MATHANG.MAHANG=CHITIETDATHANG.MAHANG
WHERE TENHANG =N'Sữa hộp'
---5. 10 Đơn đặt hàng số 1 do ai đặt và do nhân viên nào lập, thời gian và địa điểm giao hàng là ở đâu?
SELECT HO +' ' + TEN AS 'HO VA TEN', NGAYGIAOHANG AS 'THOI GIAN', NOIGIAOHANG AS N'DIA DIEM GIAO HANG'
FROM DBO.NHANVIEN JOIN DBO.DONDATHANG ON NHANVIEN.MANHANVIEN=DONDATHANG.MANHANVIEN
WHERE SOHOADON ='1' 
---5. 11 Hãy cho biết số tiền lương mà công ty phải trả cho mỗi nhân viên là bao nhiêu
---(lương = lương cơ bản + phụ cấp).--
SELECT HO + ' '+TEN AS 'HO VA TEN', LUONGCOBAN, PHUCAP,
	CASE 
		WHEN PHUCAP IS NULL THEN LUONGCOBAN
		ELSE LUONGCOBAN+PHUCAP
	END AS 'LUONG'
FROM DBO.NHANVIEN
---. 12 Trong đơn đặt hàng số 3 đặt mua những mặt hàng nào và số tiền mà khách hàng
---phải trả cho mỗi mặt hàng là bao nh iêu (số tiền phải trả được tính theo công thức
--SOLUONG×GIABAN - SOLUONG×GIABAN×MUCGIAMGIA/100)
SELECT DONDATHANG.SOHOADON,TENHANG, CHITIETDATHANG.SOLUONG, GIABAN, MUCGIAMGIA, 
(CHITIETDATHANG.SOLUONG*GIABAN) - CHITIETDATHANG.SOLUONG*GIABAN*(MUCGIAMGIA/100) AS 'SO TIEN PHAI TRA'
FROM DBO.DONDATHANG JOIN DBO.CHITIETDATHANG ON DONDATHANG.SOHOADON=CHITIETDATHANG.SOHOADON
					JOIN MATHANG ON MATHANG.MAHANG=CHITIETDATHANG.MAHANG
WHERE DONDATHANG.SOHOADON=3
---. 13 Hãy cho biết có những khách hàng nào lại chính là đối tác cung cấp hàng của công ty (tức là có cùng tên giao dịch).
SELECT MAKHACHHANG, KHACHHANG.TENCONGTY, KHACHHANG.TENGIAODICH
FROM DBO.KHACHHANG INNER JOIN NHACUNGCAP ON KHACHHANG.TENGIAODICH=NHACUNGCAP.TENGIAODICH

---14 Trong công ty có những nhân viên nào có cùng ngày sinh?
SELECT A.HO, A.TEN, B.HO, B.TEN
FROM NHANVIEN A INNER JOIN NHANVIEN B ON A.NGAYSINH = B.NGAYSINH
	AND A.MANHANVIEN <> B.MANHANVIEN
---15 Những đơn đặt hàng nào yêu cầu giao hàng ngay tại công ty đặt hàng và những đơn đó là của công ty nào? 
SELECT SOHOADON,TENCONGTY,TENGIAODICH, NGAYDATHANG,NOIGIAOHANG
FROM DBO.DONDATHANG INNER JOIN KHACHHANG ON DONDATHANG.NOIGIAOHANG=KHACHHANG.DIACHI


----ĐỀ FBT---

--*Câu 3: Liệt kê những dòng xe có số chỗ ngồi trên 5 chỗ
SELECT DongXe
FROM DBO.DONGXE
WHERE SoChoNgoi > 5
///*Câu 4: Liệt kê thông tin của các nhà cung cấp đã từng đăng ký cung cấp những dòng xe
thuộc hãng xe “Toyota” với mức phí có đơn giá là 15.000 VNĐ/km hoặc những dòng xe
thuộc hãng xe “KIA” với mức phí có đơn giá là 20.000 VNĐ/km *//
select NHACUNGCAP.MaNhaCC, TenNhaCC
from dbo.NHACUNGCAP Join dbo.DANGKYCUNGCAP on NHACUNGCAP.MaNhaCC=DANGKYCUNGCAP.MaNhaCC
					join dbo.MUCPHI on MUCPHI.MaMP=DANGKYCUNGCAP.MaMP
					join dbo.DONGXE on DONGXE.DongXe=DANGKYCUNGCAP.DongXe
where (HangXe = 'Toyota' and DonGia = 15000)
	or (HangXe= 'Kia' and DonGia = 20000)
///*
Câu 5: Liệt kê thông tin toàn bộ nhà cung cấp được sắp xếp tăng dần theo tên nhà cung
cấp và giảm dần theo mã số thuế *///
SELECT *
FROM dbo.NHACUNGCAP
ORDER BY TenNhaCC DESC, MaSoThue ASC

//* Câu 9: Liệt kê MaDKCC, MaNhaCC, TenNhaCC, DiaChi, MaSoThue, TenLoaiDV, DonGia,
HangXe, NgayBatDauCC, NgayKetThucCC của tất cả các lần đăng ký cung cấp phương
tiện với yêu cầu những nhà cung cấp nào chưa từng thực hiện đăng ký cung cấp phương
tiện thì cũng liệt kê thông tin những nhà cung cấp đó ra*//

SELECT MaDKCC, NHACUNGCAP.MaNhaCC, TenNhaCC, DiaChi, MaSoThue, TenLoaiDV, DonGia,
DONGXE.HangXe ,DANGKYCUNGCAP.NgayBatDauCungCap , DANGKYCUNGCAP.NgayKetThucCungCap
FROM NHACUNGCAP JOIN DANGKYCUNGCAP
ON NHACUNGCAP.MaNhaCC =DANGKYCUNGCAP.MaNhaCC 
JOIN MUCPHI
ON MUCPHI.MaMP=DANGKYCUNGCAP.MaMP
JOIN LOAIDICHVU
ON LOAIDICHVU.MaLoaiDV=DANGKYCUNGCAP.MaLoaiDV
JOIN DBO.DONGXE ON DONGXE.DongXe=DANGKYCUNGCAP.DongXe

//*
Câu 9: Liệt kê thông tin của các nhà cung cấp đã từng đăng ký cung cấp phương tiện
thuộc dòng xe “Hiace” hoặc từng đăng ký cung cấp phương tiện thuộc dòng xe “Cerato”*//
SELECT NHACUNGCAP.MaNhaCC, TenNhaCC, DiaChi, SoDT, MaSoThue
FROM NHACUNGCAP JOIN DANGKYCUNGCAP ON NHACUNGCAP.MaNhaCC=DANGKYCUNGCAP.MaNhaCC
				JOIN DONGXE ON DONGXE.DongXe=DANGKYCUNGCAP.DongXe
WHERE DONGXE.DongXe LIKE 'Hiace' or DONGXE.DongXe LIKE 'Creato'









