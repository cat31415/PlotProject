#include "Level2.h"

double maxF(double a, double b, list<Lexem>& l)
{
	double h = (b - a) / 1000;
	double max = calc(a, l);
	for (double x = a + h; x <= b; x += h)
	{
		double temp = calc(x, l);
		if (temp > max)
			max = temp;
	}
	return max;
}

double minF(double a, double b, list<Lexem>& l)
{
	double h = (b - a) / 1000;
	double min = calc(a, l);
	for (double x = a + h; x <= b; x += h)
	{
		double temp = calc(x, l);
		if (temp < min)
			min = temp;
	}
	return min;
}

double calc(double x, list<Lexem>& l)
{
	stack<Lexem> s;
	iterator<Lexem> it;
	it.begin(l);
	Lexem lex, temp1, temp2, res;
	Operand opd;

	while (it.get(lex))
	{
		if (lex.flag == 2)
			s.push(lex);
		else if (lex.opr.arn == 1)
		{
			s.pop(temp1);
			if (temp1.opd.flag == 2)
				temp1.opd.value = x;
			opd.value = lex.opr.funary(&temp1.opd.value);
			res.opd = opd;
			s.push(res);
		}
		else
		{
			s.pop(temp2);
			s.pop(temp1);
			if (temp2.opd.flag == 2)
				temp2.opd.value = x;
			if (temp1.opd.flag == 2)
				temp1.opd.value = x;
			opd.value = lex.opr.fbinary(&temp1.opd.value, &temp2.opd.value);
			res.opd = opd;
			s.push(res);
		}
		it.next();
	}
	s.pop(lex);
	if (lex.opd.flag == 2)
		return x;
	else
		return lex.opd.value;
}

void parsLexs(list<Lexem>& l, String^ s, double* var)
{
	int n = s->Length;
	for (int i = 0; i < n; i++)
	{
		if (checkSign(s[i]))
		{
			char* ch = make_char_string(s, i, 1);
			int arn = 0;
			if (!strcmp(ch, "-") && (!i || s[i - 1] == '('))
				arn = 1;
			l.add(initLex(initOpr(ch, arn), ch));
			delete[] ch;
		}
		else if (checkOpr(s[i]))
		{
			char* ch = make_char_string(s, i, 3);
			l.add(initLex(initOpr(ch, 1), ch));
			i += 2;
			delete[] ch;
		}
		else
		{
			String^ number;
			int j = 0;
			while (i + j < n && !checkSign(s[i + j]) && !checkOpr(s[i + j]))
			{
				number += s[i + j];
				j++;
			}

			if (!checkSyms(number[j - 1]))
			{
				char* ch = make_char_string(number, j - 1, 1);
				String^ a = gcnew String(ch);
				delete[] ch;
				if (j > 1)
				{
					number = number->Remove(j - 1);
					l.add(initLex(initOpd(number), number));
					l.add(initLex(initOpr("*", 0), "*"));
				}
				l.add(initLex(initOpd(var), a));
			}
			else
				l.add(initLex(initOpd(number), number));
			i += (j - 1);
		}
	}
}

void makePol(list<Lexem>& l)
{
	queue<Lexem> q;
	stack<Lexem> s;

	Lexem lex;
	while (l.pop(lex))
	{
		if (lex.flag == 2)
			q.add(lex);
		else
		{
			Lexem top;
			s.get(top);
			if ((s.empty() || !strcmp(lex.text, "(") || !strcmp(top.text, "("))&& strcmp(lex.text, ")"))
				s.push(lex);
			else if (!strcmp(lex.text, ")"))
				for (;;)
				{
					Lexem temp;
					s.pop(temp);
					if (!strcmp(temp.text, "("))
						break;
					q.add(temp);
				}
			else
			{
				Lexem temp;
				for (;;)
				{
					s.get(temp);
					if (lex.opr.priority > temp.opr.priority || !strcmp(temp.text, "(") || s.empty())
						break;
					s.pop(temp);
					q.add(temp);
				}
				s.push(lex);
			}
		}
	}
	while (s.pop(lex))
		q.add(lex);

	while (q.pop(lex))
		l.add(lex);
}