#pragma once

#include <iostream>
#include <vector> 
#include <string>
#include <limits>
#include <sstream> 
#include <fstream>
#include "VariadicTable.h"

using namespace std;

struct topwords {
	int number;
	string word;
};

static void pressToMenu() {
    cin.ignore();
    cout << "press enter to menu";
    cin.get();
    system("cls");
}