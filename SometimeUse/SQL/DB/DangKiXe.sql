USE [master]
GO
/****** Object:  Database [DangKiXe]    Script Date: 12/02/2023 8:50:23 CH ******/
CREATE DATABASE [DangKiXe]
 CONTAINMENT = NONE
 ON  PRIMARY 
( NAME = N'DangKiXe', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL16.SQLEXPRESS\MSSQL\DATA\DangKiXe.mdf' , SIZE = 8192KB , MAXSIZE = UNLIMITED, FILEGROWTH = 65536KB )
 LOG ON 
( NAME = N'DangKiXe_log', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL16.SQLEXPRESS\MSSQL\DATA\DangKiXe_log.ldf' , SIZE = 8192KB , MAXSIZE = 2048GB , FILEGROWTH = 65536KB )
 WITH CATALOG_COLLATION = DATABASE_DEFAULT, LEDGER = OFF
GO
ALTER DATABASE [DangKiXe] SET COMPATIBILITY_LEVEL = 160
GO
IF (1 = FULLTEXTSERVICEPROPERTY('IsFullTextInstalled'))
begin
EXEC [DangKiXe].[dbo].[sp_fulltext_database] @action = 'enable'
end
GO
ALTER DATABASE [DangKiXe] SET ANSI_NULL_DEFAULT OFF 
GO
ALTER DATABASE [DangKiXe] SET ANSI_NULLS OFF 
GO
ALTER DATABASE [DangKiXe] SET ANSI_PADDING OFF 
GO
ALTER DATABASE [DangKiXe] SET ANSI_WARNINGS OFF 
GO
ALTER DATABASE [DangKiXe] SET ARITHABORT OFF 
GO
ALTER DATABASE [DangKiXe] SET AUTO_CLOSE OFF 
GO
ALTER DATABASE [DangKiXe] SET AUTO_SHRINK OFF 
GO
ALTER DATABASE [DangKiXe] SET AUTO_UPDATE_STATISTICS ON 
GO
ALTER DATABASE [DangKiXe] SET CURSOR_CLOSE_ON_COMMIT OFF 
GO
ALTER DATABASE [DangKiXe] SET CURSOR_DEFAULT  GLOBAL 
GO
ALTER DATABASE [DangKiXe] SET CONCAT_NULL_YIELDS_NULL OFF 
GO
ALTER DATABASE [DangKiXe] SET NUMERIC_ROUNDABORT OFF 
GO
ALTER DATABASE [DangKiXe] SET QUOTED_IDENTIFIER OFF 
GO
ALTER DATABASE [DangKiXe] SET RECURSIVE_TRIGGERS OFF 
GO
ALTER DATABASE [DangKiXe] SET  DISABLE_BROKER 
GO
ALTER DATABASE [DangKiXe] SET AUTO_UPDATE_STATISTICS_ASYNC OFF 
GO
ALTER DATABASE [DangKiXe] SET DATE_CORRELATION_OPTIMIZATION OFF 
GO
ALTER DATABASE [DangKiXe] SET TRUSTWORTHY OFF 
GO
ALTER DATABASE [DangKiXe] SET ALLOW_SNAPSHOT_ISOLATION OFF 
GO
ALTER DATABASE [DangKiXe] SET PARAMETERIZATION SIMPLE 
GO
ALTER DATABASE [DangKiXe] SET READ_COMMITTED_SNAPSHOT OFF 
GO
ALTER DATABASE [DangKiXe] SET HONOR_BROKER_PRIORITY OFF 
GO
ALTER DATABASE [DangKiXe] SET RECOVERY SIMPLE 
GO
ALTER DATABASE [DangKiXe] SET  MULTI_USER 
GO
ALTER DATABASE [DangKiXe] SET PAGE_VERIFY CHECKSUM  
GO
ALTER DATABASE [DangKiXe] SET DB_CHAINING OFF 
GO
ALTER DATABASE [DangKiXe] SET FILESTREAM( NON_TRANSACTED_ACCESS = OFF ) 
GO
ALTER DATABASE [DangKiXe] SET TARGET_RECOVERY_TIME = 60 SECONDS 
GO
ALTER DATABASE [DangKiXe] SET DELAYED_DURABILITY = DISABLED 
GO
ALTER DATABASE [DangKiXe] SET ACCELERATED_DATABASE_RECOVERY = OFF  
GO
ALTER DATABASE [DangKiXe] SET QUERY_STORE = ON
GO
ALTER DATABASE [DangKiXe] SET QUERY_STORE (OPERATION_MODE = READ_WRITE, CLEANUP_POLICY = (STALE_QUERY_THRESHOLD_DAYS = 30), DATA_FLUSH_INTERVAL_SECONDS = 900, INTERVAL_LENGTH_MINUTES = 60, MAX_STORAGE_SIZE_MB = 1000, QUERY_CAPTURE_MODE = AUTO, SIZE_BASED_CLEANUP_MODE = AUTO, MAX_PLANS_PER_QUERY = 200, WAIT_STATS_CAPTURE_MODE = ON)
GO
USE [DangKiXe]
GO
/****** Object:  Table [dbo].[DANGKYCUNGCAP]    Script Date: 12/02/2023 8:50:23 CH ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[DANGKYCUNGCAP](
	[MaDKCC] [nvarchar](50) NOT NULL,
	[MaNhaCC] [nvarchar](50) NULL,
	[MaLoaiDV] [nvarchar](50) NULL,
	[DongXe] [nvarchar](50) NULL,
	[MaMP] [nchar](10) NULL,
	[NgayBatDauCungCap] [date] NULL,
	[NgayKetThucCungCap] [date] NULL,
	[SoLuongXeDangKi] [int] NULL,
 CONSTRAINT [PK_DANGKYCUNGCAP] PRIMARY KEY CLUSTERED 
(
	[MaDKCC] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[DONGXE]    Script Date: 12/02/2023 8:50:23 CH ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[DONGXE](
	[DongXe] [nvarchar](50) NOT NULL,
	[HangXe] [ntext] NULL,
	[SoChoNgoi] [int] NULL,
 CONSTRAINT [PK_DONGXE] PRIMARY KEY CLUSTERED 
(
	[DongXe] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
/****** Object:  Table [dbo].[LOAIDICHVU]    Script Date: 12/02/2023 8:50:23 CH ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[LOAIDICHVU](
	[MaLoaiDV] [nvarchar](50) NOT NULL,
	[TenLoaiDV] [ntext] NULL,
 CONSTRAINT [PK_LOAIDICHVU] PRIMARY KEY CLUSTERED 
(
	[MaLoaiDV] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
/****** Object:  Table [dbo].[MUCPHI]    Script Date: 12/02/2023 8:50:23 CH ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[MUCPHI](
	[MaMP] [nchar](10) NOT NULL,
	[DonGia] [money] NULL,
	[MoTa] [ntext] NULL,
 CONSTRAINT [PK_MUCPHI] PRIMARY KEY CLUSTERED 
(
	[MaMP] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
/****** Object:  Table [dbo].[NHACUNGCAP]    Script Date: 12/02/2023 8:50:23 CH ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[NHACUNGCAP](
	[MaNhaCC] [nvarchar](50) NOT NULL,
	[TenNhaCC] [ntext] NULL,
	[DiaChi] [nvarchar](50) NULL,
	[SoDT] [nvarchar](50) NULL,
	[MaSoThue] [nvarchar](50) NULL,
 CONSTRAINT [PK_NHACUNGCAP] PRIMARY KEY CLUSTERED 
(
	[MaNhaCC] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK001', N'NCC001', N'DV01', N'Hiace', N'MP01      ', CAST(N'2015-11-20' AS Date), CAST(N'2016-11-20' AS Date), 4)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK002', N'NCC002', N'DV02', N'Vios', N'MP02      ', CAST(N'2015-11-20' AS Date), CAST(N'2017-11-20' AS Date), 3)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK003', N'NCC003', N'DV03', N'Escape', N'MP03      ', CAST(N'2017-11-20' AS Date), CAST(N'2018-11-20' AS Date), 5)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK004', N'NCC005', N'DV01', N'Cerato', N'MP04      ', CAST(N'2015-11-20' AS Date), CAST(N'2019-11-20' AS Date), 7)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK005', N'NCC002', N'DV02', N'Forte', N'MP03      ', CAST(N'2019-11-20' AS Date), CAST(N'2020-11-20' AS Date), 1)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK006', N'NCC004', N'DV03', N'Starex', N'MP04      ', CAST(N'2016-11-10' AS Date), CAST(N'2021-11-20' AS Date), 2)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK007', N'NCC005', N'DV01', N'Cerato', N'MP03      ', CAST(N'2015-11-30' AS Date), CAST(N'2016-01-25' AS Date), 8)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK008', N'NCC006', N'DV01', N'Vios', N'MP02      ', CAST(N'2016-02-28' AS Date), CAST(N'2016-08-15' AS Date), 9)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK009', N'NCC005', N'DV03', N'Grand-i10', N'MP02      ', CAST(N'2016-04-27' AS Date), CAST(N'2017-04-30' AS Date), 10)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK010', N'NCC006', N'DV01', N'Forte', N'MP02      ', CAST(N'2015-11-21' AS Date), CAST(N'2016-02-22' AS Date), 4)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK011', N'NCC007', N'DV01', N'Forte', N'MP01      ', CAST(N'2016-12-25' AS Date), CAST(N'2017-02-20' AS Date), 5)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK012', N'NCC007', N'DV03', N'Cerato', N'MP01      ', CAST(N'2018-04-14' AS Date), CAST(N'2017-12-20' AS Date), 6)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK013', N'NCC003', N'DV02', N'Cerato', N'MP01      ', CAST(N'2015-12-21' AS Date), CAST(N'2016-12-21' AS Date), 8)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK014', N'NCC008', N'DV02', N'Cerato', N'MP01      ', CAST(N'2016-05-20' AS Date), CAST(N'2016-12-30' AS Date), 1)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK015', N'NCC003', N'DV01', N'Hiace', N'MP02      ', CAST(N'2018-04-24' AS Date), CAST(N'2019-11-20' AS Date), 6)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK016', N'NCC001', N'DV03', N'Grand-i10', N'MP02      ', CAST(N'2016-06-22' AS Date), CAST(N'2016-12-21' AS Date), 8)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK017', N'NCC002', N'DV03', N'Cerato', N'MP03      ', CAST(N'2016-09-30' AS Date), CAST(N'2019-09-30' AS Date), 4)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK018', N'NCC008', N'DV03', N'Escape', N'MP04      ', CAST(N'2017-12-13' AS Date), CAST(N'2018-09-30' AS Date), 2)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK019', N'NCC003', N'DV03', N'Escape', N'MP03      ', CAST(N'2016-01-24' AS Date), CAST(N'2016-12-30' AS Date), 8)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK020', N'NCC002', N'DV03', N'Cerato', N'MP04      ', CAST(N'2016-05-03' AS Date), CAST(N'2017-10-21' AS Date), 7)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK021', N'NCC006', N'DV01', N'Forte', N'MP02      ', CAST(N'2015-01-30' AS Date), CAST(N'2016-12-30' AS Date), 9)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK022', N'NCC002', N'DV02', N'Cerato', N'MP04      ', CAST(N'2016-07-25' AS Date), CAST(N'2017-12-30' AS Date), 6)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK023', N'NCC002', N'DV01', N'Forte', N'MP03      ', CAST(N'2017-11-30' AS Date), CAST(N'2018-05-20' AS Date), 5)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK024', N'NCC003', N'DV03', N'Forte', N'MP04      ', CAST(N'2017-12-23' AS Date), CAST(N'2019-11-30' AS Date), 8)
INSERT [dbo].[DANGKYCUNGCAP] ([MaDKCC], [MaNhaCC], [MaLoaiDV], [DongXe], [MaMP], [NgayBatDauCungCap], [NgayKetThucCungCap], [SoLuongXeDangKi]) VALUES (N'DK025', N'NCC003', N'DV03', N'Hiace', N'MP02      ', CAST(N'2016-08-24' AS Date), CAST(N'2017-10-25' AS Date), 1)
GO
INSERT [dbo].[DONGXE] ([DongXe], [HangXe], [SoChoNgoi]) VALUES (N'Cerato', N'KIA', 7)
INSERT [dbo].[DONGXE] ([DongXe], [HangXe], [SoChoNgoi]) VALUES (N'Escape', N'Ford', 5)
INSERT [dbo].[DONGXE] ([DongXe], [HangXe], [SoChoNgoi]) VALUES (N'Forte', N'KIA', 5)
INSERT [dbo].[DONGXE] ([DongXe], [HangXe], [SoChoNgoi]) VALUES (N'Grand-i10', N'Huyndai', 7)
INSERT [dbo].[DONGXE] ([DongXe], [HangXe], [SoChoNgoi]) VALUES (N'Hiace', N'Toyota', 16)
INSERT [dbo].[DONGXE] ([DongXe], [HangXe], [SoChoNgoi]) VALUES (N'Starex', N'Huyndai', 7)
INSERT [dbo].[DONGXE] ([DongXe], [HangXe], [SoChoNgoi]) VALUES (N'Vios', N'Toyota', 5)
GO
INSERT [dbo].[LOAIDICHVU] ([MaLoaiDV], [TenLoaiDV]) VALUES (N'DV01', N'Dịch vụ xe taxi')
INSERT [dbo].[LOAIDICHVU] ([MaLoaiDV], [TenLoaiDV]) VALUES (N'DV02', N'Dịch vụ xe buýt công cộng theo tuyến cố định')
INSERT [dbo].[LOAIDICHVU] ([MaLoaiDV], [TenLoaiDV]) VALUES (N'DV03', N'Dịch vụ xe cho thuê theo hợp đồng')
GO
INSERT [dbo].[MUCPHI] ([MaMP], [DonGia], [MoTa]) VALUES (N'MP01      ', 10000.0000, N'Áp dụng từ 1/2015')
INSERT [dbo].[MUCPHI] ([MaMP], [DonGia], [MoTa]) VALUES (N'MP02      ', 15000.0000, N'Áp dụng từ 2/2015')
INSERT [dbo].[MUCPHI] ([MaMP], [DonGia], [MoTa]) VALUES (N'MP03      ', 20000.0000, N'Áp dụng từ 1/2010')
INSERT [dbo].[MUCPHI] ([MaMP], [DonGia], [MoTa]) VALUES (N'MP04      ', 25000.0000, N'Áp dụng từ 2/2011')
GO
INSERT [dbo].[NHACUNGCAP] ([MaNhaCC], [TenNhaCC], [DiaChi], [SoDT], [MaSoThue]) VALUES (N'NCC001', N'Cty TNHH Toàn Pháp', N'Hai Chau', N'05113999888', N'568941')
INSERT [dbo].[NHACUNGCAP] ([MaNhaCC], [TenNhaCC], [DiaChi], [SoDT], [MaSoThue]) VALUES (N'NCC002', N'Cty Cổ phần Đông Du', N'Lien Chieu', N'05113999889', N'456789')
INSERT [dbo].[NHACUNGCAP] ([MaNhaCC], [TenNhaCC], [DiaChi], [SoDT], [MaSoThue]) VALUES (N'NCC003', N'Ông Nguyễn Văn A', N'Hoa Thuan', N'05113999890', N'321456')
INSERT [dbo].[NHACUNGCAP] ([MaNhaCC], [TenNhaCC], [DiaChi], [SoDT], [MaSoThue]) VALUES (N'NCC004', N'Cty Cổ phần Toàn Cầu Xanh', N'Hai Chau', N'05113658945', N'513364')
INSERT [dbo].[NHACUNGCAP] ([MaNhaCC], [TenNhaCC], [DiaChi], [SoDT], [MaSoThue]) VALUES (N'NCC005', N'Cty TNHH AMA', N'Thanh Khe', N'05113875466', N'546546')
INSERT [dbo].[NHACUNGCAP] ([MaNhaCC], [TenNhaCC], [DiaChi], [SoDT], [MaSoThue]) VALUES (N'NCC006', N'Bà Trần Thị Bích Liên', N'Lien Chieu', N'05113587469', N'524545')
INSERT [dbo].[NHACUNGCAP] ([MaNhaCC], [TenNhaCC], [DiaChi], [SoDT], [MaSoThue]) VALUES (N'NCC007', N'Cty TNHH Phan Thành', N'Thanh Khe', N'05113987456', N'113021')
INSERT [dbo].[NHACUNGCAP] ([MaNhaCC], [TenNhaCC], [DiaChi], [SoDT], [MaSoThue]) VALUES (N'NCC008', N'Ông Phan Đình Nam', N'Hoa Thuan', N'05113532456', N'121230')
INSERT [dbo].[NHACUNGCAP] ([MaNhaCC], [TenNhaCC], [DiaChi], [SoDT], [MaSoThue]) VALUES (N'NCC009', N'Tập đoàn Đông Nam Á', N'Lien Khe', N'05113987121', N'533654')
INSERT [dbo].[NHACUNGCAP] ([MaNhaCC], [TenNhaCC], [DiaChi], [SoDT], [MaSoThue]) VALUES (N'NCC010', N'Cty Cổ phần Rạng đông', N'Lien Khe', N'05113569654', N'187864')
GO
ALTER TABLE [dbo].[DANGKYCUNGCAP]  WITH CHECK ADD  CONSTRAINT [FK_DANGKYCUNGCAP_DONGXE] FOREIGN KEY([DongXe])
REFERENCES [dbo].[DONGXE] ([DongXe])
GO
ALTER TABLE [dbo].[DANGKYCUNGCAP] CHECK CONSTRAINT [FK_DANGKYCUNGCAP_DONGXE]
GO
ALTER TABLE [dbo].[DANGKYCUNGCAP]  WITH CHECK ADD  CONSTRAINT [FK_DANGKYCUNGCAP_LOAIDICHVU] FOREIGN KEY([MaLoaiDV])
REFERENCES [dbo].[LOAIDICHVU] ([MaLoaiDV])
GO
ALTER TABLE [dbo].[DANGKYCUNGCAP] CHECK CONSTRAINT [FK_DANGKYCUNGCAP_LOAIDICHVU]
GO
ALTER TABLE [dbo].[DANGKYCUNGCAP]  WITH CHECK ADD  CONSTRAINT [FK_DANGKYCUNGCAP_MUCPHI] FOREIGN KEY([MaMP])
REFERENCES [dbo].[MUCPHI] ([MaMP])
GO
ALTER TABLE [dbo].[DANGKYCUNGCAP] CHECK CONSTRAINT [FK_DANGKYCUNGCAP_MUCPHI]
GO
ALTER TABLE [dbo].[DANGKYCUNGCAP]  WITH CHECK ADD  CONSTRAINT [FK_DANGKYCUNGCAP_NHACUNGCAP] FOREIGN KEY([MaNhaCC])
REFERENCES [dbo].[NHACUNGCAP] ([MaNhaCC])
GO
ALTER TABLE [dbo].[DANGKYCUNGCAP] CHECK CONSTRAINT [FK_DANGKYCUNGCAP_NHACUNGCAP]
GO
USE [master]
GO
ALTER DATABASE [DangKiXe] SET  READ_WRITE 
GO
