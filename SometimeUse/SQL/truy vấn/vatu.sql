select MaVatTu, TenVatTu
from VatTu
where TenVatTu like N'Bóng đèn%' and NuocSanXuat =N'Việt Nam' 

select NguoiLapPhieu
from PhieuXuatVatTu
where NgayLamPhieu between '2023-05-01' and '2023-05-15'


select MaVatTu, TenVatTu, NuocSanXuat
from VatTu
where NuocSanXuat like N'Việt Nam' or NuocSanXuat like N'Nhật' or NuocSanXuat like N'Đức' or NuocSanXuat like N'Pháp'

select VatTu.MaVatTu, TenVatTu,NuocSanXuat,SoLuong
from VatTu join ChiTietPhieuXuatVatTu on VatTu.MaVatTu=ChiTietPhieuXuatVatTu.MaVatTu
where SoPhieu='P003'
----
select sum(SoLuong) as SoLuongXuat
from ChiTietPhieuXuatVatTu join PhieuXuatVatTu on ChiTietPhieuXuatVatTu.SoPhieu=PhieuXuatVatTu.SoPhieu
where year(PhieuXuatVatTu.NgayLamPhieu)=2023
group by ChiTietPhieuXuatVatTu.SoPhieu
----
select VatTu.MaVatTu, TenVatTu,
case
	when Sum(SoLuong) is null then 0
	else sum(SoLuong) 
end as TongSL
from VatTu left join ChiTietPhieuXuatVatTu on VatTu.MaVatTu=ChiTietPhieuXuatVatTu.MaVatTu
group by VatTu.MaVatTu, TenVatTu

select ChiTietPhieuXuatVatTu.SoPhieu, NgayLamPhieu
from PhieuXuatVatTu join ChiTietPhieuXuatVatTu on PhieuXuatVatTu.SoPhieu=ChiTietPhieuXuatVatTu.SoPhieu
where ChiTietPhieuXuatVatTu.SoPhieu='P001'

select VatTu.MaVatTu, TenVatTu, sum(SoLuong) as TongSL
from VatTu join ChiTietPhieuXuatVatTu on VatTu.MaVatTu=ChiTietPhieuXuatVatTu.MaVatTu
group by  VatTu.MaVatTu, TenVatTu
having  sum(SoLuong) >=all(select sum(SoLuong) 
							from VatTu join ChiTietPhieuXuatVatTu on VatTu.MaVatTu=ChiTietPhieuXuatVatTu.MaVatTu
							group by VatTu.MaVatTu)



update VatTu
set TongDaXuat =