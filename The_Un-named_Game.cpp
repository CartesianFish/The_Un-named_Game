// The_Un-named_Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <String>
#include "art.h"
#include "functions.h"
#include "start.h"
#include <stdlib.h>
#include "tile_space.h"
#include <chrono>
#include <thread>
#include <windows.h> 
//#include <SFML/Graphics.hpp>

using namespace std;


int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    //cout << "This text will be green\n";
    const signed short int SLEEP_TIME = 10;
    bool exit = false;
    cout << "You Will Need to Resize Your terminal Window using 'control' + '+' " << endl;
    while (exit == false)
    {
        int amount = 0;
        gameField fieldLayers;
        string input;
        cout << "Command: ";
        cin >> input;
        if (input == "stop")
        {
            exit = true;
        }
        //getScreenSize();
        if (input == "go" || input == "Go")
        {
            cout << "Amount: ";
            cin >> amount;
            cout.flush();
            this_thread::sleep_for(std::chrono::milliseconds(SLEEP_TIME));
            //art artPrinter;
            for (int i = 0; i < amount; i++)
            {
                fieldLayers.printField();
                cout.flush();
                cout << i + 1 << endl;
                this_thread::sleep_for(std::chrono::milliseconds(SLEEP_TIME));
            }
            input = "";
        }
    }
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
