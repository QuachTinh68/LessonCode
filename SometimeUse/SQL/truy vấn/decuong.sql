update HoSoTuyenSinh
set TongDiem=DiemMon1+DiemMon2+DiemMon3

select HoSoTuyenSinh.* 
from HoSoTuyenSinh join KhoaNganhTuyenSinh on HoSoTuyenSinh.MaNganh=KhoaNganhTuyenSinh.MaNganh
					join NganhTuyenSinh on KhoaNganhTuyenSinh.MaNganh=NganhTuyenSinh.MaNganh
					join KhoaTuyenSinh on KhoaTuyenSinh.MaKhoa=KhoaNganhTuyenSinh.MaKhoa
where TenNganh like N'Kỹ thuật phần mềm' and NamTuyenSinh=2018
order by TongDiem desc		

select TenNganh, TenKhoa
from HoSoTuyenSinh join KhoaNganhTuyenSinh on HoSoTuyenSinh.MaNganh=KhoaNganhTuyenSinh.MaNganh
					join NganhTuyenSinh on KhoaNganhTuyenSinh.MaNganh=NganhTuyenSinh.MaNganh
					join KhoaTuyenSinh on KhoaTuyenSinh.MaKhoa=KhoaNganhTuyenSinh.MaKhoa
where HoDem =N'Ngô Quy' and Ten =N'Linh'

select ChiTieuTuyenSinh
from KhoaNganhTuyenSinh join KhoaTuyenSinh on KhoaNganhTuyenSinh.MaKhoa=KhoaTuyenSinh.MaKhoa
						join NganhTuyenSinh on NganhTuyenSinh.MaNganh=KhoaNganhTuyenSinh.MaNganh
where NamTuyenSinh=2017 and TenNganh =N'Công nghệ thông tin'

select distinct HoSoTuyenSinh.*
from HoSoTuyenSinh join KhoaNganhTuyenSinh on HoSoTuyenSinh.MaKhoa=KhoaNganhTuyenSinh.MaKhoa
					join KhoaTuyenSinh on KhoaTuyenSinh.MaKhoa=KhoaNganhTuyenSinh.MaKhoa
where HoDem like N'Nguyễn%' and NamTuyenSinh = 2018

select *
from HoSoTuyenSinh