#include <iostream>
#include <string>
#include "art.h"
#include "functions.h"
#include "start.h"
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
    input = getStartCommands();
    if(input == "go" || input == "Go")
    {
      cout<<"Amount: ";
      cin>>amount;
      cout.flush();
      sleep(SLEEP_TIME);
      art artPrinter;
      for(int i = 0; i < amount; i++)
      {
        artPrinter.printArt(0);
        cout.flush();
        cout<<i+1<<endl;
        sleep(SLEEP_TIME);
        //system("cls");
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