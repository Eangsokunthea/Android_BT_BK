--Buổi 2
	/* 2A.1
	Cho biết thông tin (mã cầu thủ, họ tên, số áo, vị trí, ngày sinh, địa chỉ) của tất cả các
cầu thủ’*/
SELECT MACT_20180280,HOTEN_20180280,SO_20180280,VITRI_20180280,NGAYSINH_20180280,
	DIACHI_20180280

	FROM CAUTHU_EangSokunthea


	/*2A.2
	Hiển thị thông tin tất cả các cầu thủ có số áo là 7 chơi ở vị trí Tiền vệ*/


SELECT * FROM CAUTHU_EangSokunthea_20180280
WHERE SO_20180280 = 7 AND VITRI_20180280 = "Tiền vệ "

	/*2A.3
	Cho biết tên, ngày sinh, địa chỉ, điện thoại của tất cả các huấn luyện viên*/

SELECT TENHLV_20180280, NGAYSINH_20180280,DIACHI_20180280,DIENTHOAT_20180280
FROM HUANLUYENVIEN_EangSokunthea_20180280;

	/*2A.4
	Hiển thi thông tin tất cả các cầu thủ có quốc tịch Việt Nam thuộc câu lạc bộ
Becamex Bình Dương*/

SELECT * FROM QLBONGDA_CAUTHU_EangSokunthea_20180280
WHERE MACLB = "BBD" AND MAQG_20180280 = "VN";

	/*2A.5
	Cho biết mã số, họ tên, ngày sinh, địa chỉ và vị trí của các cầu thủ thuộc đội bóng
‘SHB Đà Nẵng’ có quốc tịch “Bra-xin"*/

SELECT HOTEN_20180280, NGAYSINH_20180280, DIACHI_20180280,VITRI_20180280
FROM QLBONGDA.CAUTHU_EangSokunthea_20180280
WHERE MACLB_20180280 = "SDN"
AND MAQG_20180280 = "BRA";

	/*2A.6
	Hiển thị thông tin tất cả các cầu thủ đang thi đấu trong câu lạc bộ có sân nhà là
“Long An”*/

SELECT CAUTHU_EangSokunthea_20180280.MACT_20180280,HOTEN_20180280,NGAYSINH_20180280,
DIACHI_20180280
FROM CAUTHU, QUOCGIA,CAULACBO,
WHERE CAUTHU.MAQA = QUOCGIA.MAQG 
AND CAUTHU.MACLB = CAULACBO.MACBB
AND QUOCGIA = "Bra_xin"
AND TENCLB = "SHB ĐÃ NĂNG" ;

	/*2A.7
	Cho biết kết quả (MATRAN, NGAYTD, TENSAN, TENCLB1, TENCLB2, KETQUA) các
trận đấu vòng 2 của mùa bóng năm 2009*/

SELECT TRANDAU.MATRAN_20180280,TRANDAU_NGAYTD_20180280
FROM TRANDAU, CAULACBO as CLB1,CAULACBO as CLB1, CAUTHU as CLB2
SANVD 
WHERE TRANDAU.VONG = 2
AND TRANDAU.NAM = 2009
AND TRANDAU.MACLB = CLB1.MACLB
AND TRANDAU.MACLB = CLB2.MACLB
AND SANVD.MASAN = TRANDAU.MASAN



