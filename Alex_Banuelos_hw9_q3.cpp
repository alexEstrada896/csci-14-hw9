/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;



double getSales(string); //prototype for getSales
void findHighest(double, double, double, double);//prototype for findHighest
int main()
{


//variable for the sales in each division
	double northEastSales = getSales("northEast") ;
	double southeastSales = getSales("southEast");
	double northWestSales = getSales("northWest");
	double southWestSales = getSales("southWest");


	findHighest(northEastSales, southeastSales, northWestSales, southWestSales);

	return 0;
}

//function to enter the number of sales based on the division
double getSales( string division)
{
	double sales;
	cout << "What is the quarterly sales figure in the "<<division<<" devision: $";
	cin >> sales;
//validates input
	while (sales < 0.00)
	{
		cout <<"Error! Cant accept value under $0.00"<<endl;
		cout << "What is the quarterly sales figure in the "<<division<<" devision: $";
		cin >>sales;
	}
//returns sales that will be used to determin the highest in other function
	return sales;

}

//finction to determin the highest sales between the four
void findHighest(double division1,double division2,double division3, double division4)
{
	double highestSales = division1;
	string highestName = "North East";

	if (division1 > highestSales)
	{
		highestSales = division1;//variable stores highest sale
		highestName = "North East";//variable stores name of highest sale
	}

	if (division2 > highestSales)
	{
		highestSales = division2;
		highestName = "South East";
	}

	if (division3 > highestSales)
	{
		highestSales = division3;
		highestName = "North West";
	}

	if (division4 > highestSales)
	{
		highestSales = division4;
		highestName = "South West";
	}

	cout << "The "<<highestName<<" division has the highest sales with $"<<highestSales<<endl;
}