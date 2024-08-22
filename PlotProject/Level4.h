#pragma once
#include "iostream"
#include "Classes.h"

using namespace System;

double sum(double*, double*);
double dif(double*, double*);
double prod(double*, double*);
double div(double*, double*);
double deg(double*, double*);
double min(double*);
double sin(double*);
double cos(double*);
double log(double*);
double exp(double*);
double sqr(double*);

char* trans_string_char(String^);
char* make_char_string(String^, int, int);

int checkSign(char);
int checkOpr(char);
int checkSyms(char);

template <typename Type>
int belong(Type* a, Type* ar, int n, int (*pcmp)(Type*, Type*))
{
    int i;
    for (i = 0; i < n && pcmp(a, ar + i); i++);
    return i == n ? 0 : 1;
}

int compareChar(char*, char*);