#include<iostream>
#include<string.h>

using namespace std;

//Function to check if number is palindrome
int checkPalindrome(char arr[],int lower,int upper)
{
	if(lower>upper)			//base consition
		return 1; 		
    
	else if(arr[lower]!=arr[upper])     //base condition
		return -1;
    
	else
		return checkPalindrome(arr,lower+1,upper-1);
}

int main()
{
	char arr[30];
	cout<<"Input string: ";
	cin>>arr;
  
	int result=checkPalindrome(arr,0,strlen(arr)-1);
  
	if(result==1)
	{
		cout<<"Palindrome"<<endl;
	}
	else
		cout<<"Not Palindrome"<<endl;
	
  return 0;

}
