#include <iostream>

/* money project */
using namespace std;

int main(int argc, char** argv) {
	
	int opt,pin, n_pin, cn_pin;
	string momo_num, confirm, ref;
	double amount;
	
	// main menu
	cout<<"Welcome to Mahama Abdul Razack mobile money"<<endl;
	cout<<"1.send money"<<endl;
	cout<<"2.check balance"<<endl;
	cout<<"3.change & reset pin"<<endl;
	cin>>opt;
	
	// condition
	
	//send money
	if(opt==1){
		
		do{
			cout<<"enter momo number"<<endl;
			cin>>momo_num;
			cout<<"confirm momo number"<<endl;
			cin>>confirm;
			
			if(momo_num!=confirm){
				cout<<"wrong confirmation momo number"<<endl;
			}
		}
		while(momo_num!=confirm);
		cout<<"enter your referrence."<<endl;
		cin>>ref;
		
		do{
		 cout<<"enter amount"<<endl;
		 cin>>amount;
		 if((amount<1) || (amount>1000)){
		 	cout<<"invalid amount"<<endl;
		 }
		}
		while((amount<1) || (amount>1000));
		
		int attempt=0;
		do{
			cout<<"enter your pin"<<endl;
			cin>>pin;
			if(pin==0000){
				cout<<"correct pin "<<endl;
			}
			else{
				attempt++;
				cout<<"wrong pin.retry"<<endl;
				
			}
		}
		while(attempt<=3 && pin!=0000);
		
		if(attempt>=3){
			cout<<"Retry in 5 minus time."<<endl;
			
		}
		double c_balance;
		c_balance=1000-amount;
		cout<<"you have send GHC"<<amount<<" to"<<confirm<<endl;
		cout<<"your referrence is "<<ref <<"your balance is "<<c_balance<<endl;
		
	}
	//check balance
	else if(opt==2){
	
	int attempt=0;
		do{
			cout<<"enter your pin"<<endl;
			cin>>pin;
			if(pin==0000){
				cout<<"correct pin "<<endl;
			}
			else{
				attempt++;
				cout<<"wrong pin.retry"<<endl;
				
			}
		}
		while(attempt<=3 && pin!=0000);
		
		if(attempt>=3){
			cout<<"Retry in 5 minus time."<<endl;
			
		}
		cout<<"your current balance is GHC1000,"<<endl;
		cout<<"your available balance is GHC1000.Thank you!"<<endl;
		}
	//change & reset pin
	else if(opt==3){
		int attempt=0;
		do{
			cout<<"confirm your pin"<<endl;
			cin>>pin;
			if(pin==0000){
				cout<<"correct pin "<<endl;
			}
			else{
				attempt++;
				cout<<"wrong pin.retry"<<endl;
				
			}
		}
		while(attempt<=3 && pin!=0000);
		
		if(attempt>=3){
			cout<<"Retry in 5 minus time."<<endl;
			
		}
		
		
		
		do{
			cout<<"enter your new pin."<<endl;
	    	cin>>n_pin;

	    	cout<<"confirm yuor nen pin."<<endl;
	    	cin>>cn_pin;
	    	
			if(n_pin==cn_pin){
				cout<<"pin successful change "<<endl;
			}
			else{
				attempt++;
				cout<<"wrong confirm pin.retry"<<endl;
				
			}
		}
		while(attempt<=3 && pin!=cn_pin);
		
		if(attempt>=3){
			cout<<"Retry in 5 minus time."<<endl;
			
		}
	}
	else{
		cout<<"wrong entry"<<endl;
	}
	
	
	
	return 0;
}
