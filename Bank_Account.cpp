#include<iostream>
using namespace std;
class bankaccount{
	private:
		float balance;
		float amount;
	public:
		bankaccount(float b, float a){
			balance = b;
			amount = a;
		}
		void withdraw(){
			if(amount<balance){
				cout<<"error withdrawl amount is greater than balance:"<<endl;
			}
			else{
			    balance = balance-amount;
				cout<<"withdrawl successful"<<endl;
				cout<<"New balance:"<<balance<<endl;
			}
		}	
		void deposit(float depositamount){
			balance = balance+depositamount;
			cout<<"deposit successful"<<endl;
			cout<<"new balance"<<balance<<endl;
		}	
};
int main(){
	float balance1;
	float balance2;
	float amount1;
	float amount2;
	float deposit1;
	float deposit2;
	cout<<"enter balance for 1"<<endl;
	cin>>balance1;
	cout<<"withdrawl amount for 1 is:"<<endl;
	cin>>amount1;
	cout<<"deposit amount for account 1 is:"<<endl;
	cin>>deposit1;
	cout<<"enter balance for 2"<<endl;
	cin>>balance2;
	cout<<"withdrawl amount for 2 is:"<<endl;
	cin>>amount2;
	cout<<"deposit amount for account 2 is:"<<endl;
	cin>>deposit2;
	bankaccount account1(balance1, amount1);
	bankaccount account2(balance2, amount2);
	cout<<"Account 1"<<endl;
	account1.withdraw();
	account1.deposit(deposit1);
	cout<<"Account 2"<<endl;
	account2.withdraw();
	account2.deposit(deposit2);
}