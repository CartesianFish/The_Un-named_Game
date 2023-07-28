#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <stdlib.h>
//#include <ioctl.h> //ioctl() and TIOCGWINSZ
#include <unistd.h> // for STDOUT_FILENO
#include "functions.h"
#include "globalVars.h"

using namespace std;

bool askBoolQ(const string question, const char trueChar, const char falseChar, const bool acceptReverseCaps)
{
  char answerChar = '`'; 
  char trueCharReverseCap = '`';
  char falseCharReverseCap = 'a';
  if(acceptReverseCaps == true && trueChar >= 97 && trueChar <= 122)
  {
    trueCharReverseCap = trueChar - 32;
  }

  if(acceptReverseCaps == true && falseChar >= 97 && falseChar <= 122)
  {
    falseCharReverseCap = falseChar - 32;
  }

  if(acceptReverseCaps == true && trueChar >= 65 && trueChar <= 90)
  {
    trueCharReverseCap = trueChar + 32;
  }

  if(acceptReverseCaps == true && falseChar >= 65 && falseChar <= 90)
  {
    falseCharReverseCap = falseChar + 32;
  }

  if(acceptReverseCaps == true)
  {
    while(answerChar != trueChar && answerChar != falseChar && answerChar != trueCharReverseCap && answerChar != falseCharReverseCap)
    {
      cout<<question<<endl;
      cin>>answerChar;
    }
  }

  if(acceptReverseCaps == false)
  {
    while(answerChar != trueChar && answerChar != falseChar)
    {
      cout<<question<<endl;
      cin>>answerChar;
    }

    if(answerChar == trueChar)
    {
      return true;
    }

    if(answerChar == falseChar)
    {
      return false;
    }
  }

  return false;
}


int askIntQ(const string question, const int min, const int max)
{
  int answer = -9999;
  if(answer < min || answer > max)
  {
    cout<<question;
    cin>>answer;
  }
  return answer;
}


void getScreenSize()
{
  int width = 0;
  int height = 0;
  cout<<"Let's find the number of collums of your screen"<<endl<<"This test will print off a lot of 0s, count the number of ones that can fit the width and height of the window, and respond with the width found, then the height."<<endl;
  system("clear");
  cout<<string(40000,'0')<<endl;
  cin>>width;
  cout<<"now the height"<<endl;
  cin>>height;

  // struct winsize size;
  // ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
  // numScreenRows = size.ws_row;
  // numScreenCols = size.ws_col;
}


void start()
{
  const string question0 = "Have you played before on this computer?";
  bool savefileExists = true;
  //first, find the size of the screen
  getScreenSize();
  ifstream fin;
  fin.open("savedata.dat");
  if(!fin.is_open())
  {
    savefileExists == false;
  }

  if(savefileExists == false)
  {
    const string q1 = "Do you already have a save game? (y/n)";
    cout<<"I can't find any save data in this directory!"<<endl<<"If you already have a save game, please put the files in the folder contianing this program, and restart the program"<<endl;
    
  }
}