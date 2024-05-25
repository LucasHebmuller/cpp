/**
 * converter.cpp:
 * The program should prompt the user for four temperatures in Celsius and then convert this temperatures to Fahrenheit
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
#include <iomanip>

using namespace std;


void getTemperature(double temp[], int size);
void convertTemperature(double temp[], int size);


int main()
{
    const int SIZE = 4;
    double  temp[ SIZE ];

    cout << setprecision(2) << fixed;

    getTemperature( temp,  SIZE );
    convertTemperature( temp, SIZE);


    return 0;
}


void getTemperature(double temp[], int size)
{
    double c;
    for ( int i = 0; i < size; i++ )
    {
        do
        {
            cout << "Enter the Celsius temperature " << i + 1 << ":";
            cin >> c;

            if ( c <= -273.15 )
            {
                cout << "The temperature must be greater than -273.15." << endl;
            }
        } while ( c <= -273.15 );

        temp[i] = c;
    }
}


void convertTemperature(double temp[], int size)
{
    for ( int j = 0; j < size; j++)
    {
        cout << temp[j] << " degrees Celsius is " << temp[j] * 9 / 5.0 + 32 << " degrees Fahrenheit" << endl;
    }
}


/*
 * SAMPLE EXECUTION:
 * Enter the Celsius temperature 1: 23
 * Enter the Celsius temperature 2: -297.13
 * The temperature must be greater than -273.15.
 * Enter the Celsius temperature 2: 1.51
 * Enter the Celsius temperature 3: 40
 * Enter the Celsius temperature 4: -35.4
 * 23.00 degrees Celsius is 73.40 degrees Fahrenheit
 * 1.51 degrees Celsius is 34.72 degrees Fahrenheit
 * 40.00 degrees Celsius is 104.00 degrees Fahrenheit
 * -35.40 degrees Celsius is -31.72 degrees Fahrenheit
 */