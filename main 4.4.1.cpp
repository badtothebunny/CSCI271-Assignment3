#include <iostream>
using namespace std;
//This program uses the Fibonacci sequence and finds the nth number in the sequence that the user is looking for.
//Author: Badtothebunny
int main(int argc, char** argv) 
{
	int n,sum=1,fib=0,cnt=0;
	cout<<"Enter a number that is greater than 2."<<endl;
	cin>>n;
	while (cnt<n)
	{
		sum+=fib;
		cnt++;
		fib+=sum;
		cnt++;
	}
	if (n%2==0)
		cout<<"The "<<n<<" number of the fibonacci sequence is:"<<endl<<fib<<endl;
	else
		cout<<"The "<<n<<" number of the fibonacci sequence is:"<<endl<<sum<<endl;
}

