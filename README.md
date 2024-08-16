Có vẻ như năm 2013 mới chỉ đến ngày hôm qua. Bạn có biết một sự thật thú vị không? Năm 2013 là năm đầu tiên sau năm 1987 cũ chỉ có các chữ số riêng biệt.

Bây giờ bạn được gợi ý giải bài toán sau: cho một số năm, tìm số năm nhỏ nhất lớn hơn số đã cho và chỉ có các chữ số khác nhau.

Đầu vào:

Dòng đơn chứa số nguyên y (1000 ≤  y  ≤ 9000) — số năm.

Đầu ra:

In ra một số nguyên duy nhất — số năm nhỏ nhất lớn hơn y và tất cả các chữ số của nó đều khác nhau. Đảm bảo rằng câu trả lời tồn tại.

Giải quyết:

* Kiểm tra tính hợp lệ của năm: Đảm bảo rằng y là một số nguyên dương trong khoảng từ 1000 đến 9000.
  
* Tìm năm đẹp nhất tiếp theo:
  
      Tăng y lên 1 đơn vị.
  
      Kiểm tra xem các chữ số của y có khác nhau không:
  
        Nếu khác nhau, trả về y.

        Nếu không, tăng y lên 1 đơn vị và lặp lại bước kiểm tra.
  
