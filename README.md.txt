# Hệ thống Giám sát Nhiệt độ với LM35 và Arduino

## Mô tả
Dự án mạng cảm biến sử dụng vi điều khiển Arduino để đọc dữ liệu nhiệt độ từ cảm biến LM35 và truyền dữ liệu về máy tính.

## Tính năng
- Đọc nhiệt độ từ 2 kênh cảm biến analog (A0, A1).
- Xuất dữ liệu qua cổng Serial để giám sát.

## Phần cứng yêu cầu
| STT | Tên linh kiện | Số lượng | Ghi chú |
|---|---|---|---|
| 1 | Arduino Uno R3 | 1 | Vi điều khiển trung tâm |
| 2 | Cảm biến LM35 | 2 | Cảm biến nhiệt độ |
| 3 | Dây cắm testboard | 10 | |

## Hướng dẫn sử dụng
1. Nối dây cảm biến LM35 vào chân A0 và A1 của Arduino.
2. Nạp code trong thư mục `firmware/` vào mạch.
3. Mở Serial Monitor ở baudrate 9600 để xem kết quả.

## Cấu trúc thư mục
- `firmware/`: Chứa mã nguồn Arduino (.ino)
- `pc_app/`: Chứa ứng dụng C# hiển thị đồ thị (nếu có)
- `simulation/`: Chứa file mô phỏng Proteus

## Thành viên nhóm
- Dương Quốc (Chủ repo)
- [Tên bạn của bạn] (Collaborator)