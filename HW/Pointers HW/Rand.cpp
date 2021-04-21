#include <cstdlib>
#include <ctime>
void rand(int arr[], int SIZE)
{
	srand(time(0));
	for (int i = 0; i < SIZE; i++) 
	{
		arr[i] = rand() % 10 + 1;
	}
}