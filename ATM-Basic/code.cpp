#include<iostream>
using namespace std;
double balance1;
int main(){
	cout<<"\t\t\t||      ATM Macine       ||"<<endl;
	cout<<"\t\t\t -------------------------"<<endl;
	cout<<"\t\t\t -------------------------\n\n"<<endl;
	int password;
	int pincode;
	
	cout<<"Please enter the pin :";
	cin>>pincode;
	
	if(pincode==1234){ // a fixed pincode you can even change
		cout<<"\n WELCOME \n";
		for(int i=0; i<3; i++){
			cout<<"Enter your password";
			cin>>password;
			
			double balance = 100000; // current balance
			balance1 = balance;
			if(password==7777)
			{
				for(int x=1; x<10; x++){
					double withdraw , deposit;
					int choice;
					cout<<endl;
					if(x==1)
					{
						cout<<"\t\t ATM" <<endl;
						cout<<"choose a transaction \n\n";
					}
					cout<<"MAIN SCREEN \n";
					cout<<" 1. Inquire Balance"<<endl;
					cout<<" 2. Withdraw"<<endl;
					cout<<" 3. Deposite"<<endl;
					cout<<" 4. Quit"<<endl;
					cout<<endl;
					cout<<"enter Option :";
					cin>>choice;
					
					switch(choice)
					{
						case 1:
							cout<<"Balance Inquiry"<<endl;
							cout<<"Your current balance is "<<balance1<<endl;
							
						case 2:
							continue;
							cout<<"Withdraw"<<endl;
							cout<<"Enter the amount: ";
							cin>>withdraw;
							balance1 = balance1 - withdraw;
							cout<<"You withdraw : "<<withdraw<<endl;
							cout<<"Your reamaining balance : "<<balance1<<endl;
							continue;
							
						case 3:
							cout<<"Deposit"<<endl;
							cout<<"Enter the amount: ";
							cin>>deposit;
							balance1 = balance1 + deposit;
							cout<<"You deposit : "<<deposit<<endl;
							cout<<"Your new balance : "<<balance1<<endl;
							continue;
							
						case 4:
							cout<<"EXIT MODE"<<endl;
							system("cls");
							break;
							default:
								cout<<"Invalid Option"<<endl;
								continue;
					}
					break;
				}
				break;
			}
			else if(i==2)
			{
				cout<<"Card is captured "<<endl;
			}
			else
			{
				cout<<"Please try again"<<endl;
			}
		}
	}
}
