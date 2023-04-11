#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int pin,option,pw=0000;
	system ("color 60");
	start:
	cout << "MTN MOMO OPTIONS" << endl;
	cout << "Enter [1] Check Balance" << endl;
	cout << "Enter [2] To Transfer Money" << endl;
	cout << "Enter [3] To Resset/Change Pin" << endl;
	cout << "Enter [4] To Exit" << endl;
	cin >> option;
	if (option==1){
		cout << "Enter pin" << endl;
		cin >>pin;	
		if (pin!=pw){
			int n=1; 
		 while (n<3){
			cout << "wrong pin,try again" << endl;
			n++;
			cin >> pin;
		else (pin==pw){
			cout << "Hello customer, your current balance is 1,000\n" << endl;
			goto start;
			
		}
	}
		else (pin==pw){
			cout << "Hello customer, your current balance is 1,000\n" << endl;
			goto start;
		}
	}
			
	}
	else if(option==2){
		cout << "Enter amount" << endl;
		int amount;
		cin >> amount;
		if (amount>1000){
			cout << "The value entered is greater than current balance" << endl;
			goto start;
			
		}
		else {
			cout << "Enter number" << endl;
			int num;
			cin >>num;
			cout << "Enter pin" << endl;
			cin >> pin;
			if (pin==pw){
				cout << "You have successfylly sent" <<amount << " to " << num<< endl;
				goto start;
			}
			else if(pin!=pw){
				int n=1;
			while (n<3){
        	cout << "wrong pin,try again\n" << endl;
			cin >> pin;
			n++;
	}
		
		}
	}
}
	else if (option==3){
		int npin;
		cout << "Enter current pin" <<endl;
		cin>>pin; 
		if (pin==pw){
			cout << "Enter new pin" <<endl;
			cin >> npin;
			cout << "Congratulations, you have successfully changed your pin" <<endl;
			goto start;
		
		}
		if (pin!=pw){
			int n=1;
			while (n<3){
        	cout << "wrong pin,try again\n" << endl;
			cin >> pin;
			n++;
	}
	}
}
else{
	goto start;
}
	
	
return 0;
}
