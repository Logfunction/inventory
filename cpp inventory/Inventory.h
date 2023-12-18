#ifndef INVENTORY
#define INVENTORY
#include <Item.h>
#include <string>

class Inventory
{
    private:
    
            vector<Item*> backpack;
            Item* head;
            Item* leftArm;
            Item* rightArm;
            Item* legs;
            Item* chest;
           
    public: 

            Inventory();
            ~Inventory();
            void setBackpack(vector<Item*> &itemList);
            vector<Item*> &getBackpack();
            void printFullInventory();
            //equiped + equip
            void printLoadout();
            void equipItem(Item& itemToEquip);
            void unEquipItem(const string slot);
            void addItemToBackpack(Item& itemToAdd);
            Item* removeItemFromBackpack(int index);
            Item* getItemInSlot(const string slot);


#endif

};