#include<iostream>
using namespace std;
class student
{
	public:
		void roll_no()
		{
			cout<<"roll no is 902";
		}
};
class test
{
	public:
		void subject()
		{
			cout<<"\nenglish,hindi";
		}
};
class result    :public student,public test
{
	public:
		void mark()
		{
			cout<<"\n87 mark";
		}
};
main()
{
	result re;
	re.roll_no();
	re.subject();
	re.mark(); 
}
