#ifndef ITEM
#define ITEM
#include <string>
#include <map>
#include <optional>
#include <sstream>
//using namespace std;
typedef std::string string;

class Item
{

public:
	
	
	Item(string name, string slotType, int attack, int defense)
	: name(name), slotType(slotType), attack(attack), defense(defense){};
	~Item(){};

	[[nodiscard]] string getName(){
		return name;
	};
	[[nodiscard]] string getSlotType(){
		return slotType;
	};
	[[nodiscard]] int getAttack(){
		return attack;
	};
	[[nodiscard]] int getDefense(){
		return defense;
	};
	virtual string printItemStats();

	//friend class Food;
private:
	string name;
	string slotType;
	int attack;
	int defense;
};

//class Food : Item
//{
//public:
//	Food(float calories, float vitality, string name, string slotType, int attack, int defense)
//	: calories(calories), vitality(vitality), name(name), slotType(slotType), attack(attack), defense(defense){
//
//	};
//	virtual string printItemStats() override;
//private:
//	float calories;
//	float vitality;
//};
#endif

