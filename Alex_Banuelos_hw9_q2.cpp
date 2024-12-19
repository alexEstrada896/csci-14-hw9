/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>
int coinToss (); //prototype for cointoss
int main()
{


	int seed = time(0);
	srand(seed);

	int headsCount = 0, tailsCount = 0;
	int  amountTossed;
	cout << "How many times the coin should be tossed: " <<endl; //inputs amount tossed entered by user
	cin >> amountTossed;

	for (int i = 0; i < amountTossed ; i ++) //flips a coin for the amount of times user entered
	{
		int side = coinToss();

		if (side == 1)//results for heads
		{
			cout << "heads"<<endl;
			headsCount++;
		}

		if (side == 2) //results for tails
		{
			cout << "tails"<<endl;
			tailsCount++;
		}




	}
//outputs result
	cout << "After tossing the coin "<< amountTossed <<" times, we get heads "<< headsCount<<" times and tails "<<
	     tailsCount<<" times"<<endl;

	return 0;
}
//function for coin toss that returns a 1 or 2
int coinToss()
{

	int coinNumber;
	coinNumber = (rand()%(2 - 1 + 1)) + 1;

	return coinNumber;
}