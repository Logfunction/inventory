

#include <iostream>
#include <string>
#include "Inventory.h"
#include "InventoryDemoHelper.h"
using namespace std;

void presentActions(int& x) {
	cout << "----------------------------" << endl;
	cout << "Choose an action:" << endl;
	cout << "View Equipped Loadout" << endl;
	cout << "View Inventory" << endl;
	cout << "Equip Item" << endl;
	cout << "Unequip Item" << endl;
	cout << "Exit" << endl;
	cout << "> ";
	cin >> x;
	cin.ignore();
}

int main()
{
	Inventory* inventory = new Inventory();
	InventoryDemoHelper* helper = new InventoryDemoHelper();
	helper->initializeInventory(inventory);
	cout << "----------------------------" << endl;
	cout << "Greetings Traveler!" << endl;
	while (true) {
		int x{};
		presentActions(x);
		printf("You selected %d \n", x);
		if (x == 1) {
			helper->handlePrintLoadout(inventory);
		} else if(x == 2){
			helper->printFullInventory(inventory);
		} else if (x == 3) {
			helper->handleEquipSelection(inventory);
		} else if (x == 4){
			helper->handleUnequipSelection(inventory);
		} else if (x == 5) {
			cout << "Do you really want to exit? yes/no" << endl;
			
			string confirmation;
			getline(cin, confirmation);
			if ("y" == confirmation || "yes" == confirmation) {
				delete helper;
				delete inventory;
				return 0;
			}
		}
		else {
			cout << "***Invalid Selection***" << endl;
		}
	}
	
}