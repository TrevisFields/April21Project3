#pragma once
#include <string>

class Mage
{
private:
  std::string _name;
  
public:
  Mage(std::string name);
  ~Mage();
  
  std::string GetName()
  const {return _name;}
  std::string Attack()
  {return _name + " casts magic missles at the darkness!";}
};
