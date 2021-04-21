void sort(int arr[], int even[], int odd[], const int SIZE, int size_even, int size_odd)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] % 2 != 0) 
		{ 
			size_odd++;
			odd[i] = arr[i]; 
		}
		else
		{
			size_even++;
			even[i] = arr[i];
		}
	}
}