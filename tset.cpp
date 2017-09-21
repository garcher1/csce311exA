#include <iostream>
#include "fileA.h"
#include "file1.h"

int main()
{
  std::cout<<fooA("horble")<<"\n";
  std::cout<<fooZ("horble")<<"\n";
  std::cout<<fooA("")<<"\n";
  std::cout<<fooZ("")<<"\n";
  return 0;
}
