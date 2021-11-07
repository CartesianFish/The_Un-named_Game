#include <iostream>
#include <string>
#include "functions.h"

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


void start()
{
  const string question0 = "Do you know the amount of colums and rows of your display/window?";
  int rows = 0;
  int cols = 0;
  bool isSizeKnown = false;
  //first, find the size of the screen
  cout<<"Lets find the size of your screen before you start."<<endl;
  isSizeKnown = askBoolQ(question0, 'y', 'n', true);
  if(isSizeKnown == true)
  {
    cout<<"what is the number of rows and cols of your display?";
    cin>>rows>>cols;
  }
}