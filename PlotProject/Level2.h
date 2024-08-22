#pragma once
#include "iostream"
#include "Level3.h"

using namespace System;

double calc(double, list<Lexem>&);

double maxF(double, double, list<Lexem>&);
double minF(double, double, list<Lexem>&);

void parsLexs(list<Lexem>&, String^, double*);
void makePol(list<Lexem>&);