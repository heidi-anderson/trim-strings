#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cctype>
#include <cstring>
#include <string>
#include <cctype>

using namespace std;

enum trimType { BOTH, FRONT, END };

//add your prototype for your cTrim function here.
//add your prototype for your sTrim function here.

void cTrim(char string[100], trimType method);
void sTrim(string& string, trimType method);
