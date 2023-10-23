/*
CƠ SỞ DỮ LIỆU ĐH KHOA HỌC GỒM CÁC BẢNG:

Khoa(MaKhoa, TenKhoa, DienThoai)		//Khóa chính MaKhoa
Lop(MaLop, TenLop, MaKhoa)				//Khóa chính MaLop; Khóa ngoài: MaKhoa
SinhVien(MaSV, HoTen, NgaySinh, MaLop)	//Khóa chính MaSV; Khóa ngoài: MaLop
DiaDiem(MaDD, TenDD, DiaChi, GhiChu)	//Khóa chính MaDD
Khoa_DiaDiem(MaKhoa, MaDD, GhiChu)		//Khóa chính: MaKhoa, MaDD
MonHoc(MaMH, TenMH, GhiChu)				//Khoa chinh: MaMH, thêm ít nhất 2 môn Toán, Lý...
BangDiem(MaSV, MaMH, Diem)				
*/

--Thực hiện các truy vấn sau
--1. Đưa ra mã của sinh viên có điểm Toán cao nhất
--2. Đưa ra tên của sinh viên có điểm Lý thấp nhất
--3. Đưa ra điểm trung bình của các sinh viên khoa CNTT
--4. Đếm số lượng sinh viên của trường ĐHKH
--5. Đếm số lượng sinh viên của khoa Điện tử viễn thông
--6. Đếm số lượng sinh viên của từng khoa
--7. Đưa ra các khoa có số lượng sinh viên lớn hơn 3
--8. Tính tổng điểm 3 môn của từng sinh viên
--9. Tính điểm trung bình của từng sinh viên
--10. Đưa ra các sinh viên có điểm trung bình nhỏ hơn 7.0