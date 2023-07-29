#include "art.h"
#include <string> 
#include <fstream>
#include <iostream>

using namespace std;

void art::printArt(const int artIndex)
{
  switch(artIndex)
  {
    case 0:
    {
      fstream art0;
      art0.open("art0.txt", ios::in);
      if(!art0)
      {
        cout<<"file not available"<<endl;
      }

      else
      {
        char ch = ' ';
        string artOutput[13] = {};
        while(1)
        {
          for(int i = 0; i < 13; i++)
          {
            for(int j = 0; j < 25; j++)
            {
              art0>>ch;
              artOutput[i] += ch;
            }
            cout<<artOutput[i]<<endl;
          }
        }
      }
      break;
    }
    
    case 1:
    {
      fstream art1;
      art1.open("art1.txt", ios::in);
      if(!art1)
      {
        cout<<"file not available"<<endl;
      }

      else
      {
        char ch = ' ';
        string artOutput[25] = {};
        while(1)
        {
          for(int i = 0; i < 25; i++)
          {
            for(int j = 0; j < 25; j++)
            {
              art1>>ch;
              artOutput[i] += ch;
            }
            cout<<artOutput[i]<<endl;
          }
          break;
        }
      }
      break;
    }
  }
  cout.flush();
  return;
};

art::art(void)
{
  return;
}

art::~art(void)
{
  return;
}