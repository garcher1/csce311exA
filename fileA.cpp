#include <iostream>
#include "fileA.h"
#include "file1.h"

std::string fooA(std::string sA)
{
  std::cout<<sA<<"\n";
  std::string sX = "";
  for(int i=0;i<sA.size();i++){
    sX+=std::string(1,sA[i])+"?";
    std::cout<<sX<<"\n";
  }return fooZ(sX);
}
