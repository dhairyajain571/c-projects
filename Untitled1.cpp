#include<iostream>
using namespace std;

void PassByValue (int x);

void PassByReference (int *x);

int main()
{
	int RAM = 65;
	int GST = 98;
	
	PassByValue(RAM);
	PassByReference(&GST);
}
void PassByValue (int x)
{
	x=99;
}
void PassByReference (int *x)
{
	*x=9;
}
