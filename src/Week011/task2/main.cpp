#include <cstdlib>
#include <iostream>
#include "student.h"

using namespace std;

int main()
{
  Student student("Aries Camitan", "Guiguinto, Bulacan", "Male", 37, "Software Developer");
  student.setProgram("BSCS");
  student.setYearsInCollege(1);
  student.setUniversity("AMAOED");
  cout << "[Student Details] \n" << student.getInformation() << endl;

  cout << endl;
  return EXIT_SUCCESS;
}
