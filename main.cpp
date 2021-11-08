#include <iostream>
#include <string>
#include "art.h"
#include "functions.h"
#include <unistd.h>
#include <stdlib.h>
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
      for(int i = 0; i < amount; i++)
      {
        art arts;
        arts.printArt(0, arts.HOUSE_TYPE0_X, arts.HOUSE_TYPE0_Y);
        cout.flush();
        cout<<i+1<<endl;
        sleep(SLEEP_TIME);
        system("clear");
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