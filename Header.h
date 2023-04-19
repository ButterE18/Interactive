// Ethan Nguyen 4/18/2023
// HEADER FILE!!


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

using namespace std;
int c;
char again;

void retry() {
	cout << "Youre adventure is over!\n";
	cout << "Wanna play again? (y/n):";
	cin >> again;
}
void dead() {
	cout << "You have died! ";
	retry(); //Goes to retry function
}
void choice1() {
	cout << "goodjob! ";
	retry(); //Goes to retry function
}
void choice2() {
	dead();
}
void choice3() {
	cout << "You loop around and find yourself in the same spot! ";
	retry(); //Goes to retry function
}
