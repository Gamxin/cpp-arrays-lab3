// Michael Gams, Abhi Kumar, Michael C, Chris V

/*
[x] Write a program that performs the following:
[x] Prompt the user to input five numbers.
[x] Store the input into either an array or a vector.
[x] Once the user is finished entering numbers:
[x] Display the five numbers in reverse order.
[] Display the highest number entered.
[] Display the lowest number entered.
[x] Extra Credit: Allow the user to enter as many numbers as they want(at least 5).
[x] Compress(zip) your program and submit it to Blackboard.
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

	cout << "Reversed: ";
	while (i >= 0)
	{
		cout << arr[i] << " ";
		i--;
	}
	cout << endl;
	
	i = 0;
	int min = arr[i];
	int max = arr[i];

	while (i < size - 1)
	{
		i++;

		if (arr[i] >= max)
		{
			max = arr[i];
		}

		if (arr[i] <= min)
		{
			min = arr[i];
		}
	}
	cout << "Lowest Number: " << min << endl;
	cout << "Highest Number: " << max << endl;

	_getch();
	return 0;
}