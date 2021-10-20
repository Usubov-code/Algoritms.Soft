


#include <iostream>
#include <math.h>

using namespace std;



int main()
{
	int  arr[] = { 9,3,6,7 };

	for (int j =0; j<4;j++)
	{
		for(int i =j ; i<4 ;i++)
		{
			if (arr[j]>arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;


			}


		}
		cout << arr[j] << endl;

	}




}

