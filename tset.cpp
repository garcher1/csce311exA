#include <iostream>
#include "fileA.h"
#include "file1.h"

int main()
{
  std::cout<<fooA("horble")<<"\n";
  std::cout<<foo1("simpilex")<<"\n";
  std::cout<<fooA("")<<"\n";
  std::cout<<foo1("")<<"\n";
  std::cout<<fooA("x")<<"\n";
  std::cout<<foo1("x")<<"\n";
  return 0;
}
