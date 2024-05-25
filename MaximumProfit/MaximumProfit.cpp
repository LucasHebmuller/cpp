#include <iostream>


double * getPrices();
double getMaxProfit(double *, int &, int &, int);


int main()
{
	double * stocks = getPrices();
	int buy, sell, fund = 100;
	double profit;


	for (int i = 0; i < 10; i++)
		std::cout << stocks[i] << " ";
	std::cout << std::endl;

	profit = getMaxProfit(stocks, buy, sell, fund);


	std::cout << "The maximum profit was " << profit << "." << std::endl;
	if (profit != 0)
		std::cout << "The best startegy is to buy on day " << buy << " and sell on day " << sell << "." << std::endl;

	delete [] stocks;


	return 0;
}


double * getPrices()
{
	double * prices = new double[10];

	std::cout << "Please type the 10-day price history of the stock: ";
	for (int i = 0; i < 10; i++)
		std::cin >> prices[i];


	return prices;
}


double getMaxProfit(double * prices, int & buy, int & sell, int f)
{
	double maxProfit = 0, profit;

	for (int b = 0; b < 10; b++)
	{
		for (int s = b + 2; s < 10; s++)
		{
			profit = f / prices[b] * prices[s] - f;

			if (profit > maxProfit)
			{
				maxProfit = profit;
				buy = b + 1;
				sell = s + 1;
			}
		}
	}


	return maxProfit;
}