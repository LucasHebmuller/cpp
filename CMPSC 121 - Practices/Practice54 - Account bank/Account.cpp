//
// Created by lucas on 12/28/2022.
//

#include "Account.h"


bool Account::withdraw(double amount)
{
    if ( balance < amount )
    {
        return false;
    }
    else
    {
        balance -= amount;
        transactions++;
        return true;
    }
}