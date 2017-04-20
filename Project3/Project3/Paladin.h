#pragma once
#include <string>

class Paladin
{
private:
  std::string _name;
  
public:
  Paladin(std::string name);
  ~Paladin();
  
  std::string GetName()
  const{return _name;}
  std::string Attack()
  {return _name + " swings a giant maul at his foes!";}
};
