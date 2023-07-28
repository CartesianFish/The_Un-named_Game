#include <iostream>
#include <string>
#include "art.h"
#include "functions.h"
#include <unistd.h>
#include <stdlib.h>
//#include <conio.h>
using namespace std;


int main()
{
  const int SLEEP_TIME = 4;
  bool exit = false;
  while(exit == false)
  {
    int amount = 0;
    string input = "";
    cout<<"command: ";
    cin>>input;
    if(input == "go")
    {
      cout<<"amount: ";
      cin>>amount;
      cout.flush();
      sleep(SLEEP_TIME);
      artTotal artPiece;
      for(int i = 0; i < amount; i++)
      {
        artPiece.printArt(0, artPiece.HOUSE_TYPE0_X, artPiece.HOUSE_TYPE0_Y);
        cout.flush();
        cout<<i+1<<endl;
        sleep(SLEEP_TIME);
        system("cls");
      }
      input = "";
    }
    if(input == "stop")
    {
      exit = true;
    }
  }
  return 0;
}