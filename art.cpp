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
      art0.unsetf(ios_base::skipws);
      if(!art0)
      {
        cout<<"file not available"<<endl;
      }

      else
      {
        char ch = ' ';
        int x = 0;
        string artOutput = "";
        bool fileOpen = true;
        while(fileOpen)
        {
          if(art0.eof())
          {
            art0.close();
            fileOpen = false;
            return;
          }
          for(int i = 0; i < 12; i++)
          {
            artOutput = "";
            
            for(int j = 0; j < 25; j++)
            {
              art0>>ch;
              if(ch == '\n')
              {
                art0>>ch;
              }
              //cout<<ch;
              artOutput += ch;
            }
            x++;
            //cout<<endl;
            cout<<artOutput<<endl;
            if(x == 13)
            {
              //art0.close();
              fileOpen = false;
              return;
            }
            //return;
          }
          //break;
        }
        break;
      }
      break;
    }
    
    case 1:
    {
      fstream art1;
      art1.open("art1.txt", ios::in);
      art1.unsetf(ios_base::skipws);
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