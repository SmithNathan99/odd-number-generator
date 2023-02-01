/* Author:      Nathan Smith (nathansmith11@my.unt.edu) 
   Date: 03/02/2022
   Instructor: Dr. Pradhumna Shrestha
   Description: This program will generate 2 random numbers from specific ranges. Then, a while loop will be made to 
   	calculate all the odd numbers between the 2 random generated numbers
 */ 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
int main () 
{
	//seeded random generator
	srand(time(NULL));
	
	//declraing variables as well as declraing the range for random generated numbers
	int oddsum = 0;
	int random1 = (rand() % 21) + 10;
	int random2 = (rand() % 21) + 40;

	cout << "First Random Number: " << random1 << endl;
	cout << "Second Random Number: " << random2 << endl;

	// while-loop
	while(random1 <=  random2) {
		
		//if statement checking whether if either of the random numbers are odd to bothh initiate and end the sum of all od numbers in between the range
		if(random1 % 2 == 1 || random2 % 2 == 1) {
			oddsum = oddsum + random1;
		}
		++random1;
	}

	cout << "The sum between the two random odd numbers: " << oddsum << endl;


	return 0;
}
