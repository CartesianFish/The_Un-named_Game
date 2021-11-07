#include <string>

using namespace std;

#ifndef FUNCTIONS_H
#define FUNCTIONS_H


bool askBoolQ(const string question, const char trueChar, const char falseChar, const bool acceptReverseCaps);

int askIntQ(const string question, const int min, const int max);

void start();

#endif