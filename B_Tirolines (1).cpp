
#include <stdio.h>
#include <iostream>
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
    //int a; //nombre de casos
    int cont = 0; //contadror de voltes
    int alt;    //altura edifici   
    cin >> alt;
    int hor;    //distancia horizontal
    cin >> hor;
    
    int tir = 0;    //distancia de tirolina
    //cin >> a;   //legim el nombre de vegades A
    
    //vector< long int> v(a);     //on posam
    
    //legim totes les dades:
    
    
    //for (int y = 0;y < a;y++){
      //  cin >> v[y];
//    }
    
    
    for (int cont = 0; cont < 1 ;cont++){  
       
       //alt = v[0];
       //hor = v[1];
       //if (alt > 0; hor > 0) {
           tir = alt*alt + hor*hor; 
           tir = sqrt(tir);

       //}
    }
    
        
       
    //cout << alt << " " << hor << endl;
    //cout << n << a << endl;
    cout << tir << endl;
  }
}
