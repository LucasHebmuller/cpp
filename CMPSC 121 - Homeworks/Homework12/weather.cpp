/**
 * weather.cpp:
 * The program should ask for the user data from each quarter of the year and then analyze this data, after that the program should display the results of the analysis.
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
using namespace std;


struct WeatherInfo
{
    double totalRainfall;
    double lowTemperature;
    double highTemperature;
    double averageTemperature;
};


void computeMinMax(WeatherInfo year[], int nQuarter, double& highest, double& lowest, int& highQuarter, int& lowQuarter);
void displayAverages(WeatherInfo year[], int nQuarter, double& highest, double& lowest, int& highQuarter, int& lowQuarter);


int main()
{
    const int QUARTER = 4;
    double highest, lowest;
    int highQuarter, lowQuarter;
    WeatherInfo data[ QUARTER ];


    cout << "Enter the total rainfall, low & high temperatures:" << endl;
    for ( int i = 0; i < QUARTER; i++ )
    {

        cout << "Quarter " << i + 1 << ":";
        cin >> data[i].totalRainfall >> data[i].lowTemperature >> data[i].highTemperature;

        if (data[i].lowTemperature < -100 || data[i].lowTemperature > 140 || data[i].highTemperature < -100 ||
            data[i].highTemperature > 140 || data[i].lowTemperature > data[i].highTemperature) {
            do {
                cout << "ERROR: Temperature range: -100 through 140 \n"
                        "       Low temperature <= high temperature. \n"
                        "       Please enter low and high temperatures again:";
                cin >> data[i].lowTemperature >> data[i].highTemperature;
            } while (data[i].lowTemperature < -100 || data[i].lowTemperature > 140 || data[i].highTemperature < -100 ||
                     data[i].highTemperature > 140 || data[i].lowTemperature > data[i].highTemperature);
        }

        data[i].averageTemperature = (data[i].highTemperature + data[i].lowTemperature) / 2.0;
    }

    computeMinMax( data, QUARTER, highest, lowest, highQuarter, lowQuarter );
    displayAverages( data, QUARTER, highest, lowest, highQuarter, lowQuarter );


    return 0;
}


void computeMinMax(WeatherInfo year[], int nQuarter, double& highest, double& lowest, int& highQuarter, int& lowQuarter)
{
    highest = year[0].highTemperature;
    lowest = year[1].lowTemperature;

    for ( int i = 0; i < nQuarter; i++ )
    {
        if ( highest < year[i].highTemperature )
        {
            highest = year[i].highTemperature;
            highQuarter = i+1;
        }

        if ( lowest > year[i].lowTemperature )
        {
            lowest = year[i].lowTemperature;
            lowQuarter = i+1;
        }
    }
}


void displayAverages(WeatherInfo year[], int nQuarter, double& highest, double& lowest, int& highQuarter, int& lowQuarter)
{
    double rainfall = 0;
    for ( int i = 0; i < nQuarter; i++ )
    {
        rainfall += year[i].totalRainfall;
    }
    cout << "Total Rainfall: " << rainfall << endl;


    double averageRain = rainfall / 4.0;
    cout << "Average Quarterly Rain: " << averageRain << endl;


    double averageTemperature = 0;
    for ( int i = 0; i < nQuarter; i++ )
    {
        averageTemperature += year[i].averageTemperature;
    }
    averageTemperature = averageTemperature / 4.0;
    cout << "Average Quarterly Average Temperature: " << averageTemperature << endl;


    cout << "Highest Temperature: " << highest << " (Quarter " << highQuarter << ")" << endl;
    cout << "Lowest Temperature: " << lowest << " (Quarter " << lowQuarter << ")" << endl;

}


/*
 * EXECUTION SAMPLE:
 *
 * Enter the total rainfall, low & high temperatures:
 * Quarter 1:90 -30 47
 * Quarter 2:68 0 67
 * Quarter 3:31 50 140
 * Quarter 4:62 23 190
 * ERROR: Temperature range: -100 through 140
 *        Low temperature <= high temperature.
 *        Please enter low and high temperatures again:23 21
 * ERROR: Temperature range: -100 through 140
 *        Low temperature <= high temperature.
 *        Please enter low and high temperatures again:23 100
 * Total Rainfall: 251
 * Average Quarterly Rain: 62.75
 * Average Quarterly Average Temperature: 49.625
 * Highest Temperature: 140 (Quarter 3)
 * Lowest Temperature: -30 (Quarter 1)
 *
 */



