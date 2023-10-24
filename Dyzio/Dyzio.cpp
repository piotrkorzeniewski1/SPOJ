#include <iostream>
#include <math.h>

using namespace std;

bool tablica_pierwszych[1000001];
int suma_prefiksowa[1000002];
int main()
{
  suma_prefiksowa[2]=0;
  for(int i = 2 ; i <= sqrt(1000000) ; i++)
  {
        if(tablica_pierwszych[i]==false)
        {
            for(int j=i*i; j<=1000000; j+=i)
            {
                tablica_pierwszych[j]=true;
            }
        }
  }
  for( int i = 2 ; i <= 1000000 ; i++)
  {
      if(tablica_pierwszych[i]==0)
      {
          suma_prefiksowa[i+1]=suma_prefiksowa[i]+1;
      }
      else
      {
          suma_prefiksowa[i+1]=suma_prefiksowa[i];
      }
  }

  int t;
  cin >> t;
  int przedzial[t][2];

  for( int i = 0 ; i < t ; i++ )
  {
    for( int j = 0 ; j < 2 ; j++)
    {
      cin >> przedzial[i][j];
    }
  }

  for( int i = 0 ; i < t ; i++ )
  {
    int sumapierwszych = 0;
    for( int j = 0 ; j < 1 ; j++)
    {
       sumapierwszych = suma_prefiksowa[przedzial[i][j+1]+1]-suma_prefiksowa[przedzial[i][j]];
    }
    cout << sumapierwszych << endl;
  }
  return 0;
}
