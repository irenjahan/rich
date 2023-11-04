
#include<iostream>
#include<stdio.h>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<windows.h>
using namespace std;
class Bus
{
public:
	string b_no,b_name,d_name;
	int b_seats;
void login();
void Registration();
void forgot();
void menu();
void Student();
void teacher();
void staff();
void off_day();
void t_off_day();
void staff_off_day();
void working_day();
void t_working_day();
void staff_working_day();
void ju_to_dhaka();
void t_ju_to_dhaka();
void staff_ju_to_dhaka();
void dhaka_to_ju();
void t_dhaka_to_ju();
void staff_dhaka_to_ju();
void ju_to_dhaka_offday();
void t_ju_to_dhaka_offday();
void staff_ju_to_dhaka_offday();
void dhaka_to_ju_offday();
void t_dhaka_to_ju_offday();
void staff_dhaka_to_ju_offday();
void again_option();
void booking();

};
int main(){

	system("cls");
    system("color 5f");
    Bus obj;
	int choice;
	cout<<"\t\t\t ________\n\n";

	cout<<"\t\t\t         Welcome to Jahangirnagar University Transport  login page      \n\n";

	cout<<"\t\t\t ___      Menu     ____\n\n";
	cout<<"                                                                             \n\n";
	cout<<"\n\n 1. LOGIN                       |";
	cout<<"\n\n 2. REGISTRATION                |";
	cout<<"\n\n 3.FORGOT PASSWORD              |";
	cout<<"\n\n 4. EXIT                        |";
	cout<<"\t\t\t\n\n\n Enter your choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			obj.login();
			break;
		case 2:
			obj.Registration();
			break;
		case 3:
			obj.forgot();
			break;
		case 4:
			cout<<"\t\t\t Thank you !";
			default:
				system("cls");
				cout<<"\t\t\t Please select from the option above:";
			main();

	}

return 0;
}

void Bus::login()
{
	
	int count=0;
	string userid,password,id,pass;
	system("cls");
	cout<<"\t\t\t Please enter your username and password:";
	cout<<"\n\n\n USERNAME:";
	cin>>userid;
	cout<<"\n\n\n PASSWORD:";
	cin>>password;
	ifstream input("records.txt");
	while(input>>id>>pass)
	{
		if(id==userid && pass==password)
		{
			count=1;
			system("cls");
		}
	}
	input.close();
	if(count==1)
	{
		cout<<userid<<"\t\t\t Your login is successfully !";
		menu();
		
		
	}
	else
	{
		cout<<"\n LOGIN ERROR \n please check your password and username";
		main();
	}
}
void Bus::Registration()
{
	string ruserid,rpassword,rid,rpass;
	system("cls");
	cout<<"\t\t\t Enter your username:";
	cin>>ruserid;
	cout<<"\t\t\t Enter your password:";
	cin>>rpassword;

	ofstream f1("records.txt",ios::app);
	f1<<ruserid<<" "<<rpassword<<endl;
	system("cls");
	cout<<"\t\t\t Your Registration  is successfully!";
	cout<<"\n\n\t\t\t Username:"<<ruserid<<"     "<<"Password:"<<rpassword;
	main();
}
void Bus::forgot()
{
	int option;
	system("cls");
	cout<<"\t\t\t  You forgot password??";
	cout<<"\n\n 1.Search your id by username";
	cout<<"\n\n 2.Go to back home";
	cout<<"\n\n\n Enter your choice:";
	cin>>option;
	switch(option)
	{
		case 1:
			{
				system("cls");
				int count=0;
				string suserid,sid,spass;
				cout<<"\n\t\t\t Enter the username which you remember:";
				cin>>suserid;
				ifstream f2("records.txt");
				while(f2>>sid>>spass)
				{
					if(sid==suserid)
					{
						count=1;
					}
				}
				f2.close();
				if(count==1)
				{
					system("cls");
			     	int option;
					cout<<"\n\n\n you user id is found!";
					cout<<"\n\n\n your password is :"<<spass;
				    cout<<"\n\n\nGo home to press 1:";
	             	cin>>option;
	         	if(option==1){
	            	main();
            	}
				}
				else
				{
					system("cls");
				    int option;
					cout<<"\n\n\n Sorry! Your account is not found";
					cout<<"\n\n\nGo home to press 1:";
	            	cin>>option;
	         	if(option==1){
	            	main();
            	}
				else
				{
				forgot();
				}
				}
				break;
			}
			case 2:
				{
					main();
				}
				default:
					cout<<"\n\n\n Wrong choice ,please try again";
					forgot();
	}
}
void Bus::menu()
{
	system("cls");
	int option1;
	cout<<"\t\t\t          \n\n";

	cout<<"\t\t\t         Your Login is successful      \n\n";
    
	cout<<"\n\n Menu";
	cout<<"\n\n 1. Student bus";
	cout<<"\n\n 2. Teacher bus";
	cout<<"\n\n 3. Staff bus";
	cout<<"\n\n 4. Book a seat";
	cout<<"\n\n 5. Home Page";
	cout<<"\n\n Enter your option :";
	cin>>option1;
	switch(option1)
	{
		case 1:
			Student();
			break;
		case 2:
			teacher();
			break;
		case 3:
			staff();
			break;
		case 4:
			booking();
			break;
		case 5:
			main();
			break;
			default:
		cout<<"\n\n you can not select option";
	}
}
void Bus::Student()
{
	int option;
	system("cls");
	cout<<"\n\n ___Jahangirnagar University Transport System___";
	cout<<"\n\n 1.Week day";
	cout<<"\n\n 2. Weekend";
	cout<<"\n\n 3. Previous page";
	cout<<"\n\n 4. Home page";
	cout<<"\n\n Enter your option : ";
	cin>>option;
	switch(option)
	{
		case 1:
			working_day();
			break;
		case 2:
			off_day();
			break;
		case 3:
			menu();
			break;
		case 4:
			main();
			break;
			default:
				cout<<"\n\n cann`t choice any option";
	}


}
void Bus::working_day()
{
	int option;
	system("cls");
	cout<<"\t\t\t ___Jahangirnagar University Transport System___";
	cout<<"\n\n\n 1.Jahangirnagar University to Dhaka";
	cout<<"\n\n\n 2. Dhaka to Jahangirnagar University";
	cout<<"\n\n\n 3. Previous page";
	cout<<"\n\n\n 4. Home page";
	cout<<"\n\n\n Enter your Option: ";
	cin>>option;
	switch(option)
	{
		case 1:
			ju_to_dhaka();
			break;
		case 2:
			dhaka_to_ju();
			break;
		case 3:
			Student();
			break;
		case 4:
			main();
			break;
			default:
				cout<<"\n\n\n Please Enter your Right Option!";
	}
}
void Bus::ju_to_dhaka()
{
	int option;
	system("cls");
	cout<<"\t\t\t ______Jahangirnagar University Transport System_____";
	cout<<"\n\n\n___________Route of Bus__________";
	cout<<"\n\n\n 1.Jahangirnagar University to Bhangobazar";
	cout<<"\n\n\n 2. Jahangirnagar University to Airport";
	cout<<"\n\n\n 3. Jahangirnagar University to Mirpur";
	cout<<"\n\n\n 4. Jahangirnagar University to Farmgate";
	cout<<"\n\n\n 5. Previous page";
	cout<<"\n\n\n 6. Home page";
	cout<<"\n\n\n Enter your option : ";
	cin>>option;
	switch(option)
	{
		case 1:
			int option;
			system("cls");
			cout<<"\n\n _______________Route of Bus_______________";
			cout<<"\n\n The Number of 3 bus at 3:05pm ";
			cout<<"\n\n JU-Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
			cout<<"\n\n\n\n The number of 2 bus at 5:00pm";
		    cout<<"\n\n JU-Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
		    cout<<"\n\n\n\nThe number of one bus at 8:00pm";
		    cout<<"\n\n JU-Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
		    cin>>option;
			if(option==1)
			{
			   ju_to_dhaka();
			}

			break;
		case 2:
			int op;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
		    cout<<"\n\n The Number of 2 bus at 3:05pm ";
			cout<<"\n\n JUAmin Bazar--Gabtoli--Mohakhali--Airport";
			cout<<"\n\n\n\n The number of 2 bus at 5:00pm";
		    cout<<"\n\n JU-Amin Bazar--Gabtoli----Mohakhali--Airport";
		    cout<<"\n\n\n\nThe number of one bus at 8:00pm";
		    cout<<"\n\n JU-Amin Bazar--Gabtoli--Mohakhali--Airport";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op;
			if(op==1)
			{
			   ju_to_dhaka();
			}

			break;
		case 3:
			int op1;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n The Number of 3 bus at 3:05pm ";
			cout<<"\n\n JU-Bank Town--Savar--Hemayetpur--Technical--Mirpur1-Mirpur14";
			cout<<"\n\n\n\n The number of 2 bus at 5:00pm";
		    cout<<"\n\n JU-Bank Town--Savar--Hemayetpur--Technical--Mirpur1-Mirpur14";
		    cout<<"\n\n\n\nThe number of one bus at 8:00pm";
		    cout<<"\n\n\n JU-Bank Town--Savar--Hemayetpur--Technical--Mirpur1-Mirpur14";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
		    cin>>op1;
			if(op1==1)
			{
			   ju_to_dhaka();
			}
			break;
		case 4:
			int op2;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
		    cout<<"\n\n The Number of 3 bus at 3:05pm ";
			cout<<"\n\n JU-Bank Town-Savar--Kallyanpur--Shyamoli--Manik Mia Avenue";
			cout<<"\n\n\n\n The number of 2 bus at 5:00pm";
		    cout<<"\n\n JU-Bank Town-Savar--Kallyanpur--Shyamoli--Manik Mia Avenue";
		    cout<<"\n\n\n\nThe number of one bus at 8:00pm";
            cout<<"\n\n JU-Bank Town-Savar--Kallyanpur--Shyamoli--Manik Mia Avenue";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op2;
			if(op2==1)
			{
			   ju_to_dhaka();
			}

			break;
		case 5:
			working_day();
			break;
		case 6:
			main();
			break;
			default:
				cout<<"\n\n Please Enter your right option";
	}
	getch();

}
void Bus::dhaka_to_ju()
{
	int option;
	system("cls");
	cout<<"\t\t\t ______Jahangirnagar University Transport System_____";
	cout<<"\n\n\n___________Route of Bus__________";
	cout<<"\n\n\n 1. Bhangobazar to Jahangirnagar University";
	cout<<"\n\n\n 2. Airport to Jahangirnagar University";
	cout<<"\n\n\n 3. Mirpur to Jahangirnagar University";
	cout<<"\n\n\n 4. Farmgate to Jahangirnagar University";
	cout<<"\n\n\n 5. Previous page";
	cout<<"\n\n\n 6. Home page";
	cout<<"\n\n\n Enter your option : ";
	cin>>option;
	switch(option)
	{
		case 1:
			int option;
			system("cls");
			    cout<<"\n\n _____Route of Bus_____";
		    cout<<"\n\n The Number of 3 bus at 7:05am ";
			cout<<"\n\n Bhangobazar--Shahobhag--Sciencelab--Ashtget--Gabtoli--JU";
			cout<<"\n\n\n\n The number of 2 bus at 7:00am";
		    cout<<"\n\n Bhangobazar--Shahobhag--Sciencelab--Ashtget--Gabtoli--JU";
		    cout<<"\n\n\n\nThe number of one bus at 7:30am";
		    cout<<"\n\n Bhangobazar--Shahobhag--Sciencelab--Ashtget--Gabtoli--JU";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>option;
			if(option==1)
			{
			   dhaka_to_ju();
			}
			break;
		case 2:
			int op1;
			system("cls");
				cout<<"\n\n _____Route of Bus_____";
		    cout<<"\n\n The Number of 2 bus at 7:05am ";
			cout<<"\n\n Airport--Mohakhali--Gabtoli--Amin Bazar--JU";
			cout<<"\n\n\n\n The number of 2 bus at 7:00am";
		    cout<<"\n\n Airport--Mohakhali--Gabtoli--Amin Bazar--JU";
		    cout<<"\n\n\n\nThe number of one bus at 7:3am";
		    cout<<"\n\n Airport--Mohakhali--Gabtoli--Amin Bazar--JU";

			cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op1;
			if(op1==1)
			{
			   dhaka_to_ju();
			}

			break;
		case 3:
			int op2;
			system("cls");
				cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n The Number of 3 buses at 7:30am ";
			cout<<"\n\n Mirpur14--Mirpur1--Technical--Hemayetpur--Savar--Bank Town--JU";
			cout<<"\n\n\n\n The number of 2 bus at 7:45am";
		    cout<<"\n\n Mirpur14--Mirpur1--Technical--Hemayetpur--Savar--Bank Town--JU";
		    cout<<"\n\n\n\nThe number of one bus at 7:30pm";
		    cout<<"\n\n\n Mirpur14--Mirpur1--Technical--Hemayetpur--Savar--Bank Town--JU";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op2;
			if(op2==1)
			{
			   dhaka_to_ju();
			}
			break;
		case 4:
			int op3;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n The Number of 3 bus at 7:05am ";
			cout<<"\n\n Manik Mia Avenue--Shyamoli--Kallyanpur--Savar--Bank Town--JU";
			cout<<"\n\n\n\n The number of 2 bus at 7:10am";
		 cout<<"\n\n Manik Mia Avenue--Shyamoli--Kallyanpur--Savar--Bank Town--JU ";
		    cout<<"\n\n\n\nThe number of one bus at 7:15am";
        cout<<"\n\n Manik Mia Avenue--Shyamoli--Kallyanpur--Savar--Bank Town--JU";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op3;
			if(op3==1)
			{
			   dhaka_to_ju();
			}

			break;
		case 5:
			working_day();
			break;
		case 6:
			main();
			break;
			default:
				cout<<"\n\n Please Enter your right option";
	}
	getch();

}
void Bus::off_day()
{
	int option;
	system("cls");
	cout<<"\t\t\t ___Jahangirnagar University Transport System___";
	cout<<"\n\n\n 1.Jahangirnagar University to Dhaka";
	cout<<"\n\n\n 2. Dhaka to Jahangirnagar University";
	cout<<"\n\n\n 3. Previous page";
	cout<<"\n\n\n 4. Home page";
	cout<<"\n\n\n Enter your Option: ";
	cin>>option;
	switch(option)
	{
		case 1:
			ju_to_dhaka_offday();
			break;
		case 2:
			dhaka_to_ju_offday();
			break;
		case 3:
			Student();
			break;
		case 4:
			main();
			break;
			default:
				cout<<"\n\n\n Please Enter your Right Option!";
	}
}
void Bus::ju_to_dhaka_offday()
{
	int option;
	system("cls");
	cout<<"\t\t\t ______Jahangirnagar University Transport System_____";
	cout<<"\n\n\n___________Route of Bus__________";
	cout<<"\n\n\n 1.Jahangirnagar University to Bhangobazar";
	cout<<"\n\n\n 2. Jahangirnagar University to airport";
	cout<<"\n\n\n 3. Jahangirnagar University to Mirpur";
	cout<<"\n\n\n 4. Jahangirnagar University to Farmgate";
	cout<<"\n\n\n 5. Previous page";
	cout<<"\n\n\n 6. Home page";
	cout<<"\n\n\n Enter your option : ";
	cin>>option;
	switch(option)
	{
		case 1:
			int option;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n 1.The Number of 2 bus at 9:30am ";
			cout<<"\n\n   Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
			cout<<"\n\n\n\n 2.The number of 2 bus at 4:05pm";
		    cout<<"\n\n       Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
		    cout<<"\n\n\n\n 3.The number of one bus at 8:00pm";
		    cout<<"\n\n      Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
		    cin>>option;
			if(option==1)
			{
			   ju_to_dhaka_offday();
			}

			break;
		case 2:
			int op;
			system("cls");
			cout<<"\n\n\n Jahangignagar Bus is  not available these day!";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
		    cin>>op;
			if(op==1)
			{
			   ju_to_dhaka_offday();
			}
			break;
		case 3:
			int op1;
			system("cls");
			cout<<"\n\n\n Jahangignagar Bus is  not available these day!";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
		    cin>>op1;
			if(op1==1)
			{
			   ju_to_dhaka_offday();
			}
			break;
		case 4:
			int op2;
			system("cls");
			cout<<"\n\n\n Jahangignagar Bus is  not available these day!";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op2;
			if(op2==1)
			{
			   ju_to_dhaka_offday();
			}

			break;
		case 5:
			off_day();
			break;
		case 6:
			main();
			break;
			default:
				cout<<"\n\n Please Enter your right option";
	}
	getch();

}
void Bus::dhaka_to_ju_offday()
{
	int option;
	system("cls");
	cout<<"\t\t\t ______Jahangirnagar University Transport System_____";
	cout<<"\n\n\n___________Route of Bus__________";
	cout<<"\n\n\n 1. Bhangobazar to Jahangirnagar University";
	cout<<"\n\n\n 2. Airport to Jahangirnagar University";
	cout<<"\n\n\n 3. Mirpur to Jahangirnagar University";
	cout<<"\n\n\n 4. Farmgate to Jahangirnagar University";
	cout<<"\n\n\n 5. Previous page";
	cout<<"\n\n\n 6. Home page";
	cout<<"\n\n\n Enter your option : ";
	cin>>option;
	switch(option)
	{
		case 1:
			int option;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n 1.The Number of 2 bus at 2:15pm ";
			cout<<"\n\n    Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli";
			cout<<"\n\n\n\n 2.The number of 2 bus at 6:05pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli";
		    cout<<"\n\n\n\n 3.The number of one bus at 7:30pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli";
		    cout<<"\n\n\n\n 4.The number of one bus at 8:30pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>option;
			if(option==1)
			{
			   dhaka_to_ju_offday();
			}
			break;
		case 2:
			int op1;
			system("cls");
			cout<<"\n\n\n Jahangignagar Bus is  not available these day!";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op1;
			if(op1==1)
			{
			   dhaka_to_ju_offday();
			}

			break;
		case 3:
			int op2;
			system("cls");
			cout<<"\n\n\n Jahangignagar Bus is  not available these day!";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op2;
			if(op2==1)
			{
			   dhaka_to_ju_offday();
			}
			break;
		case 4:
			int op3;
			system("cls");
			cout<<"\n\n\n Jahangignagar Bus is  not available these day!";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op3;
			if(op3==1)
			{
			   dhaka_to_ju_offday();
			}

			break;
		case 5:
			off_day();
			break;
		case 6:
			main();
			break;
			default:
				cout<<"\n\n Please Enter your right option";
	}
	getch();

}
void Bus::teacher()
{
int option;
	system("cls");
	cout<<"\n\n ___Jahangirnagar University Transport System___";
	cout<<"\n\n 1. Working day";
	cout<<"\n\n 2. Off day";
	cout<<"\n\n 3. Previous page";
	cout<<"\n\n 4. Home page";
	cout<<"\n\n Enter your option : ";
	cin>>option;
	switch(option)
	{
		case 1:
			t_working_day();
			break;
		case 2:
			t_off_day();
			break;
		case 3:
			menu();
			break;
		case 4:
			main();
			break;
			default:
				cout<<"\n\n You cann`t choice any option";
	}


}
void Bus::t_working_day()
{
	int option;
	system("cls");
	cout<<"\t\t\t ___Jahangirnagar University Transport System___";
	cout<<"\n\n\n 1.Jahangirnagar University to Dhaka";
	cout<<"\n\n\n 2. Dhaka to Jahangirnagar University";
	cout<<"\n\n\n 3. Previous page";
	cout<<"\n\n\n 4. Main menu";
	cout<<"\n\n\n 5. Home page";
	cout<<"\n\n\n Enter your Option: ";
	cin>>option;
	switch(option)
	{
		case 1:
			t_ju_to_dhaka();
			break;
		case 2:
			t_dhaka_to_ju();
			break;
		case 3:
			teacher();
			break;
		case 4:
			menu();
			break;
		case 5:
			main();
			break;
			default:
				cout<<"\n\n\n Please Enter your Right Option!";
	}
}
void Bus::t_ju_to_dhaka()
{
	int option;
	system("cls");
	cout<<"\t\t\t ______Jahangirnagar University Transport System_____";
	cout<<"\n\n\n___________Route of Bus__________";
	cout<<"\n\n\n 1.Jahangirnagar University to Bhangobazar";
	cout<<"\n\n\n 2. Jahangirnagar University to airport";
	cout<<"\n\n\n 3. Jahangirnagar University to Mirpur";
	cout<<"\n\n\n 4. Jahangirnagar University to Farmgate";
	cout<<"\n\n\n 5. Previous page";
	cout<<"\n\n\n 6. Main menu";
	cout<<"\n\n\n 7. Home page";
	cout<<"\n\n\n Enter your option : ";
	cin>>option;
	switch(option)
	{
		case 1:
			int option;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n 1.The Number of one bus at 6:45am ";
			cout<<"\n\n   Campus--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
			cout<<"\n\n\n 2. The number of one bus at 2:50pm";
			cout<<"\n\n     Campus--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
			cout<<"\n\n\n\n 3.The number of one bus at 4:45pm";
		    cout<<"\n\n    Campus--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
		    cout<<"\n\n\n\n 4.The number of one bus at 4:00pm";
		    cout<<"\n\n     Campus--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
		    cout<<"\n\n\n 5. The number of one bus at 8:00pm";
		    cout<<"\n\n     Campus--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
		    cin>>option;
			if(option==1)
			 {
			   t_ju_to_dhaka();
			 }
			break;
		case 2:
			int op;
			system("cls");
				cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n 1.The Number of one bus at 1:15pm ";
			cout<<"\n\n   Campus--Bypile--Airport";
			cout<<"\n\n 1.The Number of one bus at 4:45pm ";
			cout<<"\n\n   Campus--Bypile--Airport";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op;
			if(op==1)
			{
			   t_ju_to_dhaka();
			}

			break;
		case 3:
			int op1;
			system("cls");
				cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n 1.The Number of one bus at 1:15pm ";
			cout<<"\n\n  Campus--Gabtoli--Mirpur 10,14";
			cout<<"\n\n\n\n 2. The number of two bus at 4:45pm";
		    cout<<"\n\n     Campus--Technical--Mirpur 10,14";
		    cout<<"\n\n\n 3. The number of one bus at 4:45pm";
		    cout<<"\n\n   Campus--Gabtoli--Shamoly--Kazipara--Mirpur 10,14";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
		    cin>>op1;
			if(op1==1)
			{
			   t_ju_to_dhaka();
			}
			break;
		case 4:
			int op2;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n 1.The Number of one bus at 4:45pm ";
			cout<<"\n\n   Farmgate--Bangla Motor--Mouchak--Shantinagar--Agarghaw--Mohakhali";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op2;
			if(op2==1)
			{
			   t_ju_to_dhaka();
			}

			break;
		case 5:
			t_working_day();
			break;
		case 6:
			menu();
			break;
		case 7:
		    main();
			break;
			default:
				cout<<"\n\n Please Enter your right option";
	}
	getch();

}
void Bus::t_dhaka_to_ju()
{
	int option;
	system("cls");
	cout<<"\t\t\t ______Jahangirnagar University Transport System_____";
	cout<<"\n\n\n___________Route of Bus__________";
	cout<<"\n\n\n 1. Bhangobazar to Jahangirnagar University";
	cout<<"\n\n\n 2. Airport to Jahangirnagar University";
	cout<<"\n\n\n 3. Mirpur to Jahangirnagar University";
	cout<<"\n\n\n 4. Farmgate to Jahangirnagar University";
	cout<<"\n\n\n 5. Previous page";
	cout<<"\n\n\n 6. Main menu";
	cout<<"\n\n\n 7. Home page";
	cout<<"\n\n\n Enter your option : ";
	cin>>option;
	switch(option)
	{
		case 1:
			int option;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n 1.The Number of one bus at 7:00am ";
			cout<<"\n\n    Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
			cout<<"\n\n\n\n 2.The number of one bus at 10:00pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n\n 3.The number of one bus at 4:00pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n\n 4.The number of one bus at 4:45pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n\n 5.The number of one bus at 6:00pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n\n 6.The number of one bus at 7:30pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n\n 7.The number of one bus at 8:30pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>option;
			if(option==1)
			{
			   t_dhaka_to_ju();
			}
			break;
		case 2:
			int op1;
			system("cls");
				cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n 1. The Number of one bus at 7:45am ";
			cout<<"\n\n Airport--Bypaile--Campus";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op1;
			if(op1==1)
			{
			   t_dhaka_to_ju();
			}

			break;
		case 3:
			int op2;
			system("cls");
				cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n 1.The Number of one bus at 7:30am ";
			cout<<"\n\n Mirpur 1,2,6,11,12--Campus";
			cout<<"\n\n\n\n 2. The number of one bus at 7:45pm";
		    cout<<"\n\n Mirpur 10,14,2,1-- Mazar Road--Gabtoli--Campus";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op2;
			if(op2==1)
			{
			   t_dhaka_to_ju();
			}
			break;
		case 4:
			int op3;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n 1.The Number of one bus at 7:45am ";
			cout<<"\n\n Shantinagar--Mouchak--Bangla motor--Farmgate--Campus";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op3;
			if(op3==1)
			{
			   t_dhaka_to_ju();
			}

			break;
		case 5:
			t_working_day();
			break;
		case 6:
		    menu();
			break;
		case 7:
			main();
			break;
			default:
				cout<<"\n\n Please Enter your right option";
	}
	getch();

}
void Bus::t_off_day()
{
	int option;
	system("cls");
	cout<<"\t\t\t ___Jahangirnagar University Transport System___";
	cout<<"\n\n\n 1.Jahangirnagar University to Dhaka";
	cout<<"\n\n\n 2. Dhaka to Jahangirnagar University";
	cout<<"\n\n\n 3. Previous page";
	cout<<"\n\n\n 4. Home page";
	cout<<"\n\n\n Enter your Option: ";
	cin>>option;
	switch(option)
	{
		case 1:
	       t_ju_to_dhaka_offday();
			break;
		case 2:
		   t_dhaka_to_ju_offday();
			break;
		case 3:
			teacher();
			break;
		case 4:
			main();
			break;
			default:
				cout<<"\n\n\n Please Enter your Right Option!";
	}
}
  void Bus::t_ju_to_dhaka_offday()
 {
 	int option;
	system("cls");
	cout<<"\t\t\t ______Jahangirnagar University Transport System_____";
	cout<<"\n\n\n___________Route of Bus__________";
	cout<<"\n\n\n 1.Jahangirnagar University to Bhangobazar";
	cout<<"\n\n\n 2. Jahangirnagar University to airport";
	cout<<"\n\n\n 3. Jahangirnagar University to Mirpur";
	cout<<"\n\n\n 4. Jahangirnagar University to Farmgate";
	cout<<"\n\n\n 5. Previous page";
	cout<<"\n\n\n 6. Main menu";
	cout<<"\n\n\n 7. Home page";
	cout<<"\n\n\n Enter your option : ";
	cin>>option;
	switch(option)
	{
		case 1:
			int option;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n 1.The Number of 2 buses at 9:30am ";
			cout<<"\n\n   Campus--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
			cout<<"\n\n\n 2. The number of one bus at 9:30am";
			cout<<"\n\n     Campus(Bishmile)--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
			cout<<"\n\n\n\n 3.The number of 2 buses at 4:00pm";
		    cout<<"\n\n    Campus--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
		    cout<<"\n\n\n\n 4.The number of one bus at 4:00pm";
		    cout<<"\n\n     Campus(Bishmile)--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
		    cout<<"\n\n\n 5. The number of one bus at 8:00pm";
		    cout<<"\n\n     Campus--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
		    cin>>option;
			if(option==1)
			 {
			   t_ju_to_dhaka_offday();
			 }
			break;
		case 2:
			int op;
			system("cls");
				cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n\n Bus is not available this day";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op;
			if(op==1)
			{
			   t_ju_to_dhaka_offday();
			}

			break;
		case 3:
			int op1;
			system("cls");
				cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n\n Bus is not available this day";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
		    cin>>op1;
			if(op1==1)
			{
			   t_ju_to_dhaka_offday();
			}
			break;
		case 4:
			int op2;
				cout<<"\n\n _____Route of Bus_____";
				cout<<"\n\n\n Bus is not available this day";
				cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op2;
			if(op2==1)
			{
			   t_ju_to_dhaka_offday();
			}

			break;
		case 5:
			t_off_day();
			break;
		case 6:
			menu();
			break;
		case 7:
		    main();
			break;
			default:
				cout<<"\n\n Please Enter your right option";
	}
	getch();
 }
 void Bus::t_dhaka_to_ju_offday()
 {
 		int option;
	system("cls");
	cout<<"\t\t\t ______Jahangirnagar University Transport System_____";
	cout<<"\n\n\n___________Route of Bus__________";
	cout<<"\n\n\n 1. Bhangobazar to Jahangirnagar University";
	cout<<"\n\n\n 2. Airport to Jahangirnagar University";
	cout<<"\n\n\n 3. Mirpur to Jahangirnagar University";
	cout<<"\n\n\n 4. Farmgate to Jahangirnagar University";
	cout<<"\n\n\n 5. Previous page";
	cout<<"\n\n\n 6. Main menu";
	cout<<"\n\n\n 7. Home page";
	cout<<"\n\n\n Enter your option : ";
	cin>>option;
	switch(option)
	{
		case 1:
			int option;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n 1.The Number of 2 buses at 2:15pm ";
			cout<<"\n\n    Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
			cout<<"\n\n\n\n 2.The number of one bus at 6:00pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n\n 3.The number of one bus at 7:30pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n\n 4.The number of one bus at 8:30pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>option;
			if(option==1)
			{
			   t_dhaka_to_ju_offday();
			}
			break;
		case 2:
			int op1;
			system("cls");
		        cout<<"\n\n _____Route of Bus_____";
				cout<<"\n\n\n Bus is not available this day";
				cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op1;
			if(op1==1)
			{
			   t_dhaka_to_ju_offday();
			}

			break;
		case 3:
			int op2;
			system("cls");
				cout<<"\n\n _____Route of Bus_____";
				cout<<"\n\n\n Bus is not available this day";
				cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op2;
			if(op2==1)
			{
			   t_dhaka_to_ju_offday();
			}
			break;
		case 4:
			int op3;
			system("cls");
		        cout<<"\n\n _____Route of Bus_____";
				cout<<"\n\n\n Bus is not available this day";
				cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op3;
			if(op3==1)
			{
			   t_dhaka_to_ju_offday();
			}

			break;
		case 5:
			t_off_day();
			break;
		case 6:
		    menu();
			break;
		case 7:
			main();
			break;
			default:
				cout<<"\n\n Please Enter your right option";
	}
	getch();

}
void Bus::staff()
{
int option;
	system("cls");
	cout<<"\n\n ___Jahangirnagar University Transport System___";
	cout<<"\n\n 1. Working day";
	cout<<"\n\n 2. Off day";
	cout<<"\n\n 3. Previous page";
	cout<<"\n\n 4. Home page";
	cout<<"\n\n Enter your option : ";
	cin>>option;
	switch(option)
	{
		case 1:
			staff_working_day();
			break;
		case 2:
			staff_off_day();
			break;
		case 3:
			menu();
			break;
		case 4:
			main();
			break;
			default:
				cout<<"\n\n You cann`t choice any option";
	}
}
 void Bus::staff_working_day()
{
int option;
	system("cls");
	cout<<"\t\t\t ___Jahangirnagar University Transport System___";
	cout<<"\n\n\n 1.Jahangirnagar University to Dhaka";
	cout<<"\n\n\n 2. Dhaka to Jahangirnagar University";
	cout<<"\n\n\n 3. Previous page";
	cout<<"\n\n\n 4. Main menu";
	cout<<"\n\n\n 5. Home page";
	cout<<"\n\n\n Enter your Option: ";
	cin>>option;
	switch(option)
	{
		case 1:
			staff_ju_to_dhaka();
			break;
		case 2:
			staff_dhaka_to_ju();
			break;
		case 3:
			staff();
			break;
		case 4:
			menu();
			break;
		case 5:
			main();
			break;
			default:
				cout<<"\n\n\n Please Enter your Right Option!";
	}
}
 void Bus::staff_ju_to_dhaka()

 {
 	int option;
	system("cls");
	cout<<"\t\t\t ______Jahangirnagar University Transport System_____";
	cout<<"\n\n\n___________Route of Bus__________";
	cout<<"\n\n\n 1.Jahangirnagar University to Bhangobazar";
	cout<<"\n\n\n 2. Jahangirnagar University to Airport";
	cout<<"\n\n\n 3. Jahangirnagar University to Mirpur";
	cout<<"\n\n\n 4. Jahangirnagar University to Farmgate";
	cout<<"\n\n\n 5. Previous page";
	cout<<"\n\n\n 6. Main menu";
	cout<<"\n\n\n 7. Home page";
	cout<<"\n\n\n Enter your option : ";
	cin>>option;
	switch(option)
	{
		case 1:
			int option;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n 1.The Number of one bus at 6:45am ";
			cout<<"\n\n   Campus--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
			cout<<"\n\n\n 2. The number of one bus at 2:50pm";
			cout<<"\n\n     Campus--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
			cout<<"\n\n\n\n 3.The number of one bus at 8:00pm";
		    cout<<"\n\n    Campus--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
		    cin>>option;
			if(option==1)
			 {
			   staff_ju_to_dhaka();
			 }
			break;
		case 2:
			int op;
			system("cls");
				cout<<"\n\n _____Route of Bus_____";
		    cout<<"\n\n\n Jahangirnagar Bus is not available";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op;
			if(op==1)
			{
			   staff_ju_to_dhaka();
			}

			break;
		case 3:
			int op1;
			system("cls");
				cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n\n Jahangirnagar Bus is not available";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
		    cin>>op1;
			if(op1==1)
			{
			   staff_ju_to_dhaka();
			}
			break;
		case 4:
			int op2;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n\n Jahangirnagar Bus is not available";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op2;
			if(op2==1)
			{
			   staff_ju_to_dhaka();
			}

			break;
		case 5:
			staff_working_day();
			break;
		case 6:
			menu();
			break;
		case 7:
		    main();
			break;
			default:
				cout<<"\n\n Please Enter your right option";
	}
	getch();

 }
  void Bus::staff_dhaka_to_ju()
  {
  		int option;
	system("cls");
	cout<<"\t\t\t ______Jahangirnagar University Transport System_____";
	cout<<"\n\n\n___________Route of Bus__________";
	cout<<"\n\n\n 1. Bhangobazar to Jahangirnagar University";
	cout<<"\n\n\n 2. Airport to Jahangirnagar University";
	cout<<"\n\n\n 3. Mirpur to Jahangirnagar University";
	cout<<"\n\n\n 4. Farmgate to Jahangirnagar University";
	cout<<"\n\n\n 5. Previous page";
	cout<<"\n\n\n 6. Main menu";
	cout<<"\n\n\n 7. Home page";
	cout<<"\n\n\n Enter your option : ";
	cin>>option;
	switch(option)
	{
		case 1:
			int option;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n 1.The Number of one bus at 7:00am ";
			cout<<"\n\n    Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
			cout<<"\n\n\n\n 2.The number of one bus at 10:00pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n\n 3.The number of one bus at 4:00pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n\n 4.The number of one bus at 4:45pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n\n 5.The number of one bus at 6:00pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n\n 6.The number of one bus at 7:30pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n\n 7.The number of one bus at 8:30pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>option;
			if(option==1)
			{
			   staff_dhaka_to_ju();
			}
			break;
		case 2:
			int op1;
			system("cls");
				cout<<"\n\n _____Route of Bus_____";
		    cout<<"\n\n\n Jahangirnagar Bus is not available";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op1;
			if(op1==1)
			{
			   staff_dhaka_to_ju();
			}

			break;
		case 3:
			int op2;
			system("cls");
				cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n\n Jahangirnagar Bus is not available";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op2;
			if(op2==1)
			{
			   staff_dhaka_to_ju();
			}
			break;
		case 4:
			int op3;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n\n Jahangirnagar Bus is not available";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op3;
			if(op3==1)
			{
			   staff_dhaka_to_ju();
			}

			break;
		case 5:
			staff_working_day();
			break;
		case 6:
		    menu();
			break;
		case 7:
			main();
			break;
			default:
				cout<<"\n\n Please Enter your right option";
	}
	getch();

  }
 void Bus::staff_off_day()
 {
 	int option;
	system("cls");
	cout<<"\t\t\t ___Jahangirnagar University Transport System___";
	cout<<"\n\n\n 1.Jahangirnagar University to Dhaka";
	cout<<"\n\n\n 2. Dhaka to Jahangirnagar University";
	cout<<"\n\n\n 3. Previous page";
	cout<<"\n\n\n 4. Home page";
	cout<<"\n\n\n Enter your Option: ";
	cin>>option;
	switch(option)
	{
		case 1:
	       staff_ju_to_dhaka_offday();
			break;
		case 2:
		   staff_dhaka_to_ju_offday();
			break;
		case 3:
			staff();
			break;
		case 4:
			main();
			break;
			default:
				cout<<"\n\n\n Please Enter your Right Option!";
	}
}
  void Bus::staff_ju_to_dhaka_offday()
 {
 	int option;
	system("cls");
	cout<<"\t\t\t ______Jahangirnagar University Transport System_____";
	cout<<"\n\n\n___________Route of Bus__________";
	cout<<"\n\n\n 1.Jahangirnagar University to Bhangobazar";
	cout<<"\n\n\n 2. Jahangirnagar University to airport";
	cout<<"\n\n\n 3. Jahangirnagar University to Mirpur";
	cout<<"\n\n\n 4. Jahangirnagar University to Farmgate";
	cout<<"\n\n\n 5. Previous page";
	cout<<"\n\n\n 6. Main menu";
	cout<<"\n\n\n 7. Home page";
	cout<<"\n\n\n Enter your option : ";
	cin>>option;
	switch(option)
	{
		case 1:
			int option;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n 1.The Number of 2 buses at 9:30am ";
			cout<<"\n\n   Campus--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
			cout<<"\n\n\n 2. The number of one bus at 9:30am";
			cout<<"\n\n     Campus(Bishmile)--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
			cout<<"\n\n\n\n 3.The number of 2 buses at 4:00pm";
		    cout<<"\n\n    Campus--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
		    cout<<"\n\n\n\n 4.The number of one bus at 4:00pm";
		    cout<<"\n\n     Campus(Bishmile)--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
		    cout<<"\n\n\n 5. The number of one bus at 8:00pm";
		    cout<<"\n\n     Campus--Gabtoli--Ashatget--Sciencelab--Shahobhag--Bhangobazar";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
		    cin>>option;
			if(option==1)
			 {
			   staff_ju_to_dhaka_offday();
			 }
			break;
		case 2:
			int op;
			system("cls");
				cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n\n Bus is not available this day";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op;
			if(op==1)
			{
			   staff_ju_to_dhaka_offday();
			}

			break;
		case 3:
			int op1;
			system("cls");
				cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n\n Bus is not available this day";
			cout<<"\n\n\n If you want Previous page,you press 1: ";
		    cin>>op1;
			if(op1==1)
			{
			   staff_ju_to_dhaka_offday();
			}
			break;
		case 4:
			int op2;
				cout<<"\n\n _____Route of Bus_____";
				cout<<"\n\n\n Bus is not available this day";
				cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op2;
			if(op2==1)
			{
			   staff_ju_to_dhaka_offday();
			}

			break;
		case 5:
			staff_off_day();
			break;
		case 6:
			menu();
			break;
		case 7:
		    main();
			break;
			default:
				cout<<"\n\n Please Enter your right option";
	}
	getch();
 }
 void Bus::staff_dhaka_to_ju_offday()
 {
 		int option;
	system("cls");
	cout<<"\t\t\t ______Jahangirnagar University Transport System_____";
	cout<<"\n\n\n___________Route of Bus__________";
	cout<<"\n\n\n 1. Bhangobazar to Jahangirnagar University";
	cout<<"\n\n\n 2. Airport to Jahangirnagar University";
	cout<<"\n\n\n 3. Mirpur to Jahangirnagar University";
	cout<<"\n\n\n 4. Farmgate to Jahangirnagar University";
	cout<<"\n\n\n 5. Previous page";
	cout<<"\n\n\n 6. Main menu";
	cout<<"\n\n\n 7. Home page";
	cout<<"\n\n\n Enter your option : ";
	cin>>option;
	switch(option)
	{
		case 1:
			int option;
			system("cls");
			cout<<"\n\n _____Route of Bus_____";
			cout<<"\n\n 1.The Number of 2 buses at 2:15pm ";
			cout<<"\n\n    Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
			cout<<"\n\n\n\n 2.The number of one bus at 6:00pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n\n 3.The number of one bus at 7:30pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n\n 4.The number of one bus at 8:30pm";
		    cout<<"\n\n       Bhangobazr--Shahobhag--Sciencelab--Ashatget--Gabtoli--Campus";
		    cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>option;
			if(option==1)
			{
			   staff_dhaka_to_ju_offday();
			}
			break;
		case 2:
			int op1;
			system("cls");
		        cout<<"\n\n _____Route of Bus_____";
				cout<<"\n\n\n Bus is not available this day";
				cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op1;
			if(op1==1)
			{
			   staff_dhaka_to_ju_offday();
			}

			break;
		case 3:
			int op2;
			system("cls");
				cout<<"\n\n _____Route of Bus_____";
				cout<<"\n\n\n Bus is not available this day";
				cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op2;
			if(op2==1)
			{
			   staff_dhaka_to_ju_offday();
			}
			break;
		case 4:
			int op3;
			system("cls");
		        cout<<"\n\n _____Route of Bus_____";
				cout<<"\n\n\n Bus is not available this day";
				cout<<"\n\n\n If you want Previous page,you press 1: ";
			cin>>op3;
			if(op3==1)
			{
			   staff_dhaka_to_ju_offday();
			}

			break;
		case 5:
			staff_off_day();
			break;
		case 6:
		    menu();
			break;
		case 7:
			main();
			break;
			default:
				cout<<"\n\n Please Enter your right option";
	}
	getch();

 }
 
void Bus::booking()
{   p:
	system("cls");
	fstream file,file1,file2;
	string t_no,s_b_no,date,time;
	int ss_no[25],i=0;
	int found=0, s_s_no,s_no,seats,count=0,s_a,t_a=0,r_a;
	string cname,from,to,phone;
	char x;
	cout<<"\n\n\t\t__	Welcome to JAHANGIRNAGAR TRANSPORATION SYSTEM";
	file.open("bus.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t file openning error";
	}
	else
	{
		cout<<"\n\n\n  1.JU to Mirpur and Mirpur to JU :e1-101";
		cout<<"\n\n\n  2.JU to Bhangobazar and Bhangobazar to JU :e2-102 ";
		cout<<"\n\n\n  3.JU to Airport and Airport to JU :e3-101";
		cout<<"\n\n\n  4.JU to Fermgate and Fermgate to JU :e4-102";
		cout<<"\n\n\n  5.Ambluence booking:m1-101";
		cout<<"\n\n\n  6.Minibus booking:s1-101";
		cout<<"\n\n\n  7.Micro-bus booking:b1-101";
		
		cout<<"\n\n Bus NO :";
		cin>>t_no;
	    file.close();
		file1.open("seat.txt",ios::in);
		if(file1)
		{
			
		file1>>s_b_no>>s_s_no;
		while(!file1.eof())
		{
			if(t_no ==s_b_no)
			{
				count++;
			}
			file1>>s_b_no>>s_s_no;
		}
		file1.close();
	}
	    file.open("bus.txt",ios::in);
		file>>b_no>>b_name>>b_seats>>d_name;
		while(!file.eof())
		{
			if(t_no ==b_no)
			{
				seats =b_seats;
				found++;
			}
			file>>b_no>>b_name>>b_seats>>d_name;
		}
		file.close();
		if(seats-count == 0)
		{
			cout<<"\n\n All seats of this is Already Resreved";
			cout<<"\n\n\n Go to previous page press 1 other wise go to menu page:";
			int option;
			cin>>option;
			if(option==1)
			{
				booking();
			}
			else
			{
				menu();
			}
		}
		else if(found==1)
		{
			do{
				h:
				cout<<"\n\n Seat no:";
				cin>>s_no;
				if(s_no>seats)
				{
					cout<<"\n\n Seat No is Invaild";
					goto h;
				}
				file1.open("seat.txt",ios::in);
				if(!file1)
				{
					file1.open("seat.txt",ios::app|ios::out);
				   file1<<t_no<<" "<<s_no<<"\n";
				   file1.close();
			 }
			else
			{
				file1>>s_b_no>>s_s_no;
				while(!file1.eof())
				{
					if(t_no==s_b_no && s_no==s_s_no)
					{
					cout<<"\n\n seat is already reserved...please try again";
					goto h;	
					}
					file1>>s_b_no>>s_s_no;
				}
				file1.close();
			    file1.open("seat.txt",ios::app|ios::out);
				file1<<t_no<<" "<<s_no<<"\n";
				file1.close();
				
			}
			ss_no[i]=s_no;
			i++;
				cout<<"\n\n Booking another seat(Y,N)";
				cin>>x;
				
			}while(x=='y'|| x=='Y');
			system("cls");
			cout<<"\n\n\t\t__	WELCOME to JAHANGIRNAGAR TRANSPORATION SYSTEM";
			cout<<"\n\n Passenger  Name:";
			cin>>cname;
			cout<<"\n\n Phone No:";
			cin>>phone;
			cout<<"\n\n From:";
			cin>>from;
			cout<<"\n\n To:";
			cin>>to;
			cout<<"\n Date:";
			cin>>ws;
			getline(cin,date);
			cout<<"\n Time:";
			cin>>ws;
			getline(cin,time);
			file2.open("customer.txt",ios::app|ios::in);	
			file2<<cname<<"  "<<t_no<<" "<<phone<<" "<<" "<<i<<" "<<from<<" "<<to<<endl;
			file2.close();
			system("cls");
			cout<<"\n\n\t\t__	Welcome to JAHANGIRNAGAR TRANSPORATION SYSTEM";
			cout<<"\n\n\t\t********";
			cout<<"\nt\t\t____Booking information";	
			cout<<"\n\n\t\t********";	
			cout<<"\n\n\t\t Name :           "<<cname;
			cout<<"\n\n\t\t from :           "<<from;
			cout<<"\n\n\t\t to :             "<<to;
			cout<<"\n\n the date && time:    "<<date<<"   "<<time;
			cout<<"\n\t Total seats          "<<b_seats;
			cout<<"\n\t Reserved seats       "<<i;
			cout<<"\n\n\n\t Go to previous page press 1 otherwise go to menu page: ";
			int op1;
			cin>>op1;
			if(op1==1)
			{
				booking();
				
			}
			else
			{
				menu();
			}
			
}
		else
		{
			cout<<"\n\n Bus No is Invaild....please try again";
			
			getch();
			goto p;
		}
		
	}
}

