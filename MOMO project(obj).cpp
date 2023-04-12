#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int pin,option;
	system ("color 60");
	start:
	cout << "MTN MOMO OPTIONS" << endl;
	cout << "Enter [1] Check Balance" << endl;
	cout << "Enter [2] To Transfer Money" << endl;
	cout << "Enter [3] To Resset/Change Pin" << endl;
	cout << "Enter [4] To Exit" << endl;
	cin >> option;
	if (option==1){
		int pin = 0000; // Default pin
  int old_pin,New_pin;
  string current,reference;
  string number;
  int amount;
  int balance = 1000; // Default balance
  int attempts = 0; // Counting failed attempts
int choice;
  // Authentication
  int input_pin;
  do {
    cout << "Enter your PIN: " << endl;
    cin >> input_pin;
    attempts++;
    if (input_pin != pin && attempts == 3) {
      cout << "Maximum attempts reached. Exiting program..." << endl;
      return 0;
    }
  } while (input_pin != pin);

		if (input_pin==pin){
			cout << "Hello customer, your current balance is 1,000\n" << endl;
			goto start;
		}
		
			
	}
	else if(option==2){
		cout<<"Enter Mobile Number "<<endl;
		int num;
	cin>>num;
	cout<<"Enter Amount To Transfere"<<endl;
	int amount;
	cin>>amount;
	int balance=1000;
	if(amount>balance)
	{
		cout<<"Insufficient Balance"<<endl;
		goto start;
	}
	 else{
	  int input_pin;
	  int pin=0000;
    int attempts=0;
  do {
    cout << "Enter your PIN: " <<endl;
    cin >> input_pin;
    
    attempts++;
    if (input_pin != pin && attempts == 3) {
      cout << "Maximum attempts reached. Exiting program..." << endl;
      return 0;
    }
  } while (input_pin != pin);
		
		cout<<"You Have Transfered "<<amount<<"cedis To "<<num<<endl;
     goto start;

	}
}
	 else if (option==3){
	 	cout<<"Enter Previous Pin"<<endl;
	 	int old_pin;
	 	int pin=0000;
	cin>>old_pin;
	if(old_pin==pin)
	{
		cout<<"Correct Pin"<<endl;
	}
	else
	{
		cout<<"Incorrect Pin"<<endl;
	}
	cout<<"Enter New Pin"<<endl;
	int New_pin;
	cin>>New_pin;
	pin=New_pin;
			cout << "Congratulations, you have successfully changed your pin to " <<New_pin<<endl;
			goto start;
			
		int input_pin;
		if (input_pin!=pin){
			int n=1;
			while (n<3){
        	cout << "wrong pin,try again\n" << endl;
			cin >> pin;
			n++;
	}
	}
}
else if(option==4){
	return 0;
}
else{
	goto start;
}
	
	
return 0;
}
