#include<iostream>

#include<conio.h>
using namespace std;
 class sample

 {

 private:

 float x,y;
 int a,b;
 public:

 void get()

 {
 cout<<"enter any two number"<<endl;
 cin >>x>>y;
 a=x;
 b=y;
 }

void disp()
 {
 cout<<"First value = " <<x<<endl;
 cout<<"Second value = "<<y<<endl;
cout<<"mod ="<<mod()<<endl;
 cout<<"sum = "<<sum()<<endl;
 cout<<"sub = "<<sub()<<endl;
 cout<<"mul = "<<mul()<<endl;
 cout<<"div = "<<div()<<endl;
 
 }

 float sum()
 {
 return(x+y);
 }


 float sub()
 {
 return(x-y);
 }

 float mul()
 {
 return(x*y);
 }

 float div()
 {
 return (x/y);
 }
 int mod()
 {
 return (a % b);
 }
 };

int main()

{
	
 sample temp;
 temp.get();
 temp.disp();
 temp.sum();
 temp.sub();
 temp.mul();
 temp.div();
 temp.mod();
 return 0;
}
