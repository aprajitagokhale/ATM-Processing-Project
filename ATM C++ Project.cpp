//ATM Machine Project
#include <iostream>
using namespace std;

int main()
{
	int pin=1979,balance=40000,choices,x,y,amount1,amount2;           
	cout << "Enter your PIN" << endl;           //Enter PIN option that will flash on screen
	cin >> x;
	system("cls");    //clear screen
	if (pin == x)
	{ 
		while (1 > 0)     //process in loop 
		{
			//Menu that will show on screen only if user will enter correct pin
			cout << "1.Check Balance" << endl;
			cout << "2.Deposits" << endl;
			cout << "3.Withdraw" << endl;
			cout << "4.Cancel" << endl << endl;
			cout << "Enter your choice" << endl;
			cin >> choices;
			system("cls");                          //clear above screen
			switch (choices)                       //the option will flash acrdng to users choice
			{
			case 1: //if option 1 is choosen by user
				system("cls");
				cout << "Your Current Account Balance " <<balance<< endl<<endl; 
				break;

			case 2:  //if option 2 is choosen by user
				system("cls");
				cout << "Here are your last five deposits" << endl;   
				cout << "1.20,000 on 27-05-21 " << endl;
				cout << "2.25,000 on 15-07-21 " << endl;
				cout << "3.50,000 on 28-10-21 " << endl;
				cout << "4.12,000 on 29-12-21 " << endl;
				cout << "5.43,000 on 27-01-22 " << endl << endl;
				break;

			case 3:  //if option 3 is choosen by user 
				system("cls");
				cout << "1.current" << endl;        //now there are 2 options available in option 3
				cout << "2.Savings" << endl;
				cout << "Enter your choice" << endl;
				cin >> y;
				switch (y)
				{
				case 1:
					system("cls");
					cout << "Enter Amount" << endl;
					cin >> amount1;
					if (amount1 <= balance)     //if given amount is less than or equal to bank blance
					{
						system("cls");
						cout << "Transaction Successfull" << endl;
						cout << "Withdrawl Amount is " << amount1 << endl << endl;
						break;
					}
					else    //if given amount is more than balance
						system("cls");
						cout << "Balance not Sufficient" << endl << endl;

				case 2:
					system("cls");
					cout << "Enter Amount" << endl;
					cin >> amount2;
					if (amount2 <= balance)
					{
						system("cls");
						cout << "Transaction Successfull" << endl;
						cout << "Withdrawl Amount is " << amount2 << endl << endl;
						break;
					}
					else
						system("cls");
						cout << "Balance not Sufficient" << endl << endl;
				}
				break;

			case 4:
				system("cls");
				cout << "ThankYou for Visiting" << endl << endl;
				exit(0);       //to exit from the loop
				break;

			default:
				system("cls");
				cout << "Invalid option" << endl << endl; //if user will not enter the following menu number
				break;
			}
		}
	}
	else
	{ 
		//if user will enter wrong pin
		cout << "ERROR!!" << endl;
	}
	return 0;
}

