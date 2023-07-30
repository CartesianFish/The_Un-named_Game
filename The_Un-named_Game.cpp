// The_Un-named_Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <string>
#include "art.h"
#include "functions.h"
#include "start.h"
#include <stdlib.h>
#include "tile_space.h"
#include <chrono>
#include <thread>

using namespace std;


int main()
{
    const int SLEEP_TIME = 4;
    bool exit = false;
    while (exit == false)
    {
        int amount = 0;
        //gameField fieldLayers;
        string input = "";
        cout << "Command: ";
        cin >> input;
        //input = getStartCommands();
        if (input == "go" || input == "Go")
        {
            cout << "Amount: ";
            cin >> amount;
            cout.flush();
            this_thread::sleep_for(std::chrono::milliseconds(SLEEP_TIME));
            //art artPrinter;
            for (int i = 0; i < amount; i++)
            {
                //artPrinter.printArt(0);
                cout.flush();
                cout << i + 1 << endl;
                this_thread::sleep_for(std::chrono::milliseconds(SLEEP_TIME));
                //system("cls");
            }
            input = "";
        }
        if (input == "stop")
        {
            exit = true;
        }
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
