--Cau1--
select *
from CongDan
where Ten ='Hoa' and NoiSinh='Hue'
--cau2--
select * 
from CongDan
where (NgheNghiep='Ky Su' and NoiSinh='Quang Tri') or (NgheNghiep='Sinh Vien' and NoiSinh='Hue')
--Cau 3--
select distinct NoiSinh
from CongDan
--- Cau 4---
select *
from CongDan
where CmndID like '0002%'
---Cau 5--
select HoKhau.HokhauID, Tinh_TP, Quan_Huyen, Phuong_Xa,Ho, Ten
from CongDan join LichSuLuuTru on  CongDan.CmndID=LichSuLuuTru.CmndID
				join HoKhau on HoKhau.HokhauID=LichSuLuuTru.HoKhauID
where Tinh_TP='Da Nang'
--Cau 6--
select CmndID,Ho,Ten,HokhauID,Tinh_TP,Quan_Huyen
from HoKhau  right join CongDan on HoKhau.ChuHoID=CongDan.CmndID
--Cau 7--
select * 
from HoKhau
order by ChuHoID desc
--Cau 8--
select *
from LichSuLuuTru
where year(ThoiGanBatDauLT) = 2016 and LoaiLuuTruID not in (select  LoaiLuuTruID from LichSuLuuTru
															where year(ThoiGanBatDauLT)=2014)
															
--CAu9--
select count(*) as SoLanDangKi
from LichSuLuuTru
where year(ThoiGanBatDauLT)=2016 and QuanHeVoiChuHo='Khach Tro'

--Cau 10--
select CongDan.*
from CongDan join LichSuLuuTru on CongDan.CmndID=LichSuLuuTru.CmndID
where YEAR(ThoiGanBatDauLT) between 2014 and 2016
group by CongDan.CmndID, Ho, Ten, NgaySinh, GioiTinh, NoiSinh, TTHonNhan, NgheNghiep, MoTaKhac
having count(LichSuLuuTru.CmndID) >= all (select count(LichSuLuuTru.CmndID)
										from CongDan join LichSuLuuTru on CongDan.CmndID=LichSuLuuTru.CmndID
										where YEAR(ThoiGanBatDauLT) between 2014 and 2016
										group by CongDan.CmndID, Ho, Ten, NgaySinh, GioiTinh, NoiSinh, TTHonNhan, NgheNghiep, MoTaKhac)



