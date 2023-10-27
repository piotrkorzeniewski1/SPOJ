#include <iostream>
 
using namespace std;
 
int main()
{
	string x;
	char tab[10];
	while(cin>>x)
	{
		for (int i=0 ; i<=9 ; i++)tab[i]=0;
		for(int i=0,z=0 ; i<=18 ; i=i+2,z++)
		{
			for(int j=65,n=0,m=0; j<=80 ; j++,n++,m=m+16)
			{
				if(j==(int)x[i]&&j==(int)x[i+1])
				{
					tab[z]=n+m;
					break;
				}
				else if(j==(int)x[i])
				{
					tab[z]=tab[z]+n;
				}
				else if(j==(int)x[i+1])
				{
					tab[z]=tab[z]+m;
				}
			}
			cout << tab[z];
		}
		cout << endl;
 
	}	
 
	return 0;
}