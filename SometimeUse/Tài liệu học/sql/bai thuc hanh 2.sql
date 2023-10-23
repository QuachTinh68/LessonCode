/*
Giá trị DATETIME, NULL
Truy vấn bao gồm một quan hệ
Chèn, cập nhật, xóa bản ghi

CƠ SỞ DỮ LIỆU ĐH KHOA HỌC GỒM CÁC BẢNG:

Khoa(MaKhoa, TenKhoa, DienThoai)		//Khóa chính MaKhoa
Lop(MaLop, TenLop, MaKhoa)				//Khóa chính MaLop; Khóa ngoài: MaKhoa
SinhVien(MaSV, HoTen, NgaySinh, MaLop)	//Khóa chính MaSV; Khóa ngoài: MaLop
DiaDiem(MaDD, TenDD, DiaChi, GhiChu)	//Khóa chính MaDD
Khoa_DiaDiem(MaKhoa, MaDD, GhiChu)		//Khóa chính: MaKhoa, MaDD
*/
--Bài 1:
--Viết câu lệnh thực hiện các yêu cầu sau
--1.1. Hiển thị mã số, tên các lớp ở khoa có mã số là "K02"
--1.2. Hiển thị thông tin chi tiết của lớp có mã số là "L03"
--1.3. Hiển thị họ tên các sinh viên ở lớp mã số "L02". Thay cột "HoTen" 
--thành "Ho va ten sinh vien"
--1.4. Hiển thị mã sinh viên, họ tên và mã lớp của sinh viên có tên chứa chữ "B"
--1.5. Hiển thị tên sinh viên bắt đầu bằng chữ "N"
--1.6. Hiển thị mã lớp của những lớp có tên gồm 5 ký tự trong đó kí tự cuối cùng
-- là chữ "B" - ví dụ K51AB; K49CB)
--1.7. Hiện thị họ tên, mã lớp của những sinh viên sinh sau ngày 08 tháng 04 năm 2022
--1.8. Hiển thị tên khoa của những khoa có giá trị trường Dienthoai là NULL
--1.9. Hiển thị mã số các khoa có địa điểm có mã số "D03" và các khoa có địa điểm có 
-- mã số là "D01"
--Bài 2:
--2.1. Một sinh viên có tên là "Dương Văn Sử" có mã là "SV99" từ trường khác chuyển vào lớp có mã số L09. 
--2.2. Khoa có mã số K03 có thêm một lớp mới có mã số L55, có tên là K49CL. Hãy thêm vào csdl
--2.3. Sinh viên có mã SV04 chuyển từ lớp L04 sang L01. Hãy cập nhật thông tin này
--2.4. Khoa "Công nghệ thông tin" đổi số điện thoại thành "023456789". Hãy cập nhật thông tin
--2.5. Sinh viên có mã số SV04 bị đình chỉ học. Hãy xóa thông tin về sinh viên này trong csdl
--2.6. Lớp có mã số L04 đã ra trường. Hãy xóa các thông tin về lớp và các sinh viên của lớp này
--2.7. Hiển thị chi tiết (mã khoa, tên khoa, điện thoại) của các khoa trong HUSC
--2.8. Hiển thị tên lớp, mã khoa của tất cả các lớp trong trường HUSC


-- Thư mục Databases trong ổ D chưa tạo; mình tạo thư mục
create database HUSC_0000;  
-- sử dụng database này
use HUSC_0000;
--2. Tạo bảng

create table Khoa (
	MaKhoa char(10) primary key, -- MaKhoa: tên cột; char(10) kiểu dữ liệu; 
	TenKhoa varchar(20),
	DienThoai varchar(20)
);

create table Lop (
	MaLop char(10) primary key,
	TenLop varchar(20),
	MaKhoa char(10) references Khoa(MaKhoa) --MaKhoa khóa phụ, ngoại
);
--SinhVien(MaSV, HoTen, NgaySinh, MaLop)
create table SinhVien(
	MaSV char(10) primary key,
	HoTen nvarchar(50),
	NgaySinh Datetime,
	MaLop char(10) references Lop(MaLop)
);
--DiaDiem(MaDD, TenDD, DiaChi, GhiChu)
create table DiaDiem(
	MaDD char(10) primary key,
	TenDD varchar(30),
	DiaChi varchar(40),
	GhiChu varchar(20)
)
--Khoa_DiaDiem(MaKhoa, MaDD, GhiChu)
create table Khoa_DiaDiem(
	MaKhoa char(10) references Khoa(MaKhoa),
	MaDD char(10) references DiaDiem(MaDD),
	GhiChu varchar(30),
	primary key(MaKhoa, MaDD)
)


--3. Chèn dữ liệu vào các bảng; 5 khoa; mỗi khoa có 5 lớp
-- Khoa Công nghệ thông tin; mỗi lớp có 10 bạn sv (5*10=50 bạn sv)
insert into Khoa values('K01', 'Cong nghe thong tin', '0234567')
insert into Khoa values('K02', 'Dien tu vien thong', '0232323')
insert into Khoa values('K03', 'Vat ly', '0234323')
insert into Khoa values('K04', 'Toan', '0235454')
insert into Khoa values('K05', 'Hoa', '0237667')

insert into Lop values('L01','K46CA','K01')
insert into Lop values('L02','K46CB','K01')
insert into Lop values('L03','K46CC','K01')
insert into Lop values('L04','K46CD','K01')
insert into Lop values('L05','K46CE','K01')

insert into Lop values('L06','K46DA','K02')
insert into Lop values('L07','K46DB','K02')
insert into Lop values('L08','K47DA','K02')
insert into Lop values('L09','K47DB','K02')
insert into Lop values('L10','K48DC','K02')

insert into Lop values('L11','K46VA','K03')
insert into Lop values('L12','K46VB','K03')
insert into Lop values('L13','K46VC','K03')
insert into Lop values('L14','K46VD','K03')
insert into Lop values('L15','K46VE','K03')

insert into Lop values('L16','K46TA','K04')
insert into Lop values('L17','K46TB','K04')
insert into Lop values('L18','K47TA','K04')
insert into Lop values('L19','K47TB','K04')
insert into Lop values('L20','K48TC','K04')

insert into Lop values('L21','K46HA','K05')
insert into Lop values('L22','K46HB','K05')
insert into Lop values('L23','K47HA','K05')
insert into Lop values('L24','K47HB','K05')
insert into Lop values('L25','K48HC','K05')

--SinhVien(MaSV, HoTen, NgaySinh, MaLop)
-- Lưu ý: năm-tháng-ngày;
insert into SinhVien values('SV02',N'Đặng Tuấn Anh','2003-7-16','L01')

select *from SinhVien

insert into SinhVien values('SV01', N'Đặng Tuấn Anh','2003-11-2','L01')
insert into SinhVien values('SV02', N'Hoàng Đức Anh','2003-6-6','L02')
insert into SinhVien values('SV03', N'Lưu Trang Anh','2003-12-18','L03')
insert into SinhVien values('SV04', N'Phạm Hoàng Anh','2003-7-21','L04')
insert into SinhVien values('SV05', N'Phạm Thị Hiền Anh','2003-5-5','L05')
insert into SinhVien values('SV06', N'Phạm Khắc Việt Anh','2003-5-6','L06')
insert into SinhVien values('SV07', N'Đỗ Hoàng Gia Bảo','2003-11-16','L07')
insert into SinhVien values('SV08', N'Trần Thị Minh Châu','2003-2-9','L08')
insert into SinhVien values('SV09', N'Tăng Phương Chi','2003-2-19','L09')
insert into SinhVien values('SV10', N'Gan Feng Du','2003-2-17','L10')
insert into SinhVien values('SV11', N'Phạm Tiến Dũng','2003-4-25','L11')
insert into SinhVien values('SV12', N'Nguyễn Thái Dương','2003-4-6','L12')
insert into SinhVien values('SV13', N'Trần An Dương','2003-1-6','L13')
insert into SinhVien values('SV14', N'Mạc Trung Đức','2003-10-27','L14')
insert into SinhVien values('SV15', N'Vũ Hương Giang','2003-6-17','L15')
insert into SinhVien values('SV16', N'Nguyễn Thị Ngân Hà','2003-12-6','L16')
insert into SinhVien values('SV17', N'Nguyễn Lê Hiếu','2003-4-25','L17')
insert into SinhVien values('SV18', N'Phạm Xuân Hòa','2003-1-23','L18')
insert into SinhVien values('SV19', N'Khoa Minh Hoàng','2003-3-7','L19')
insert into SinhVien values('SV20', N'Nguyễn Hữu Hiệp Hoàng','2003-1-22','L20')
insert into SinhVien values('SV21', N'Nguyễn Mạnh Hùng','2003-7-18','L21')
insert into SinhVien values('SV22', N'Nguyễn Vũ Gia Hưng','2003-11-9','L22')
insert into SinhVien values('SV23', N'Trần Tuấn Hưng','2003-3-25','L23')
insert into SinhVien values('SV24', N'Phạm Gia Minh','2003-8-18','L24')
insert into SinhVien values('SV25', N'Đỗ Hoàng Mỹ','2003-8-11','L25')
insert into SinhVien values('SV26', N'Đỗ Quang Ngọc','2003-3-16','L01')
insert into SinhVien values('SV27', N'Đàm Yến Nhi','2003-1-2','L01')
insert into SinhVien values('SV28', N'Đoàn Hoàng Sơn','2003-11-28','L01')
insert into SinhVien values('SV29', N'Nguyễn Công Thành','2003-7-25','L01')
insert into SinhVien values('SV30', N'Bùi Phương Thảo','2003-10-24','L02')
insert into SinhVien values('SV31', N'Nguyễn Hương Thảo','2003-11-22','L02')
insert into SinhVien values('SV32', N'Tô Diệu Thảo','2003-1-18','L02')
insert into SinhVien values('SV33', N'Vũ Phương Thảo','2003-2-3','L02')
insert into SinhVien values('SV34', N'Đặng Huyền Thi','2003-2-14','L06')
insert into SinhVien values('SV35', N'Đặng Thành Trung','2003-6-28','L06')
insert into SinhVien values('SV36', N'Trịnh Thiên Trường','2003-12-25','L06')
insert into SinhVien values('SV37', N'Lê Khánh Vy','2003-8-18','L06')


insert into DiaDiem(MaDD, TenDD, DiaChi) values('D01', 'Giang duong A', 'Dong Da')
insert into DiaDiem(MaDD, TenDD, DiaChi) values('D02', 'Giang duong B', 'Nguyen Hue')
insert into DiaDiem(MaDD, TenDD, DiaChi) values('D03', 'Giang duong C', 'Hai Ba Trung')

insert into Khoa_DiaDiem values('K01', 'D01', 'Day la ghi chu 1')
insert into Khoa_DiaDiem values('K02', 'D03', '')
insert into Khoa_DiaDiem values('K03', 'D02', 'Day la ghi chu 2')
insert into Khoa_DiaDiem values('K04', 'D01', 'Day la ghi chu 3')
insert into Khoa_DiaDiem values('K05', 'D02', 'Day la ghi chu 4')
insert into Khoa_DiaDiem values('K02', 'D02', 'Day la ghi chu 5')
insert into Khoa_DiaDiem values('K01', 'D03', 'Day la ghi chu 6')
insert into Khoa_DiaDiem values('K01', 'D02', 'Day la ghi chu 7')