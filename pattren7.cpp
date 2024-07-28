#include<iostream>
using namespace std;

int main()
{
	int count=0;
	for (int i=1; i<=5; i++)
	{
		for (int j=1; j<i; j++)
		{
			char ch= 'A'+count;
			cout<<ch;
			count++;
		}
		cout<<endl;
	}

 return 0;
}

