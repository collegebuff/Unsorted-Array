#include "dynamic_size_array_unsorted.h"

using namespace std;


void init(int_array& arr)
{
	arr.capacity = arr.DEFAULT_CAPACITY;
	arr.data = new int [arr.capacity];
	arr.count=0;
}

void clear(int_array& arr)
{
	if (arr.count == 0);
	else(arr.count = 0);
}

void destr(int_array& arr)
{
	delete [] arr.data;
	arr.count = 0;
}

void print(const int_array& arr)
{
	for (unsigned int i = 0; i < arr.count; ++i)
		cout << arr.data[i] << " ";
	cout << endl;
}

bool contains(const int_array& arr, const int& target)
{
	for(unsigned int j=0; j < arr.count; ++j)
	{
		if(target == arr.data[j])
		{
			return true;
		}

	}
	return false;	
	// STUB
	
}

void resize(int_array& arr)
{
	arr.capacity *= 2;
	int* bigarray = new int [arr.capacity];
	for ( unsigned int q = 0; q < arr.count; ++q)
		bigarray[q] = arr.data [q];
	delete [] arr.data;
	arr.data = bigarray;
}

void add(int_array& arr, const int& payload)
{

if (arr.count < arr.capacity)
		{
				arr.data[arr.count] = payload;
				++arr.count;
		}	
			
	else
	{
	resize(arr);
	arr.data[arr.count] = payload;
	++arr.count;
	
	}
	
}
	
	// STUB 


bool remove(int_array& arr, const int& target)
{
	for (unsigned int i=0; i < arr.count; ++i)
	{
		if ( arr.data[i] == target)
		{
			arr.data[i]=arr.data[arr.count--];
	return true;
	}
	
}

return false;
}
