#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


class InventoryItem
{
private:
    string description;
    double cost;
    int units;
public:
    InventoryItem()
    {
        description = "";
        cost = 0.0;
        units = 0;
    }

    InventoryItem(string desc)
    {
        description = desc;
        cost = 0.0;
        units = 0;
    }

    InventoryItem(string desc, double c, int u)
    {
        description = desc;
        cost = c;
        units = u;
    }

    void setDescription(string d)
    {
        description = d;
    }

    void setCost(double c)
    {
        cost = c;
    }

    void setUnits(int u)
    {
        units = u;
    }

    string getDescription() const
    {
        return description;
    }

    double getCost() const
    {
        return cost;
    }

    int getUnits() const
    {
        return units;
    }
};


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
        cout << setw(13) << inventory[i].getCost();
        cout << setw(16) << inventory[i].getUnits() << endl;
    }


    return 0;
}