#include <cstdlib>
#include <iostream>
#include "dog.h"

using namespace std;

int main()
{
  Dog pet("Dog", "Wavy", 4, true);
  pet.setBreed("Chihuahua");
  pet.setSize("Small");
  pet.setIsRegister(false);
  cout << "[Dog Details] \n" << pet.getInformation() << endl;

  cout << endl;
  return EXIT_SUCCESS;
}
