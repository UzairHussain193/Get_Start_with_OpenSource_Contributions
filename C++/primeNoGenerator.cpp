// Program name: PrimeNumberGenerator
// Description: Generates a list of prime numbers up to a given limit.
//
// Author: Bard
// Date: 2023-10-15

#include <iostream>
#include <vector>

using namespace std;

// Checks if a given number is prime.
bool isPrime(int n) {
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

// Generates a list of prime numbers up to a given limit.
vector<int> generatePrimeNumbers(int limit) {
  vector<int> primeNumbers;
  for (int i = 2; i <= limit; i++) {
    if (isPrime(i)) {
      primeNumbers.push_back(i);
    }
  }
  return primeNumbers;
}

int main() {
  int limit = 100;
  vector<int> primeNumbers = generatePrimeNumbers(limit);

  cout << "Prime numbers up to " << limit << ":" << endl;
  for (int i = 0; i < primeNumbers.size(); i++) {
    cout << primeNumbers[i] << " ";
  }
  cout << endl;

  return 0;
}
