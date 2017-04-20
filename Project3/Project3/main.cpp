  //Adventurer Program and File program
#include <iostream>

using namespace std;

void ProgramEndMessage();
void WelcomeMessage();
int main()
{
  WelcomeMessage();
  cout << "1) Adventurer Program.\n";
  cout << "2) File Search Program.\n";
  cout << "0) Exit Program.\n";
  cout << "Please enter a number.\n";
  
  int number = 0;
  while(number != - 1)
  {
	 cin >> number;
  switch(number)
  {
	 case 1:
	 cout << "This is case a.\n";
		
	 break;
	 
	 case 2:
	 cout << "This is case b.\n";
	 break;
	 
	 case 0:
	 cout << "This is the end of the program.\n";
	 break;
		
		
	 default:
	 cout << "Invalid Entry\nPlease enter a choice from the menu.\n";
	 
  }//end of switch statement
  }//end of while statement
  ProgramEndMessage();
  return 0;
}//end of main function

void ProgramEndMessage()
{
  cout << "Thank you for using the program to run the code.\n";
}

void WelcomeMessage()
{
  cout << "Hello and welcome to the program code for File/Folder search.\n";
}
