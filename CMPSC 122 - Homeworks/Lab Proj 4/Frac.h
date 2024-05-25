//
// Created by lucas on 2/1/2023.
//

#ifndef LAB_PROJ_4_FRAC_H
#define LAB_PROJ_4_FRAC_H


class Fraction
{
    public:
        Fraction(int = 0, int = 1);
        Fraction add(const Fraction &);
        Fraction subtract(const Fraction &);
        Fraction multiply(const Fraction &);
        Fraction divide(const Fraction &);
        void printFraction();
        void printFractionAsFloat();

    private:
        int numerator;
        int denominator;
        void reduce();
};


#endif //LAB_PROJ_4_FRAC_H
