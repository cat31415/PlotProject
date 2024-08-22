#include "Level3.h"

Operator initOpr(char* c, int arn)
{
	Operator opr;
	opr.arn = arn;
	if (!strcmp(c, "+"))
	{
		opr.fbinary = sum;
		opr.priority = 1;
	}
	else if (!strcmp(c, "-"))
	{
		if (arn)
		{
			opr.funary = min;
			opr.priority = 5;
		}
		else
		{
			opr.fbinary = dif;
			opr.priority = 1;
		}
	}
	else if (!strcmp(c, "*"))
	{
		opr.fbinary = prod;
		opr.priority = 2;
	}
	else if (!strcmp(c, "/"))
	{
		opr.fbinary = div;
		opr.priority = 2;
	}
	else if (!strcmp(c, "^"))
	{
		opr.fbinary = deg;
		opr.priority = 3;
	}
	else if (!strcmp(c, "sin"))
	{
		opr.funary = sin;
		opr.priority = 4;
	}
	else if (!strcmp(c, "cos"))
	{
		opr.funary = cos;
		opr.priority = 4;
	}
	else if (!strcmp(c, "log"))
	{
		opr.funary = log;
		opr.priority = 4;
	}
	else if (!strcmp(c, "exp"))
	{
		opr.funary = exp;
		opr.priority = 4;
	}
	else if (!strcmp(c, "sqr"))
	{
		opr.funary = sqr;
		opr.priority = 3;
	}
	else if (!strcmp(c, "("))
		opr.priority = 6;
	else if (!strcmp(c, ")"))
		opr.priority = 6;
	return opr;
}

Operand initOpd(String^ number)
{
	Operand opd;
	opd.value = Convert::ToDouble(number);
	opd.flag = 1;
	return opd;
}

Operand initOpd(double* var)
{
	Operand opd;
	opd.var = var;
	opd.flag = 2;
	return opd;
}

Lexem initLex(Operator opr, char* text)
{
	Lexem lex;
	lex.opr = opr;
	lex.flag = 1;
	lex.text = new char[strlen(text)];
	strcpy(lex.text, text);
	return lex;
}

Lexem initLex(Operand opd, String^ text)
{
	Lexem lex;
	lex.opd = opd;
	lex.text = new char[strlen(trans_string_char(text))];
	strcpy(lex.text, trans_string_char(text));
	lex.flag = 2;
	return lex;
}