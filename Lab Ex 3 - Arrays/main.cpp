
/*
[ ] Write a program that performs the following:
[x] Prompt the user to input five numbers.
[x] Store the input into either an array or a vector.
[x] Once the user is finished entering numbers:
[] Display the five numbers in reverse order.
[] Display the highest number entered.
[] Display the lowest number entered.
[x] Extra Credit: Allow the user to enter as many numbers as they want(at least 5).
[ ] Compress(zip) your program and submit it to Blackboard.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int size;

	cout << "How Many Numbers? ";
	cin >> size;

	int *arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter Some Number: ";
		cin >> arr[i];
	}

	int i = (size - 1);

	while (i > 0)
	{
		cout << arr[i];
		i--;
	}

	_getch();
	return 0;
}