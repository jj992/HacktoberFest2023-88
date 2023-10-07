#include <iostream>

using namespace std;

string to_binary(int decimal_number) {
  string binary_number;

  while (decimal_number > 0) {
    binary_number += to_string(decimal_number % 2);
    decimal_number /= 2;
  }

  reverse(binary_number.begin(), binary_number.end());

  return binary_number;
}
string to_octal(int decimal_number) {
  string octal_number;

  while (decimal_number > 0) {
    octal_number += to_string(decimal_number % 8);
    decimal_number /= 8;
  }

  reverse(octal_number.begin(), octal_number.end());

  return octal_number;
}

string to_hexadecimal(int decimal_number) {
  string hexadecimal_number;

  while (decimal_number > 0) {
    int remainder = decimal_number % 16;

    if (remainder < 10) {
      hexadecimal_number += to_string(remainder);
    } else {
      hexadecimal_number += (char)('A' + remainder - 10);
    }

    decimal_number /= 16;
  }

  reverse(hexadecimal_number.begin(), hexadecimal_number.end());

  return hexadecimal_number;
}

int main() {
  int decimal_number = 100;

  string binary_number = to_binary(decimal_number);
  string octal_number = to_octal(decimal_number);
  string hexadecimal_number = to_hexadecimal(decimal_number);

  cout << "Binary: " << binary_number << endl;
  cout << "Octal: " << octal_number << endl;
  cout << "Hexadecimal: " << hexadecimal_number << endl;

  return 0;
}
