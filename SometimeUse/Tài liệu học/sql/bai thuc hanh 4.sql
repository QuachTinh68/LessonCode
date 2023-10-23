/*
CƠ SỞ DỮ LIỆU ĐH KHOA HỌC GỒM CÁC BẢNG:

Khoa(MaKhoa, TenKhoa, DienThoai)		//Khóa chính MaKhoa
Lop(MaLop, TenLop, MaKhoa)				//Khóa chính MaLop; Khóa ngoài: MaKhoa
SinhVien(MaSV, HoTen, NgaySinh, MaLop)	//Khóa chính MaSV; Khóa ngoài: MaLop
DiaDiem(MaDD, TenDD, DiaChi, GhiChu)	//Khóa chính MaDD
Khoa_DiaDiem(MaKhoa, MaDD, GhiChu)		//Khóa chính: MaKhoa, MaDD
MonHoc(MaMH, TenMH, GhiChu)				//Khoa chinh: MaMH
BangDiem(MaSV, MaMH, Diem)				
*/

--Viết câu truy vấn thực hiện các yêu cầu sau:
-- 1. Đưa ra mã sinh viên có điểm môn Toán lớn hơn 5
-- 2. Đưa ra mã của các sinh viên có điểm môn Toán lớn hơn 5 và các sinh viên có điểm môn Lý nhỏ hơn 8
-- 3. Đưa ra mã của các sinh viên có điểm môn Lý lớn hơn hoặc bằng 5 và điểm môn Hóa nhỏ hơn 9
-- 4. Đưa a điểm toán cũ (tên cột "Diem toan cu") và điểm toán mới (tên cột "Diem toan moi") của các sinh viên biết rằng điểm toán mới bằng điểm toán cũ cộng 1
-- 5. Đưa ra tên sinh viên có điểm môn lý thấp hơn 8
-- 6. Đưa ra điểm cao nhất, thấp nhất trong bảng BangDiem
-- 7. Đưa ra điểm cao nhất, thấp nhất của môn Lý
-- 8. Đưa ra điểm trung bình của tất cả các sinh viên
-- 9. Đưa ra điểm trung bình của từng sinh viên
-- 10. Đưa ra điểm cao nhất, thấp nhất của từng sinh viên
-- 11. Đưa ra điểm cao nhất, thấp nhất của từng môn học