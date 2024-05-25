// Page 798

#include <iostream>
#include <iomanip>
#include "InventoryItem.h"


int main()
{
    const int NUM_ITEMS = 5;
    InventoryItem inventory[NUM_ITEMS] = {
            InventoryItem("Hammer", 6.95, 12),
            InventoryItem("Wrench", 8.75, 20),
            InventoryItem("Pliers", 3.75, 10),
            InventoryItem("Ratchet", 7.95,14),
            InventoryItem("Screwdriver", 2.50,22) };

    cout << setw(14) << "Inventory Item" << setw(8) << "Cost" << setw(16) << "Units on Hand" << endl;
    cout << "--------------------------------------" << endl;
    for ( int i = 0; i < NUM_ITEMS; i++ )
    {
        cout << left << setw(18) << inventory[i].getDescription();
        cout << "$" << setw(13) << inventory[i].getCost();
        cout << setw(16) << inventory[i].getUnits() << endl;
    }



    return 0;
}