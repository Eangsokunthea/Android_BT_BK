--Buổi 2
	/* 2A.1
	Cho biết thông tin (mã cầu thủ, họ tên, số áo, vị trí, ngày sinh, địa chỉ) của tất cả các
cầu thủ’*/
SELECT MACT,HOTEN,SO,VITRI,NGAYSINH,DIACHI

	FROM CAUTHU


	/*2A.2
	Hiển thị thông tin tất cả các cầu thủ có số áo là 7 chơi ở vị trí Tiền vệ*/


SELECT * FROM CAUTHU
WHERE SO = 7 AND VITRI = "Tiền vệ "

	/*2A.3
	Cho biết tên, ngày sinh, địa chỉ, điện thoại của tất cả các huấn luyện viên*/

SELECT TENHLV, NGAYSINH,DIACHI,DIENTHOAT
FROM HUANLUYENVIEN;

	/*2A.4
	Hiển thi thông tin tất cả các cầu thủ có quốc tịch Việt Nam thuộc câu lạc bộ
Becamex Bình Dương*/

SELECT * FROM QLBONGDA_CAUTHU
WHERE MACLB = "BBD" AND MAQG = "VN";

	/*2A.5
	Cho biết mã số, họ tên, ngày sinh, địa chỉ và vị trí của các cầu thủ thuộc đội bóng
‘SHB Đà Nẵng’ có quốc tịch “Bra-xin"*/

SELECT HOTEN, NGAYSINH, DIACHI,VITRI
FROM QLBONGDA.CAUTHU
WHERE MACLB = "SDN"
AND MAQG = "BRA";

	/*2A.6
	Hiển thị thông tin tất cả các cầu thủ đang thi đấu trong câu lạc bộ có sân nhà là
“Long An”*/

SELECT CAUTHU.MACT,HOTEN,NGAYSINH,DIACHI
FROM CAUTHU, QUOCGIA,CAULACBO
WHERE CAUTHU.MAQG = QUOCGIA.MAQG 
AND CAUTHU.MACLB = CAULACBO.MACLB
AND QUOCGIA.MAQG = N'Bra_xin'
AND TENCLB = N'SHB ĐÃ NĂNG' 

	/*2A.7
	Cho biết kết quả (MATRAN, NGAYTD, TENSAN, TENCLB1, TENCLB2, KETQUA) các
trận đấu vòng 2 của mùa bóng năm 2009*/

SELECT TRANDAU.MATRAN,TRANDAU_NGAYTD
FROM TRANDAU, CAULACBO as CLB1,CAULACBO as CLB1, CAUTHU as CLB2,
SANVD WHERE TRANDAU.VONG = 2
AND TRANDAU.NAM = 2009
AND TRANDAU.MACLB = CLB1.MACLB
AND TRANDAU.MACLB = CLB2.MACLB
AND SANVD.MASAN = TRANDAU.MASAN

	/*2A.8
	Cho biết mã huấn luyện viên, họ tên, ngày sinh, địa chỉ, vai trò và tên CLB đang
làm veiecj của các huấn luyện viên có quốc tịch “ViệtNam”*/

SELECT HLV.MAHLV,HLV.TENHLV, HLV.NGAYSINH,
HLV.DIACHI, CLB.TENCLB
FROM HLV_CLB, QUOCGIA, HUANLUYENVIEN HLV, CAULACBO as CLB
WHERE HLV.MAQG = QUOCGIA.MAQG
AND CLB.MACLB = HLV_CLB.MACLB
AND QUOCGIA.TENQG = N'Việt Nam'




