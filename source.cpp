#include <iostream>

// the sequence number of the prime number you want to find
#define last_num 10001

// true - output all prime numbers before desired value
// false - output desired value only
#define output_all false

bool isPrime(int num) {
  for (auto i = num; i > 0; i--) {
    if (i != num && i != 1) {
      if (num % i == 0) return 0;
    }
  }
  return 1;
}

int main() {
  int answer = 0;
  int last_prime = 0;
  for (int i = 0; i < last_num - 1; i++) {
    for (int num = ++last_prime; ; num++) {
      if (isPrime(num)) {
        last_prime = num;
        break;
      }
    }
    if (output_all) {
      std::cout << i << '\t' << last_prime << '\n';
    }
    std::cout << last_prime;
  }
}
