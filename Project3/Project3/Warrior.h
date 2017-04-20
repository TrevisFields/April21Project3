#pragma once
#include <string>

class Warrior
{
private:
  std::string _name;
  
public:
  Warrior(std::string name);
  ~Warrior();
  
  std::string GetName()
  const {return _name;}
  std::string Attack()
  {return _name + " shouts ' DO YOU LIKE MY SWORD SWORD SWORD.\n MY DIAMOND SWORD!";}
};
