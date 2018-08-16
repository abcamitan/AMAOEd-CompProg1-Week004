#include <iostream>

using namespace std;

int divide(int dividend, int divisor) {
  return dividend / divisor;
}

int main() {
  int dividend, divisor;
  cout << "Enter the dividend:";
  cin >> dividend;
  cout << "Enter the divisor:";
  cin >> divisor;
  cout << "Answer is: " << divide(dividend, divisor) << endl;
}
