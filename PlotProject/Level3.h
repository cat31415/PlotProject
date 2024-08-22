#pragma once
#include "iostream"
#include "Level4.h"

using namespace System;

Operator initOpr(char*, int);
Operand initOpd(String^);
Operand initOpd(double*);

Lexem initLex(Operator, char*);
Lexem initLex(Operand, String^);