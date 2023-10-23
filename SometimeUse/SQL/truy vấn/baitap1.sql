--Cau1--
SELECT MaKhoa,TenKhoa,DienThoai
FROM Khoa
WHERE TenKhoa = N'Khoa Công nghệ thông tin'

---cau2,
Select MaSinhVien, HoTen, NgaySinh,NoiSinh
from SinhVien
where HoTen like 'Phan%' and YEAR(NgaySinh)=1999

--cau3--
Select MaSinhVien, HoTen, NgaySinh, DienThoai, Email
from SinhVien join Lop on SinhVien.MaLop=Lop.MaLop
where TenLop='Tin K42A' and  (MONTH(NgaySinh) >= 5 AND MONTH(NgaySinh) <= 8);
--CAU4--
SELECT MaLop, TenLop , HeDaoTao
FROM Lop JOIN Khoa ON Lop.MaKhoa=Khoa.MaKhoa
WHERE NamNhapHoc=2017 AND DienThoai LIKE '%13'
--CAU5--
SELECT SinhVien.MaSinhVien, HoTen, NgaySinh, TenLop, NamNhapHoc
FROM SinhVien JOIN Lop ON SinhVien.MaLop=Lop.MaLop
				JOIN Khoa ON Khoa.MaKhoa=Lop.MaKhoa
WHERE TenKhoa=N'Khoa Công nghệ thông tin' and YEAR(NgaySinh)=1998 and NoiSinh=N'Thừa Thiên Huế'
---cau6--
select Lop.MaLop, TenLop, count(MaSinhVien)  as SoLuongSinhVien
from Lop left join SinhVien on Lop.MaLop=SinhVien.MaLop
group by Lop.MaLop, TenLop
--cau7-- 
select Khoa.MaKhoa, TenKhoa, count(Lop.MaLop) as SoluongLop
from Khoa inner join Lop on Khoa.MaKhoa=Lop.MaKhoa
group by  Khoa.MaKhoa, TenKhoa
having	count(Lop.MaLop) > 3
--cau8--
select Lop.MaLop, TenLop , count(MaSinhVien) as SoSinhVien
from Lop  left join SinhVien on Lop.MaLop=SinhVien.MaLop
group by Lop.MaLop, TenLop, NamNhapHoc, SoNamDaoTao, HeDaoTao, MaKhoa
having count(MaSinhVien)=0

SELECT MaLop, TenLop
FROM Lop
WHERE MaLop NOT IN (SELECT MaLop FROM SinhVien)
--cau9--
select Lop.MaLop, TenLop, count(MaSinhVien) as SoLuongSinhVien
from  Lop join SinhVien on Lop.MaLop=SinhVien.MaLop
group by  Lop.MaLop, TenLop 
having count(MaSinhVien) >= all (select count(MaSinhVien)
								from  Lop LEFT join SinhVien on Lop.MaLop=SinhVien.MaLop
								group by  Lop.MaLop, TenLop)
--cau10--
select TenKhoa, l.MaLop,TenLop, count(SinhVien.MaSinhVien)
from Khoa  join Lop AS l on Khoa.MaKhoa=l.MaKhoa 
		   join SinhVien on SinhVien.MaLop=l.MaLop
group by  TenKhoa, l.MaLop,TenLop
HAVING COUNT(SinhVien.MaSinhVien) >= all(SELECT count(MaSinhVien)
								from  Lop join SinhVien on Lop.MaLop=SinhVien.MaLop
								WHERE Lop.MaKhoa=l.MaKhoa
								group by Lop.MaLop)