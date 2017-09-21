#include <iostream>
#include "fileA.h"
#include <cstdio>
#include "file1.h"

std::string fooA(std::string sA)
{
  if(sA=="") return "";
  std::cout<<sA<<"\n";
  std::string sX = "";
  for(int i=0;i<sA.size();i++){
    sX+=std::string(1,sA[i])+"!";
    std::cout<<sX<<"\n";
  }if(sA.find('?',0)==sA.npos) return fooZ(sX);
  else return sX;
}
