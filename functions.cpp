#include string

using namespace std;

bool askBoolQ(const string question, const char char1, const char char2, const bool acceptCaps, const bool repeatQuestion = true)
{
  char answerChar = '`'; 
  char char1ReverseCap = '`';
  char char2ReverseCap = 'a';
  if(acceptCaps == true && char1 > 97 && char1 < 122)
  {
    char1ReverseCap = char1 - 32;
  }

  if(acceptCaps == true && char2 >= 97 && char2 =< 122)
  {
    char2ReverseCap = char2 - 32;
  }

  if(acceptCaps == true && char1 >= 65 && char1 =< 90)
  {
    char1ReverseCap = char1 + 32;
  }

  if(acceptCaps == true && char2 >= 65 && char2 =< 90)
  {
    char2ReverseCap = char2 + 32;
  }

  while(answerChar != char1 && answerChar != char2 && answerChar != char1ReverseCap && answerChar != char2ReverseCap)
  {
    cout<<question<<endl;
    cin>>answerChar;
  }


}


void start()
{
  bool isSizeKnown = false;
  char isSizeKnownAnswer = 'a';
  //first, find the size of the screen
  cout<<"Lets find the size of your screen before you start."<<endl<<"Do you know the amount of colums and rows of your display/window?"<<endl;
  cin>>isSizeKnownAnswer;
  if(isSizeKnownAnswer )
}