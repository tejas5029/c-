#include<iostream>
using namespace std;
class person
{
	public:
		void age()
		{
			cout<<" enter age is : 24";	
		}
};
class student  : public person
{
	public:
		void percantage()
		{
			cout<<"\n enter a percentage is : 87%";
		}
};
class teacher  : public student
{
	public:
		void salary()
		{
			cout<<"\n enter salary is : 50000";
		}
};
main()
{
	teacher th;
	th.age();
	th.percantage();
	th.salary();
}
