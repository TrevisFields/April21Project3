  //LOOK AT THE GRADEBOOK EXAMPLE TO CHANGE THIS CODE UP SO THAT ALL OF THIS CODE IS CALLED IN THE MENU AND USED AFTER THE USER SELECTS THE OPTION TO GO THROUGH THE CODE IF POSSIBLE

#include "Folder.h"
#include <iostream>

using namespace std;

void DisplayMenu(shared_ptr<Folder> currentFolder, shared_ptr<Folder> parent);
void AddFileMenu(shared_ptr<Folder> currentFolder);
void AddFolderMenu(shared_ptr<Folder> currentFolder);
shared_ptr<Folder> NavigateToFolder(shared_ptr<Folder> currentFolder);

  //WOULD LIKE TO MAKE THIS CODE GO INTO THE MENU WITH OUT HAVING ALL THE CODE IN ONE PLACE
  //IN OTHER WORDS I WANT TO USE THIS CODE IN A MENU OF THE MAIN FUNCTION
int main()
{
  auto currentFolder = make_shared<Folder>("Root");
  auto parentFolder = make_shared<Folder>();
  parentFolder = nullptr;
  
  int choice = 0;
  while(choice != -1)
	 {
		DisplayMenu(currentFolder,parentFolder);
		cin >> choice;
		switch(choice)
		{
			 case 1:
			 system("cls");
			 cout << "Contents of " << currentFolder -> getName() << currentFolder -> ListContents()
			 << endl;
			 system("pause");
			 break;
			 
			 case 2: AddFileMenu(currentFolder);
			 break;
			 case 3:
			 {
				auto newCurrent = NavigateToFolder(currentFolder);
				parentFolder = currentFolder;
				currentFolder = newCurrent;
				cout << endl << "Now in folder: " << newCurrent -> getName() << "!";
				break;
			 }
			 case 4: AddFolderMenu(currentFolder);
			 break;
			 
			 case 5:
			 //IMPLEMENT THIS
			 break;
			 
			 case 6:
			 {
				if(parentFolder != nullptr)
				{
				  currentFolder = parentFolder;
				  cout << endl << "Now in folder: " << currentFolder -> getName() << "!";
				}
				break;
			 }//case 6
			 default: choice = -1;
			 break;
		}//end of switch
	 }//end of while
  system("pause");
}//end of main(void)

shared_ptr<Folder> NavigateToFolder(shared_ptr<Folder> currentFolder)
{
  cout << "Folder Name: ";
  string name;
  cin >> name;
  cin.ignore();
  
  auto folder = currentFolder -> FindFolder(name);
  return folder;
}

void AddDisplayMenu(shared_ptr<Folder> currentFolder, shared_ptr<Folder> parent)
{
  system("cls");
  cout << "Now in " << currentFolder -> getName() << endl;
  cout << "************************************************" << endl;
  cout << "1) List Folder Contents" << endl;
  cout << "2) Add File to Folder" << endl;
  cout << "3) Open" << endl;
  cout << "4) Add Subfolder" << endl;
  cout << "5) Search for File" << endl;
  if(parent != nullptr)
	 {
		cout << "6) Return to [" << parent -> getName() << "]";
	 }
}

void AddFileMenu(shared_ptr<Folder> currentFolder)
{
  system("cls");
  cout << "Enter new File name: ";
  string name;
  cin >> name;
  cin.ignore();
  
  auto newFile = make_shared<File>(name);
  currentFolder -> AddFile(newFile);
}

void AddFolderMenu(shared_ptr<Folder> currentFolder)
{
  system("cls");
  cout << "Enter new Folder name: ";
  string name;
  cin >> name;
  cin.ignore();
  
  auto newFolder = make_shared<Folder>(name);
  currentFolder -> AddFolder(newFolder);
}

void SearchFile()
{
  //WRITE CODE TO SEARCH FOR A FILE AND IMPLEMENT IT IN CASE 5
}
