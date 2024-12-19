q2: coinToss should display (cout) "heads" or "tails" inside the function, not return an int (-1)

2. (4 pts) Write a complete program in a cpp file that simulates the coin toss. Your program
will prompt the user how many times the coin should be tossed and then simulate the
tossing of the coin that number of times. Write a function named coinToss that
simulates the tossing of a coin. When the program calls the function, it should generate a
random number in the range of 1 through 2. If the random number is 1, the function
should display “heads.” If the random number is 2, the function should display “tails.”
Call the function in a loop to make your program work. The program must have a
function prototype for the function.
Sample input and output:
Input:
How many times the coin should be tossed: 5
Output:
heads
tails
tails
heads
heads
After tossing the coin 5 times, we get heads 3 times and
tails 2 times.


3. (4 pts) Write a complete program in a cpp file that determines which of a company’s four
divisions (Northeast, Southeast, Northwest, and Southwest) had the greatest sales for a
quarter. It should include the following two functions, which are called by main.
● double getSales() is passed the name of a division. It prompts the user for
a division’s quarterly sales figure, validates the input, then returns it. It should be
called once for each division.
● void findHighest() is passed the four sales totals. It determines which is
the largest and displays the name of the highest-grossing division, along with its
sales figures.
Your program must implement input validation: Do not accept dollar amounts less than
$0.00. The program must also have function prototypes for the functions.
Sample input and output:
Input:
What is the quarterly sales figure in the Northeast
division: $20000.5
What is the quarterly sales figure in the Southeast
division: $19875.9
What is the quarterly sales figure in the Northwest
division: $20102
What is the quarterly sales figure in the Southwest
division: $22567.8
Output:
The Southwest division has the highest sales with $22567.8
