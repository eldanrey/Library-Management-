/*
Name: Eldan Rey V. Dofredo
Date Created:12/11/20 06:58
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
void menu();
using namespace std;


//*************************************************************
//*GLOBAL VARIABLE inFile to read data from a file
//*GLOBAL VARIABLE outFile to write data to a file
//*************************************************************
ifstream inFile;
ofstream outFile;
//*************************************************************
//*END OF GLOBAL VARIABLE
//*************************************************************



void AddStudent(){

	outFile.open("student.dat",ios::app);
	string id,lastName,firstName,age,contactNumber,emailAddress;
	cout<<"Enter Id of the Student: ";
	cin>>id;
	cout<<"\nEnter The Last Name: ";
	cin>>lastName;
	cout<<"\nEnter First Name: ";
	cin>>firstName;
	cout<<"\nEnter Age: ";
	cin>>age;
	cout<<"Enter Contact Number: ";
	cin>>contactNumber;
	cout<<"Enter Email Address: ";
	cin>>emailAddress;
	outFile<<id<<" "<<lastName<<" "<<firstName<<" "<<age<<" "<<contactNumber<<" "<<emailAddress<<" \n";
	outFile.close();

}
void AddBook(){
	outFile.open("book.dat",ios::app);
	string id,name,author,pdate,qty;
	cout<<"Enter the id of the book";
	cin>>id;
	cout<<"\nEnter The name of book: ";
	getline(cin,name);
	getline(cin,name);
	cout<<"\nEnter Author of book: ";
	getline(cin,author);
	cout<<"\nPulished: ";
	cin>>pdate;
	cout<<"\nQuantity: ";
	cin>>qty;
	outFile<<id<<" , "<<name<<" , "<<author<<" , "<<pdate<<" , "<<qty;
	outFile.close();
}
void ShowAllStudents(){
	string s,id,lastName,firstName,age,contactNumber,emailAddress;
	inFile.open("student.dat");
	while(getline(inFile,s)){
		stringstream ss(s);
		ss>>id>>lastName>>firstName>>age>>contactNumber>>emailAddress;
		cout<<left<<setw(10)<<id;
		cout<<left<<setw(20)<<lastName;
		cout<<left<<setw(20)<<firstName;
		cout<<left<<setw(15)<<age;
		cout<<left<<setw(15)<<contactNumber;
		cout<<left<<setw(30)<<emailAddress<<"\n";
	}
	inFile.close();
}
void ShowAllBooks(){
	inFile.open("book.dat");
	char ch;
	string s,id,name,author,pdate,qty;
	while(getline(inFile,s)){
		stringstream ss(s);
		ss>>id>>ch>>name>>ch>>author>>pdate>>qty;
		cout<<left<<setw(10)<<id;
		cout<<left<<setw(20)<<name;
		cout<<left<<setw(20)<<author;
		cout<<left<<setw(15)<<pdate;
		cout<<left<<setw(15)<<qty;
	}
	
	
	inFile.close();
}
void ShowSpecificStudent(){
	
}
void ShowSpecificBook(){
	
}
void BorrowBook(){
	

}
void ReturnBook(){
	
}


//*****************************************************************************************
//                        START OF THE MENU OF THE PROGRAM
//*****************************************************************************************
void menu(){
	main_menu:
	char choice;
	cout<<"\n\nLibrary Management Project";
	cout<<"\n[1]Add Student";
	cout<<"\n[2]Add Book";
	cout<<"\n[3]Show All Students";
	cout<<"\n[4]Show All Books";
	cout<<"\n[5]Show Specific Student";
	cout<<"\n[6]Show Specific Book";
	cout<<"\n[7]Borrow Book";
	cout<<"\n[8]Return Book";
	cout<<"\n[9]Exit\n\n";
	cout<<"\nPlease input <1-7>: ";
	cin>>choice;
	system("cls");
	switch(choice){
		case '1':{
			AddStudent();
			break;
		}
		case '2':{
			AddBook();
			break;
		}
		case '3':{
			ShowAllStudents();
			break;
		}
		case '4':{
			ShowAllBooks();
			break;
		}
		case '5':{
			ShowSpecificStudent();
			break;
		}
		case '6':{
			ShowSpecificBook();
			break;
		}
		case '7':{
			BorrowBook();
			break;
		}
		case '8':{
			ReturnBook();
			break;
		}
		case '9':{
			break;
		}
		default:{
			goto main_menu;
			break;
		}
	}
	
}

//This gets the input of the user to choose from the 
//choices and redirects to the function assigned on each choices


//*****************************************************************************************
//                        END OF THE MENU OF THE PROGRAM
//*****************************************************************************************



int main(){
menu();



}

