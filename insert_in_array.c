#include<iostream>
using namespace std;
main()
{
	int i, array[11];
	for(i = 0; i < 10; i++)
	{
	    cin >> array[i];
	}
	int position, value;
	cout << "Enter position and value ";
	cin >> position >> value;
	if(position <= 10)
	{
	    for(i = 9; i >= position; i--)
	    {
	        array[i+1] = array[i];
	    }
	    array[position] = value;
	}
	for(i = 0; i < 11; i++)
	{
	    cout << array[i] << endl;
	}
}
