#include <string>
#include <fstream>
#include <iostream>
#include "art.h"
using namespace std;

void artTotal::printArt(const int artIndex, const int x, const int y)
{
  switch(artIndex)
  {
    case 0:
      for(int i = 0; i < y; i++)
      {
        cout<<houseType0[i]<<endl;
      }
      break;
    
    case 1:
      for(int i = 0; i < y; i++)
      {
        cout<<houseType1[i]<<endl;
      }
      break;
  }
  cout.flush();
  return;
};

artTotal::artTotal(void)
{
  return;
}

artTotal::~artTotal(void)
{
  return;
}