#include <iostream>

using namespace std;

int main () {
  int intHeight, i, t;

  while(true){
    if(cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (intHeight < 1 || intHeight > 10) {
      cout << "Please enter height (1 - 10): ";
      cin >> intHeight;
    } else {
      break;
    }
  }

  char arr[10] = {'A','B','C','D','E','F','G','H','I','J'};
  for(i = 0; i < intHeight; i++)
  {
    for(t = 0; t < intHeight - i - 1; t++)
    {
      cout << " ";
    }
    for(t = 0; t < (i * 2) + 1; t++)
    {
      cout << arr[i];
    }
    cout << endl;
  }
  return EXIT_SUCCESS;
}
