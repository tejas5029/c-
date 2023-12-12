#include<iostream>
using namespace std;
inline int cube(int r)
{
	int result=r*r*r;
	return result;
}
main()
{
	int r=2;
	cout<<"cube is"<<cube(r); 
}
