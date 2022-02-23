//Ecuaciones de tercer grado
/*Se resolvera la primera raiz por medio de la formula de cardamo, 
posteriormente aplicaremos rufini y para obtener una ecuacion de segundo grado 
la cual se resolvera por la formula general*/

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main ()
{
    float p,q,delta;         //p, q y d valores para cardamo.
    float A,B,C,D,A1,B1,C1,D1,a,b,c;
    double aux01,aux02,aux03;
    float x1,x2,x3,xreal,ximag;
    cout<<"Introduzca los coeficionetes de la ecuacion de tercer grado de la forma Ax^3+Bx^2+Cx+D=0"<<endl;
    cout<<"Digite A: ";
    cin>>A;
    cout<<"Digite B: ";
    cin>>B;
    cout<<"Digite C: ";
    cin>>C;
    cout<<"Digite D: ";
    cin>>D;
    cout<<"La ecuacion es: "<<A<<"x^3+"<<B<<"x^2+"<<C<<"x+"<<D<<"=0"<<endl;
    if (A==1)
    {
        a=B;
        b=C;
        c=D;
    }
    else 
    {
        A1=A/A;
        B1=B/A;
        C1=C/A;
        D1=D/A;
        a=B1;
        b=C1;
        c=D1;
    }
    p=((3*b)-(a*a))/3;
    q=((2*a*a*a)-(9*a*b)+(27*c))/27;
    delta=(pow((q/2),2))+pow((p/3),3);
    if (delta<0)
    {
       aux01=((-q/2)+sqrt(-delta));
       aux02=((-q/2)-sqrt(-delta));
       aux01=cbrt(aux01);
       aux02=cbrt(aux02);
    }
    else
    {
       aux01=((-q/2)+sqrt(delta));
       aux02=((-q/2)-sqrt(delta));
       aux01=cbrt(aux01);
       aux02=cbrt(aux02);
    }

    x1=aux01+aux02-(a/3);           //esta es la primera raiz 
                                   //ahora debemos desarollar por rufini con la raiz encontrada para obtener una ecuacion cuadratica.
    
    B=((A*x1)+B);
    C=(B*x1)+C;
    aux03=(B*B)-(4*A*C);
    if(A==0)
    {
        cout<<"la ecuacion no es de tercer grado ,la solucion es: "<<C/B;
    }
    else
    {
        if (aux03<0)
        {
        cout<<"la solucion en los reales es: "<<x1<<endl;
        xreal=-B/(2*A);
        ximag=sqrt(-aux03)/(2*A);
        cout<<"Las soluciones imaginarias son: "<<endl;
        cout<<xreal<<"+"<<ximag<<"i "<<endl;
        cout<<xreal<<"-"<<ximag<<"i "<<endl;
        }
        else 
        {
            if (aux03==0)
            {
                cout<<"la soluciones para la ecuacion son: "<<x1<<" y "<<-B/(2*A)<<endl;
            }
            else 
            {
                x2=(-B-(sqrt(aux03)))/(2*A);
                x3=(-B+(sqrt(aux03)))/(2*A);
                if (x2==x3)
                {
                  cout<<"la solucion para la ecuacion es: "<<x1<<"y "<<x2<<endl;
                }
                else 
                {
                    cout<<"las soluciones para la ecuacion son: "<<x1<<" y "<<x2<<" y "<<x3<<endl;
                }
            }
        }
    }

   system("pause");
    

}

