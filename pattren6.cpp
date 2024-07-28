#include<iostream>
using namespace std;

int main()
{
	for (int i=0; i<=4; i++)
	{
		for (int j=0; j<=i; j++)
		{
			char ch = 'A'+i;
			cout<<ch;
		}
		cout<<endl;
	}

 return 0;
}

