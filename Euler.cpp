#include <iostream>

#include <stdlib.h>

#include <cmath>

using namespace std;
float explicita(float ini, float w, double, int);
//Ejecuta el programa
int main(void){

  int t;

  float omega = 0.1;

  float deltaT = 0.1/omega;
    
  double K = 100.0;
    
  double M = 2.0;
   
  float integral;
   
  float inicial = 1;
   
  float integral_implicita;
    
  float distancia = 1;
    
  float velocidad = 0;
    
  float distancia_actual = distancia;
    
  float velocidad_actual = velocidad;
   
 for (int t =0; t< 4/omega; t+=deltaT){
        velocidad_actual = velocidad + deltaT * explicita(distancia, M, K, inicial);
        distancia_actual = distancia + deltaT * velocidad;
     
        velocidad = velocidad_actual;
        distancia = distancia_actual;
     
        cout<< t << "\t" << velocidad_actual <<"\t"<< distancia_actual <<endl;
    }
   cout << endl;
return 0;
}


//metodo que retorna la integral explicita
float explicita(float ini, float M, double K,  int lambda){
    return  (-K/M) *pow(ini, lambda);
}