#include<iostream>
using namespace std;

int sqrtUsingBinarySearch(int num)
{
	int start = 0;
	int end = num;
	int mid = start + (end- start)/2;
	int ans = -1;
	
	while(start <= end)
	{
		int square = mid * mid;
		if(square == num)
		{
			return mid;
		}
		else if(square > num)
		{
			end = mid-1;
		}
		else if(square < num)
		{
			ans = mid;
			start = mid+1;
		}
		
		mid = start + (end- start)/2;
	}
	return start;
	
}

int main()
{
	int num;
	cout<<" Enter the number : ";
	cin>>num;
	int x = sqrtUsingBinarySearch(num);
	cout<<" The sqrt of number is " << x;
	
}
