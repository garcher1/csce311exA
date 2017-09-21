#include <iostream>
#include "fileA.h"
#include "file1.h"

std::string fooA(std::string sA)
{
  std::cout<<sA<<"\n";
  if(sA.size()==0) return "";
  else if(sA.size()==1) return sA+"?";
  return foo1(sA.substr(0,sA.size()-1)) + sA.substr(sA.size()-1) + "?";
}//"horble" --> foo1("horbl") + "e" + "?"
