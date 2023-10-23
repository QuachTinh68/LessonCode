///*Cho biết thông tin các NCC chưa từng đăng kí cung cấp*//
select distinct NHACUNGCAP.MaNhaCC
from NHACUNGCAP 
where MaNhaCC not in (select MaNhaCC from DANGKYCUNGCAP)

//*VD2 cho biết thông tin các nhà cung cấp đã từng đăng kí cung cấp **/
select *
from NHACUNGCAP
where MaNhaCC in (select MaNhaCC from DANGKYCUNGCAP)

///*Vd 3 *//
select NHANVIEN.MANHANVIEN, HO, TEN
from NHANVIEN
WHERE MANHANVIEN not in (select MANHANVIEN FROM DONDATHANG)
--17--
select *
from MATHANG
where MAHANG not in (select distinct MAHANG from CHITIETDATHANG)

--19--
select MANHANVIEN, HO+' '+TEN AS 'HO VA TEN', LUONGCOBAN 
from NHANVIEN
WHERE LUONGCOBAN IN (SELECT MAX(LUONGCOBAN) FROM NHANVIEN)
---11 DE FBT--
SELECT NHACUNGCAP.MaNhaCC, TenNhaCC
FROM NHACUNGCAP
WHERE NHACUNGCAP.MaNhaCC IN (SELECT MaNhaCC FROM DANGKYCUNGCAP WHERE DONGXE.DongXe = 'Hiace' OR DONGXE.DongXe= 'Creato')
		
			

