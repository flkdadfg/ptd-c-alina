
#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>

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
   int n; //nombre de cassos (tirolinas que s'han de fer)
   cin >> n;
  for (int i = 0;i < n;i++){
    
    int alt;    //altura edifici   
    cin >> alt;
    
    int hor;    //distancia horizontal
    cin >> hor; 
    
    int tir = 0;    //distancia de tirolina
    int cont = 0; //contadror de voltes
    
    for (int cont = 0; cont < 1 ;cont++){  
           tir = alt*alt + hor*hor; 
           tir = sqrt(tir);
    }
    
    cout << tir << endl;
  }
}
