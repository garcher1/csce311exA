#include <iostream>
#include "fileA.h"
#include "file1.h"

std::string fooA(std::string sA)
{
  sA+="?";
  return foo1(sA);
}
