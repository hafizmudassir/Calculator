#include<iostream>
using namespace std;
void showMenu()
{
	cout<<"******MENU*******\n";
	cout<<"Press 1 for Addition..\n";
	cout<<"Press 2 for Subtraction..\n";
	cout<<"Press 3 for Multiplication..\n";
	cout<<"Press 4 for Division..\n";
	cout<<"Press 5 for Remainder..\n";
	cout<<"Press 0 for close Application..\n";
	cout<<"***********************\n";
	cout<<"Select Option : ";
}
int main()
{
	int option;
	float value1;
	float value2;
    do
    {
	showMenu();
	cin>>option;
	system("cls");
	switch(option)
	{
		case 1:
			cout<<"Enter first Number : ";
			cin>>value1;
			cout<<"Enter second Number : ";
			cin>>value2;
			cout<<"Addition of "<<value1<<" + "<<value2<<" is "<<value1+value2<<"\n";
			break;
			case 2:
			cout<<"Enter first Number : ";
			cin>>value1;
			cout<<"Enter second Number : ";
			cin>>value2;
			cout<<"Subtraction of "<<value1<<" - "<<value2<<" is "<<value1-value2<<"\n";
			break;
			case 3:
			cout<<"Enter first Number : ";
			cin>>value1;
			cout<<"Enter second Number : ";
			cin>>value2;
			cout<<"Multiplication of "<<value1<<" * "<<value2<<" is "<<value1*value2<<"\n";
			break;
			case 4:
			cout<<"Enter first Number : ";
			cin>>value1;
			cout<<"Enter second Number : ";
			cin>>value2;
			cout<<"Division of "<<value1<<" / "<<value2<<" is "<<value1/value2<<"\n";
			break;
			case 5:
				int val1;int val2;
			cout<<"Enter first Number : ";
			cin>>val1;
			cout<<"Enter second Number : ";
			cin>>val2;
			cout<<"Remainder of "<<val1<<" % "<<val2<<" is "<<val1%val2<<"\n";
			break;
			case 0: cout<<"Application Close..";
			break;
			default: cout<<"Wrong Number...\n Enter number between 0 to 5...\n";
			break;
	}
}while(option!=0);
}
