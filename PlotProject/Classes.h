#pragma once
#include "iostream"

struct Operator
{
	union
	{
		double (*funary)(double*);
		double (*fbinary)(double*, double*);
	};
	int arn;
	int priority;
};

struct Operand
{
	union
	{
		double value;
		double* var;
	};
	int flag;
};

struct Lexem
{
	union
	{
		Operator opr;
		Operand opd;
	};
	int flag;
	char* text;
};

template <typename Type>
struct Node
{
	Type info;
	Node* next;
};

template <typename Type>
class list
{
public:
	Node<Type>* first;
	Node<Type>* last;
public:
	list()
	{
		first = 0;
		last = 0;
	}

	~list()
	{
		while (first)
		{
			Node<Type>* work = first;
			first = work->next;
			delete work;
		}
	}

	void push(Type& inf)
	{
		Node<Type>* work = new Node<Type>;
		work->info = inf;
		work->next = first;
		first = work;
	}

	int pop(Type& inf)
	{
		if (!first)
			return 0;
		Node<Type>* work = first;
		first = first->next;
		inf = work->info;
		delete work;
		return 1;
	}

	int get(Type& inf)
	{
		if (!first)
			return 0;
		inf = first->info;
		return 1;
	}

	void add(Type& inf)
	{
		Node<Type>* work = new Node<Type>;
		work->info = inf;
		work->next = 0;
		if (!first)
			first = work;
		else
			last->next = work;
		last = work;
	}

	int empty()
	{
		return !first;
	}
};

template <typename Type>
class queue
{
private:
	Node<Type>* top;
	Node<Type>* bottom;
public:
	queue()
	{
		top = 0;
		bottom = 0;
	}
	~queue()
	{
		while (top)
		{
			Node<Type>* work = top;
			top = work->next;
			delete work;
		}
	}

	void add(Type& inf)
	{
		Node<Type>* work = new Node<Type>;
		work->info = inf;
		work->next = 0;
		if (!top)
			top = work;
		else
			bottom->next = work;
		bottom = work;
	}

	int pop(Type& inf)
	{
		if (!top)
			return 0;
		Node<Type>* work = top;
		top = top->next;
		inf = work->info;
		delete work;
		return 1;
	}

	int get(Type& inf)
	{
		if (!top)
			return 0;
		inf = top->info;
		return 1;
	}

	int empty()
	{
		return !top;
	}
};

template <typename Type>
class stack
{
private:
	Node<Type>* top;
public:
	stack()
	{
		top = 0;
	}

	~stack()
	{
		while (top)
		{
			Node<Type>* work = top;
			top = work->next;
			delete work;
		}
	}

	void push(Type& inf)
	{
		Node<Type>* work = new Node<Type>;
		work->info = inf;
		work->next = top;
		top = work;
	}

	int pop(Type& inf)
	{
		if (!top)
			return 0;
		Node<Type>* work = top;
		top = top->next;
		inf = work->info;
		delete work;
		return 1;
	}

	int get(Type& inf)
	{
		if (!top)
			return 0;
		inf = top->info;
		return 1;
	}

	int empty()
	{
		return !top;
	}
};

template <typename Type>
class iterator
{
public:
	Node<Type>* current;
public:
	void begin(list<Type>& l)
	{
		current = l.first;
	}

	void end(list<Type>& l)
	{
		current = l.last;
	}

	int get(Type& inf)
	{
		if (!current)
			return 0;
		inf = current->info;
		return 1;
	}

	int next()
	{
		if (!current)
			return 0;
		current = current->next;
		return 1;
	}

	int getNext(Type& inf)
	{
		if (!current || !current->next)
			return 0;
		inf = current->next->info;
		return 1;
	}

	int set(Type& inf)
	{
		if (!current)
			return 0;
		current->info = inf;
		return 1;
	}

	int setNext(Type& inf)
	{
		if (!current || !current->next)
			return 0;
		current->next->info = inf;
		return 1;
	}

	int check()
	{
		return (int)current;
	}
};