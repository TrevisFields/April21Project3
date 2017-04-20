#include "Guild.h"

Guild::Guild(std::string name) : _name(name)
{
  
}

Guild::~Guild()
{
  
}

void Guild::AddMage(std::string name)
{
  auto magePtr = std::make_shared<Mage>(name);
  _mages.push_back(magePtr));
}

void Guild::AddPaladin(std::string name)
{
  auto paladin = std::make_shared<Paladin>(name);
  _paladins.push_back(paladin));
}

void Guild::AddRanger(std::string name)
{
  auto ranger = std::make_shared<Ranger>(name);
  _rangers.push_back(ranger));
}

void Guild::AddWarrior(std::string name)
{
  auto warrior = std::make_shared<Warrior>(name);
  _warriors.push_back(warrior));
}

std::string Guild::GetInfo()
{
  std::string output = "Your guild has: \n";
  output += _mages.size()    > 0 ? std::to_string(mages.size()) + "mages\n" : "No mages!\n";
  output += _paladins.size()    > 0 ? std::to_string(paladins.size()) + "paladins\n" : "No paladins!\n";
  output += _rangers.size()    > 0 ? std::to_string(rangers.size()) + "rangers\n" : "No rangers!\n";
  output += _warriors.size()    > 0 ? std::to_string(warriors.size()) + "warriors\n" : "No warriors!\n";
  return output;
}

std::string Guild::AttackWithMages()
{
  std::string output = "You command your mages to attack! \n";
  if(_mages.size() > 0)
	 {
		for(auto mage : _mages)
		{
		  output += mage -> Attack() + "\n";
		}
	 }
  return output;
}

std::string Guild::AttackWithPaladins()
{
  std::string output = "You command your paladins to attack! \n";
  if(_paladins.size() > 0)
	 {
		for(auto paladin : _paladins)
		{
		  output += paladin -> Attack() + "\n";
		}
	 }
  return output;
}

std::string Guild::AttackWithRangers()
{
  std::string output = "You command your rangers to attack! \n";
  if(_rangers.size() > 0)
	 {
		for(auto ranger : _rangers)
		{
		  output += ranger -> Attack() + "\n";
		}
	 }
  return output;
}

std::string Guild::AttackWithWarriors()
{
  std::string output = "You command your warriors to attack! \n";
  if(_warriors.size() > 0)
	 {
		for(auto warrior : _warriors)
		{
		  output += warrior -> Attack() + "\n";
		}
	 }
  return output;
}

std::string Guild::AttackWithAllAdventurers()
{
  std::string output = "You command everyone to attack! \n";
  output += AttackWithMages();
  output += AttackWithPaladins();
  output += AttackWithRangers();
  output += AttackWithWarriors();
  return output;
}
