#include<iostream>
#include<string.h>
using namespace std;


int checkPalindrome(char arr[],int lower,int upper)
{
	if(lower>upper)
		return 1;
	else if(arr[lower]!=arr[upper])
		return -1;
	else
		return checkPalindrome(arr,lower+1,upper-1);
}

void partitionString(char str[],int lower,int upper,int max_index)
{
	if(lower > max_index)
		return;
	else if(upper > max_index)
		partitionString(str,lower + 1, lower + 2,max_index);
	else 
		partitionString(str,lower,upper + 1,max_index);

	if(checkPalindrome(str,lower,upper)==1)
	{
		for(int i = lower; i <= upper ; i++ )
		{
			cout<<str[i];
		}
		cout<<endl;
	}
	

}
int main()
{
	char str[50];
	cin>>str;
	cout<<"\nPaildromic Partitions: "<<endl;
/*
	for(int i = 0;  i< strlen(str) ; i++)
	{
		for(int j = i+1; j < strlen(str) ; j++)
			partitionString(str,i,j);
	}

*/
	int length = strlen(str);
	partitionString(str,0,1,length - 1);
	return 0;
}