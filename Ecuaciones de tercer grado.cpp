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
    if (A==0)
    {
        cout<<"es una ecuacion cuadratica de forma Bx^2+CxD=0 "<<endl;
        float res1=0,res2=0;
        float xreal,ximag;
        aux1=(pow(C,2)-(4*B*D));
        if (aux1<0)
        {
            cout<<"la ecuacion no tiene solucion en los reales "<<endl;
            xreal=-C/(2*B);
            ximag=sqrt(-aux1)/(2*B);
            cout<<"Las soluciones imaginarias son: "<<endl;
            cout<<xreal<<"+"<<ximag<<"i "<<endl;
            cout<<xreal<<"-"<<ximag<<"i "<<endl;
        }
        else
        {
            if (B==0)
            {
               cout<<"la ecuacion no es de segundo grado ,la solucion es: "<<D/C;
            }
            else
            {
               res1=(-C-(sqrt(aux1)))/(2*B);
               res2=(-C+(sqrt(aux1)))/(2*B);
               if (res1==res2)
               {
                  cout<<"la solucion para la ecuacion es: "<<res1<<endl;
               }
                if ((aux1<0)||(B==0))
                {
                   cout<<".";
                }
                if (res1!=res2) 
                {
                   cout<<"las soluciones para la ecuacion son: "<<res1<<" y "<<res2<<endl;
                }
        
            }
        }

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
    cout<<"x1= "<<x1<<endl;
    /*Ahora debemos aplicar rufini para debelar una ecuacion cuadratica*/



    float a,b,c,e;//e es el reemplazo de D porque ya se uso d anteriormente.
    float aa,bb,cc,dd;
    a=A*AA;
    b=B*AA;
    c=C*AA;
    e=D*AA;

    aa=a;
    bb=(aa*x1)+b;
    cc=(bb*x1)+c;
    dd=(cc*x1)+e;
    
    float xreal1,ximag2,aux11,res1,res2;
   
    aux11=(pow(bb,2)-(4*aa*cc));
    if (aux11<0)
    {
        cout<<"la ecuacion no tiene solucion en los reales "<<endl;
        xreal1=-bb/(2*aa);
        ximag2=sqrt(-aux11)/(2*aa);
        cout<<"Las soluciones imaginarias son: "<<endl;
        cout<<xreal1<<"+"<<ximag2<<"i "<<endl;
        cout<<xreal1<<"-"<<ximag2<<"i "<<endl;
    }
    else
    {
        if (aa==0)
       {
        cout<<"la ecuacion no es de segundo grado ,la solucion es: "<<cc/bb;
       }
        else
       {
              res1=(-bb-(sqrt(aux11)))/(2*aa);
            res2=(-bb+(sqrt(aux11)))/(2*aa);
            if (res1==res2)
            {
                cout<<"la solucion para la ecuacion es: "<<res1<<endl;
            }
            if ((aux1<0)||(aa==0))
            {
                cout<<".";
            }
            if (res1!=res2) 
            {
             cout<<"las soluciones para la ecuacion son: "<<res1<<" y "<<res2<<endl;
            }
        
        }
    }
    system("pause");
    



    


}

