
--Cau 1--
select *
from NGUOITOGIAC
where GioiTinh='Nu'
---Cau 2--
select * 
from NGUOITOGIAC
where (GioiTinh ='Nu' and year(NgaySinh) = 1988) or (GioiTinh='Nam' and YEAR(NgaySinh)=1984)
--Cau 3--
select *
from NGUOITOGIAC
where HoTen like '%Thi%' and LEN(HoTen) > 15
---Cau 4--
select *
from LOAIVIPHAM
order by MaLoaiViPham asc, TenViPham desc
---Cau 5--
SELECT *
FROM (
    SELECT *,
        ROW_NUMBER() OVER (PARTITION BY HoTen ORDER BY MaNguoiToGiac) AS rn
    FROM NGUOITOGIAC
) t
WHERE rn = 1;

select * 
from NGUOITOGIAC
group by HoTen
--Cau 6--
select NGUOITOGIAC.MaNguoiToGiac, HoTen, DiaChi, MaToGiac, DONTOGIAC.MaLoaiViPham,TenViPham,HoTenNguoiViPham, ThoiGianViPham, DiaDiemViPham
from NGUOITOGIAC join DONTOGIAC on NGUOITOGIAC.MaNguoiToGiac=DONTOGIAC.MaNguoiToGiac
				join LOAIVIPHAM on LOAIVIPHAM.MaLoaiViPham=DONTOGIAC.MaLoaiViPham
where DiaDiemViPham ='Nguyen Tri Phuong' and Month(NgayViPham)=11
--Cau 7--
select distinct NGUOITOGIAC.MaNguoiToGiac, HoTen, DiaChi,MaToGiac, HoTenNguoiViPham, ThoiGianViPham, DiaDiemViPham
from NGUOITOGIAC left join DONTOGIAC on NGUOITOGIAC.MaNguoiToGiac=DONTOGIAC.MaNguoiToGiac

---Cau 8---
select distinct NGUOITOGIAC.MaNguoiToGiac, HoTen, GioiTinh, DiaChi, SoDienThoai, Email
from NGUOITOGIAC join DONTOGIAC on NGUOITOGIAC.MaNguoiToGiac=DONTOGIAC.MaNguoiToGiac
				join LOAIVIPHAM on LOAIVIPHAM.MaLoaiViPham=DONTOGIAC.MaLoaiViPham
where TenViPham not in (select TenViPham
						from LOAIVIPHAM where TenViPham='Nuoc')
						
select *
from NGUOITOGIAC 
where MaNguoiToGiac not in (select distinct MaNguoiToGiac
						from DONTOGIAC join LOAIVIPHAM on DONTOGIAC.MaLoaiViPham=LOAIVIPHAM.MaLoaiViPham
						where TenViPham='Nuoc')

---Cau 9---
select DONTOGIAC.MaNguoiToGiac,HoTen,count(DONTOGIAC.MaNguoiToGiac) as SoLanToGiac
from DONTOGIAC join NGUOITOGIAC on DONTOGIAC.MaNguoiToGiac=NGUOITOGIAC.MaNguoiToGiac
where GioiTinh='Nam'
group by DONTOGIAC.MaNguoiToGiac,HoTen

--Cau 10--
select LOAIVIPHAM.MaLoaiViPham, TenViPham, MaHinhPhat, COUNT(TenViPham)
from LOAIVIPHAM join DONTOGIAC on DONTOGIAC.MaLoaiViPham=LOAIVIPHAM.MaLoaiViPham
WHERE YEAR (DONTOGIAC.NgayViPham) BETWEEN 2016 AND 2017
group by LOAIVIPHAM.MaLoaiViPham,TenViPham, MaHinhPhat
having count(TenViPham) >= all(select Count(TenViPham)
								from DONTOGIAC join LOAIVIPHAM on DONTOGIAC.MaLoaiViPham=LOAIVIPHAM.MaLoaiViPham
								group by LOAIVIPHAM.MaLoaiViPham, TenViPham,MaHinhPhat)
