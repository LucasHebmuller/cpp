/**
 * Dice.h:
 * A class to represent the roll of dices and display the outcomes.
 *
 * @author Lucas Hebmuller
 */

#ifndef HOMEWORK13_DICE_H
#define HOMEWORK13_DICE_H


class Dice
{
    private:
        int sideUp;
    public:
        Dice();
        void toss();
        int getSideUp();
};


#endif //HOMEWORK13_DICE_H
