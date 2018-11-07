//Реализация линейного поиска с барьером 
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
//search
int barierSearch(int key, int *array, int size)
{
	array[size] = key;
	int i = 0;
	while (array[i] != key)
		i++;
	if (i == size)
		return -1;
	return i;
}

void outArray(int *Array, int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		Array[i] = rand() % 20;
		cout << Array[i] << " ";
	}
	cout << endl;
}

int main()
{
	int size = 10, key;
	int *Arr = new int[size]; 
	outArray(Arr, size);
	cout << endl;
	cout << "Enter key ";
	cin >> key;
	cout << "Position element " << barierSearch(key, Arr, size) + 1;
	return 0;
	delete[] Arr;
}