#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
   int n;
   cin >> n;
  for (int i = 0;i < n;i++){
    int a; //nombre de casos
    
    int max = -(10*10*10*10*10*10) -1;  //on posarem el maxim
    
    int sum = 0;    //vegades que surt el maxim
    
    cin >> a;   //legim el nombre de vegades A
    
    vector<long long int> v(a);     //on posam els nombres participants
    
    //legim totes les dades:
    
    for (int y = 0;y < a;y++){
        cin >> v[y];
    }
    for (int y = 0;y < a;y++){ //cercar max i sum  
       
       if (max < v[y]) { //si hi ha un  nou max (canviar max i sum a 0)
           max = v[y];
           sum=0;
        }  
        
        if (max == v[y]) { //si max no canvia (sum++) es fa despres de max<[y]: sum=0-> sum+ --> sum=1
            sum++;
        }
       
        
    }
    cout << max << " " << sum << endl;
  }
}
