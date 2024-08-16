#include <stdio.h>

int hasDistinctDigits(int year) {
  int digits[10] = {0};             // Khởi tạo một mảng để đếm các chữ số (0-9).
  while (year > 0) {
    int digit = year % 10;
    if (digits[digit] > 0) {
      return 0;                 // Có chữ số trùng lặp
    }
    digits[digit] = 1;
    year = year / 10;
  }
  return 1;       // Tất cả các chữ số khác nhau
}

int main() {
  int year;
  scanf("%d", &year);

  // Tăng năm cho đến khi tìm thấy các chữ số khác nhau
  while (!hasDistinctDigits(++year));

  printf("%d\n", year);

  return 0;
}
