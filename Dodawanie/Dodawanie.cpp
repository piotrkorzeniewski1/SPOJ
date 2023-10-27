#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int tab[5000]={0};
    int x;
    string a;
    string b;
    cin >> a >> b;
   
    if(a.length()>b.length()) x=a.length();
   
    else x=b.length();
   
    for( int k=0, i=a.length()-1; i>=0 ; i--, k++ )
    {
        tab[k]=tab[k]+((char)a[i]-'0');
    }
   
    for( int k=0, i=b.length()-1 ; i>=0 ; i--, k++ )
    {
        tab[k]=tab[k]+((char)b[i]-'0');
    }
   
    cout << endl;
   
    for( int i = 0 ; i<=x-1 ; i++)
    {
        if(tab[i]>=10)
        {
            tab[i]=tab[i]-10;
            tab[i+1]=tab[i+1]+1;
        }
    }
    
   	if(tab[x] == 0) x--;
   	
    for( int i = x ; i >= 0 ; i-- )
	{

		cout << tab[i];
    }
    
	}
	return 0;
}