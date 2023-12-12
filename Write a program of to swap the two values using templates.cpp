#include<iostream>
using namespace std;
template <class T>
void swapping(T &a, T &b)
{
	T temp=a;
	a=b;
	b=temp;
}
main()
{
	char a='A', b='B';
	int x=10,y=20;
	
	cout<<"befor swap A:"<<a<<"    |   B:"<<b<<endl;
	swapping(a,b);
	cout<<"after swap A:"<<a<<"    |   B:"<<b<<endl; 
	
	cout<<"befor swap X:"<<x<<"    |   Y:"<<y<<endl;
	swapping(x,y);
	cout<<"after swap X:"<<x<<"    |   Y:"<<y<<endl; 
}
