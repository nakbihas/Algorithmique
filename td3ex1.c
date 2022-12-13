#include <stdio.h>
#define   N   11
short   T[N];

short  premier(short v){
short j,d=0;
for(j=2;j<=v/2;j++)
if (v%j == 0)  d++;
return d;  }
void remplirpremier(short A[ ],short k){
short i,d=0;
for(i=0;i<k;i++)
do{ printf("A[%hi] = ",i);
scanf("%hi",&A[i]);
} while(premier(A[i]) != 0); }

void affichage(short A[ ],short k){
short i;
for(i=0;i<k;i++)
printf("%3hi",A[i]);
printf("\n");
}

float moyenne(short A[ ], short k){
short s = A[0], j;
for(j=1;j<k;j++)
s = s + A[j];
return  (float)(s / k);}


short min(short A[ ], short k){
short min = A[0], j;
for(j=1;j<k;j++)
if (A[j] < min)  min = A[j];
return  min;}

short max(short A[ ], short k){
short max = A[0], j;
for(j=1;j<k;j++)
if (A[j] > max)  max = A[j];
return  max;}

int main( ) {

remplirpremier(T,N);
affichage(T,N);
printf("Moyenne =%f \n",moyenne(T,N)) ;
printf("Min =%hi \n",min(T,N)) ;
printf("Max =%hi \n",max(T,N)) ;

return  0;
}
