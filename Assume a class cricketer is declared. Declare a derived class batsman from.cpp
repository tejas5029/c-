#include<iostream>
using namespace std;
class cricketer
{
	public:
	int average_run;
	
	
	
	void inputdata()
	{
		cout<<"enter average run:"<<endl;
		cin>>average_run;
	}
	void displaydata()
	{
		cout<<"average run:"<<average_run<<endl;
	}	
};
class batsman
{
	public:
		int total_run;
		string average_run;
		string best_performance;
		
		
		void inputdata()
		{
			cout<<"enter total run:"<<endl;
			cin>>total_run;
			cout<<"enter average run:"<<endl;
			cin>>average_run;
			cout<<"enter best performance:"<<endl;
			cin>>best_performance;
		}
		void displaydata()
		{
			cout<<"total run:"<<total_run<<endl;
			cout<<"average run:"<<average_run<<endl;
			cout<<"best performance:"<<best_performance<<endl;
		}
};
main()
{
	cricketer c1;
	batsman b1;
	c1.inputdata();
	c1.displaydata();
	
	b1.inputdata();
	b1.displaydata();
}
