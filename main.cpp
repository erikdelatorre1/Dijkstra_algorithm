#include "iostream"
#include <string.h>
#include <fstream>

using namespace std;

#define ValMaxVertices 5

//
int NumeroDeNodos=0;
int a=0;
int b=0;
int PrecenciaDeArista[ValMaxVertices][ValMaxVertices]={{0},{0}};
int DatosDistanciaDeArista[ValMaxVertices][ValMaxVertices]={{0},{0}};

int main(int argc,char** argv){

    cout << "El número de nodos o vertices que trabajaremos será de: " << ValMaxVertices << endl;//NumeroDeNodos << endl;
    
    
    
    for(b=1;b<=4;b++)
    {        
        for(a=0;a<=4;a++)
        {
            if(a!=b)
            {
            cout << "¿hay conexión del vértice ? "<< (b+1) << " al " << (a+1) << " ? (usar 1=si, 0=no)" << endl;
            cin >> PrecenciaDeArista[b][a];
            }
            else
            {
                PrecenciaDeArista[b][a]=0;//asignale 0 a la matriz
            }
        }       
    }
    
    
    //igualar los elementos de repetición
    PrecenciaDeArista[0][1]=PrecenciaDeArista[1][0];
    PrecenciaDeArista[0][2]=PrecenciaDeArista[2][0];
    PrecenciaDeArista[0][3]=PrecenciaDeArista[3][0];
    PrecenciaDeArista[0][4]=PrecenciaDeArista[4][0];
        
    cout << "La matriz de adyacencia queda: " << "\n" << endl; 
    
    for(b=0;b<=4;b++)
    {
        for(a=0;a<=4;a++)
        {
            cout << PrecenciaDeArista[b][a]<<"  ";    
        }
        cout << endl;
    }
    
    
    for(b=0;b<=4;b++)
    {
        for(a=0;a<=4;a++)
        {
            if(a!=b)
            {
                if(0 != PrecenciaDeArista[b][a])
                {
                cout << "Dame la distacia del vértice " <<(b+1)<<" al "<<(a+1)<<endl;
                cin >> DatosDistanciaDeArista[b][a];
                }
                else
                {
                    //Do nothing}
                }
            }
            else
            {
                //Do nothing}
            }
        }
        //cout << endl;
    }    
    
cout << "Las distancias son: " << "\n" << endl; 
    
    for(b=0;b<=4;b++)
    {
        for(a=0;a<=4;a++)
        {
            cout << DatosDistanciaDeArista[b][a]<<"  ";    
        }
        cout << endl;
    }

//test code
    for(b=1;b<=4;b++)
    {
        for(a=1;a<=4;a++)
        {
            cout << PrecenciaDeArista[b][a]<<"  ";    
        }
        cout << endl;
    }
   return 0;

  

}