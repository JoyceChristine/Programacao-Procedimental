#include <stdio.h>
#include <stdlib.h>

//exerc1
/*int main(){
int n;

printf("Digite o numero:");
scanf("%d", &n);
printf("Numero: %d", n);

return 0;
}
*/

//exerc2
/*int main(){
float n;

printf("Digite o numero:");
scanf("%f", &n);
printf("Numero: %f", n);

return 0;
}

//exerc3
int main()
{
int N1, N2, N3, R;

printf("N1: ");
scanf("%d", &N1);
printf("N2: ");
scanf("%d", &N2);
printf("N3: ");
scanf("%d", &N3);
R = N1 + N2 + N3;
printf("Resultado: %d", R);
return 0;
}
*/

//exerc4
/*int main(){
float numero, r;

printf("numero: ");
scanf("%f", &numero);
r = numero * numero;
printf("Quadrado: %f", r);

return 0;
}
*/

//exerc5

/*int main(){

float numero, r;

printf("numero: ");
scanf("%f", &numero);

r = numero / 5;
printf("Resultado: %f", r);

return 0;
}*/

//exerc6
/*int main ()
{
float F, C;

printf("Temperatura: ");
scanf("%f", &C);

F = C*(9.0/5.0)+32.0;
printf("Resultado em Fahrenheit: %f", F);

return 0;
}*/

//exerc7
/*int main ()
{
float F, C;

printf("Temperatura: ");
scanf("%f", &F);

C = 5.0*(F-32.0)/9.0;
printf("Resultado em Celsius: %f", C);

return 0;
}*/

//Exerc8
/*int main ()
{
float K, C;

printf("Temperatura: ");
scanf("%f", &K);

C = K-273.15;
printf("Resultado em Kelvin: %f", C);

return 0;
}*/

//Exerc9
/*int main ()
{
float K, C;

printf("Temperatura: ");
scanf("%f", &C);

K = C+273.15;
printf("Resultado em Celsius: %f", K);

return 0;
}*/

//Exer10
/*int main ()
{
float K, M;

printf("Km/h: ");
scanf("%f", &K);

M = K/3.6;
printf("Resultado em m/s: %f", M);

return 0;
}*/

//Exerc11
/*int main ()
{
float K, M;

printf("m/s: ");
scanf("%f", &M);

K = M*3.6;
printf("Resultado em km: %f", K);

return 0;
}*/

//Exerc12
/*int main ()
{
float K, M;

printf("Milhas: ");
scanf("%f", &M);

K = 1.61*M;
printf("Resultado em quilometros: %f", K);

return 0;
}*/

//Exerc13
/*int main ()
{
float K, M;

printf("Quilometros: ");
scanf("%f", &K);

M = K/1.61;
printf("Resultado em Milhas: %f", M);

return 0;
}*/

//Exerc14
/*int main ()
{
float G, R, P=3.141592;

printf("Angulo em graus: ");
scanf("%f", &G);

R = G*P/180;

printf("Resultado em radianos: %f", R);

return 0;
}*/

//Exerc15
/*int main ()
{
float G, R, P=3.141592;

printf("Angulo em radianos: ");
scanf("%f", &R);

G = R*180/P;

printf("Resultado em graus: %f", G);

return 0;
}*/

//Exerc16
/*int main ()
{
float C, P;

printf("Comprimento em polegadas: ");
scanf("%f", &P);

C = P*2.54;

printf("Resultado em centimetros: %f", C);

return 0;
}*/

//Exerc17
/*int main ()
{
float C, P;

printf("Comprimento em cm: ");
scanf("%f", &C);

P = C/2.54;

printf("Resultado em polegadas: %f", P);

return 0;
}*/

//Exerc18
/*int main ()
{
float L, M;

printf("Volume em m3: ");
scanf("%f", &M);

L = 1000*M;

printf("Resultado em litros: %f", L);

return 0;
}*/


//Exerc19
/*int main ()
{
float L, M;

printf("Volume em litros: ");
scanf("%f", &L);

M = L/1000;

printf("Resultado em m3: %f", M);

return 0;
}*/

//Exerc20
/*int main ()
{
float K, L;

printf("Massa em quilogramas: ");
scanf("%f", &K);

L = K/0.45;

printf("Resultado em libras: %f", L);

return 0;
}*/

//Exerc21
/*int main ()
{
float K, L;

printf("Massa em libras: ");
scanf("%f", &L);

K = L*0.45;

printf("Resultado em quilogramas: %f", K);

return 0;
}*/


//Exerc22
//J = comprimento em jardas
//M = comprimento em metro
/*int main ()
{
float J, M;

printf("Comprimento em jardas: ");
scanf("%f", &J);

M = 0.91*J;

printf("Resultado em metros: %f", M);

return 0;
}*/

//Exerc23
/*int main ()
{
float J, M;

printf("Comprimento em metros: ");
scanf("%f", &M);

J = M/0.91;

printf("Resultado em jardas: %f", J);

return 0;
}*/

//Exerc24
//M = área em metros quadrados
//A = área em acres
/*int main ()
{
float A, M;

printf("Area em m2: ");
scanf("%f", &M);

A = M*0.000247;

printf("Resultado em acres: %f", A);

return 0;
}*/

//Exerc25
/* main ()
{
float A, M;

printf("Area em acres: ");
scanf("%f", &A);

M = A*4048.58;

printf("Resultado em m2: %f", M);

return 0;
}*/

//Exerc26
//M = área em metros quadrados
//H  = área em hectares
/*int main ()
{
float M, H;

printf("Area em m2: ");
scanf("%f", &M);

H = M*0.0001;

printf("Resultado em hectares: %f", H);

return 0;
}*/

//Exerc27
/*int main ()
{
float M, H;

printf("Area em hectares: ");
scanf("%f", &H);

M = H*10000;

printf("Resultado em m2: %f", M);

return 0;
}*/

//Exerc28
//Soma dos quadrados
/*int main ()
{
float n1, n2, n3, r;

printf("Digite um valor: ");
scanf("%f", &n1);

printf("Digite outro valor: ");
scanf("%f", &n2);

printf("Digite outro valor: ");
scanf("%f", &n3);

r = (n1*n1)+(n2*n2)+(n3*n3);

printf("Resultado: %f", r);

return 0;
}*/

//Exerc29
//Media aritmética de 4 notas
/*int main ()
{
float n1, n2, n3, n4, media;

printf("Nota 1: ");
scanf("%f", &n1);

printf("Nota 2: ");
scanf("%f", &n2);

printf("Nota 3: ");
scanf("%f", &n3);

printf("Nota 4: ");
scanf("%f", &n4);

media = (n1+n2+n3+n4)/4;

printf("Resultado: %f", media);

return 0;
}*/

//Exerc30
//Cotação dolar
/*
int main(){

float real, r, c;

printf("Valor em real: ");
scanf("%f", &real);
printf("1 Real brasileiro e igual a 0,20 dolar americano\n", c);

r = real/5.06;

printf("Resultado em dolar %f",r);

return 0;
}*/
