#include <iostream>
#include <math.h>
#include <iomanip>
#define PI 3.1416
using namespace std;
float a,b,c,r;
void convertirCoordenada(float a,float b)
{  
    r=sqrt((a*a) + (b*b) );
    c=b/a;
    c=atan(c)*180/PI;
  }   
int main(){
    do{
        cout<<"Ingrese la coordenada x : ";
        cin>>a;
        if(a<0){
            cout<<"El valor debe ser positivo"<<endl;
        }
    }while(a<=0);
    do{
        cout<<"Ingrese la coordenada y : ";
        cin>>b;
        if(b<0){
            cout<<"El valor debe ser positivo"<<endl;
        }
    }while(b<=0);
   convertirCoordenada(a,b);
    cout<< "(" <<a << " , "<< b <<" ) en polares es : ("<<fixed<<setprecision(2) <<r << " , " << c <<" )"<<endl;
    
}