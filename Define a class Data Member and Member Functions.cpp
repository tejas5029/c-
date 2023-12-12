#include<iostream>
using namespace std;
class datamember
{
	public:
		string name_of_depositer;
		int account_number;
		string types_of_account;
		int balance_of_account;
		int withdrawl_amount;
		
		void inputdata()
		{
			cout<<"name of depositer = ";
			cin>>name_of_depositer;
			cout<<"account number = ";
			cin>>account_number;
			cout<<"types of account = ";
			cin>>types_of_account;
			cout<<"balance of account = ";
			cin>>balance_of_account;
			cout<<"withdrawl amount = ";
			cin>>withdrawl_amount;
		}
		

};
class memberfunction  : public datamember
{
	public:
		void displaydata()
		{
			cout<<"\n\nname of depositer = "<<name_of_depositer<<endl;
			cout<<"account number = "<<account_number<<endl;
			cout<<"types of account = "<<types_of_account<<endl;
			cout<<"balance of account = "<<balance_of_account-withdrawl_amount;
		}
};
main()
{
	memberfunction mf;
	mf.inputdata();
	mf.displaydata();
}
