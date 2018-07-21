#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;

  int x[n];

  for(int i = 0; i < n; i++)
  {
    cout << "Number[" << i + 1 << "]: ";
    cin >> x[i];
  }
  cout << endl;

  int sum = 0;
  for(int i = 0; i < n; i++)
  {
    sum += x[i];
  }

  cout << "The sum of the " << n << " number(s) is: " << sum << endl;

  cout << endl;
  return EXIT_SUCCESS;
}
