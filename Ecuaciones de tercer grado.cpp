//Ecuaciones de tercer grado
/*Se resolvera la primera raiz por medio de la formula de cardamo, 
posteriormente aplicaremos rufini y para obtener una ecuacion de segundo grado 
la cual se resolvera por la formula general*/

#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
    double A,AA,B,C,D,RESP=0,p,q,d,x1,x2,x3,aux1,aux2,r2d,auxq;//p, q y d valores para cardamo.
    while (RESP !=1)
    {
        RESP=0;
        cout<<"Introduzca los coeficionetes de la ecuacion de tercer grado de la forma Ax^3+Bx^2+Cx+D=0"<<endl;
        cout<<"Digite A: ";
        cin>>A;
        cout<<"Digite B: ";
        cin>>B;
        cout<<"Digite C: ";
        cin>>C;
        cout<<"Digite D: ";
        cin>>D;
        cout<<"La ecuacion es: "<<A<<"x^3+"<<B<<"x^2+"<<C<<"x+"<<D<<"=0?"<<endl;
        cout<<"Digite con 1 para continuar o con cualquier numero para volver a digitar los coedifientes"<<endl;
        cin>>RESP;

    }
    AA=A;
    if (A!=1)
    {
        A=A/AA;
        B=B/AA;
        C=C/AA;
        D=D/AA;
    }
    p=((3*C)-pow(B,2))/3;
    q= ((2*(pow(B,3)))-(9*B*C)+(27*D))/27;
    d=(pow((q/2),2)+pow((p/3),3));
    r2d=sqrt(d);
    auxq=(-q/2);
    cout<<"auxq: "<<auxq<<endl;
    cout<<"raiz de delta: "<<r2d<<endl;
    aux1= auxq+r2d;
    aux2= auxq-r2d;
    if (aux1<0)
    {
        aux1=aux1*-1;
        aux1=-pow(aux1,(1.0/3.0));
    }
    else 
    {
        aux1=pow(aux1,(1.0/3.0));
    }
    if (aux2<0)
    {
        aux2=aux2*-1;
        aux2=-pow(aux2,(1.0/3.0));
    }
    else
    {
        aux2=pow(aux2,(1.0/3.0));
    }
    
    x1=aux1+aux2-(B/3);
   
    cout <<"aux1: "<<aux1<<endl;
    cout <<"aux2: "<<aux2<<endl;
    cout<<"x1= "<<x1<<endl;




    
    


    
   


}

