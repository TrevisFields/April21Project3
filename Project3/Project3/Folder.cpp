#include "Folder.h"

Folder::Folder(std::string name) : _name(name)
{
  
}

Folder::Folder()
{
  
}

Folder::~Folder()
{
  
}

std::vector<std::string> Folder::ListFiles()
{
  std::vector<std::string> list;
  for(auto file : _files)
	 {
		list.push_back(file -> getName());
	 }
  return list;
}

std::string Folder::ListContents()
{
  std::string output = "\n";
  for(auto folder : _folders)
	 {
		output += "\\" + folder -> getName() + "\n";
	 }
  return output;
}

void Folder::AddFile(std::shared_ptr<File> newFile)
{
  _files.push_back(newFile);
}

  //possibly need to remove this code
std::shared_ptr<File> File::FindFile(std::string name)
{
  for(auto file : file)
	 {
		if(file -> getName() == name)
		{
		  return file;
		}
	 }
  return nullptr;
}

void Folder::AddFolder(std::shared_ptr<Folder> newFolder)
{
  _folders.push_back(newFolder);
}

std::shared_ptr<Folder> Folder::FindFolder(std::string name)
{
  for(auto folder : _folders)
	 {
		if(folder -> getName() == name)
		{
		  return folder;
		}
	 }
  return nullptr;
}
