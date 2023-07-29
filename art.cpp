#include "art.h"
#include <string> 
#include <fstream>
#include <iostream>

using namespace std;

void artPrint::printArt(const int artIndex)
{
  switch(artIndex)
  {
    case 0:
      fstream art0;
      art0.open("art0.txt", ios::in);
      if(!art0)
      {
        cout<<"file not available"<<endl;
      }

      else
      {
        char ch = ' ';
      }
      while(1)
      {
        
      }
      break;
    
    case 1:
     
      break;
  }
  cout.flush();
  return;
};

// artTotal::artTotal(void)
// {
//   return;
// }

// artTotal::~artTotal(void)
// {
//   return;
//}