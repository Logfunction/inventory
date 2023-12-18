#include "Item.h"


string Item::printItemStats() {
	std::stringstream ss;
	ss << name << " | " << slotType << " | Damage: " << attack << " | Defense: " << defense;
	return ss.str();
}

//string Food::printItemStats(){
//	std::stringstream ss;
//	ss << name << " | " << slotType << " | HP: " << vitality << " | Calories: " << calories;
//	return ss.str();
//}