/*
Name: Eldan Rey V. Dofredo
Date Created:12/11/20 06:58
*/
#include <iostream>
#include <iomanip>
vois menu();
using namespace std;

void AddStudent(){
	
	
	
	
}
void AddBook(){
	
	
	
	
}
void ShowAllStudents(){
	
	
	
	
}
void ShowAllBooks(){
	
	
	
	
}
void ShowSpecificStudent(){
	
	
	
	
}
void ShowSpecificBook(){
	
	
	
	
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
	cout<<"\n[7]Exit\n\n";
	cout<<"\nPlease input <1-7>: ";
	cin>>choice;
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
			return 0;
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

