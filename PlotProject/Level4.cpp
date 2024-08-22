#include "Level4.h"

double sum(double* a, double* b) { return *a + *b; }
double dif(double* a, double* b) { return *a - *b; }
double prod(double* a, double* b) { return *a * *b; }
double div(double* a, double* b) { return  *a / *b; }
double deg(double* a, double* b) { return pow(*a, *b); }
double min(double* a) { return *a * -1; }
double sin(double* a) { return sin(*a); }
double cos(double* a) { return cos(*a); }
double log(double* a) { return log(*a); }
double exp(double* a) { return pow(2.71828, *a); }
double sqr(double* a) { return sqrt(*a); }

char* trans_string_char(String^ s)
{
	int n = s->Length + 1;
	char* c = new char[n];
	for (int i = 0; i < n - 1; i++)
		c[i] = s[i];
	c[n - 1] = '\0';
	return c;
}

char* make_char_string(String^ s, int pos, int count)
{
	char* str = new char[count + 1];
	for (int i = 0; i < count; i++)
		str[i] = s[pos + i];
	str[count] = '\0';
	return str;
}

int checkSign(char c)
{
	char sign[] = "+-*/^()";
	char ch[] = { c };
	return strpbrk(ch, sign) ? 1 : 0;
}

int checkOpr(char c)
{
	char sign[] = "scle";
	int i;
	for (i = 0; i < 4 && c != sign[i]; i++);
	return i == 4 ? 0 : i + 1;
}

int checkSyms(char c)
{
	char a[19] = { '+', '-', '*', '/', '^', '(', ')', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ',' , '\0'};
	return strpbrk(&c, a) ? 1 : 0;
}

int compareChar(char* a, char* b)
{
	return *a - *b;
}