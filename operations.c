#include<stdio.h>

//Enter a 5 digit number and find sum of its digits:
int Sum_of_Digits(int N){
int sum=0,rem=0;
while(N>0){
rem=N%10;
sum=sum+rem;
N=N/10;
}
return sum;
}

//write a program to find the occurence of a digit in a number:
int occurence(int N, int D){
int rem=0,count=0;
while(N>0){
rem=N%10;
if(rem==D)
count++;
N=N/10;
}
return count;
}

//Generate first N prime numbers:
int is_prime(int num){
if(num<=1)
return 0;
for(int i=2;i*i<=num;i++){
if(num%i==0)
return 0;
}
return 1;
}

void prime(int N){
int count=0, num=2;
while(count<N){
if(is_prime(num)){
printf("%d ",num);
count++;
}
num++;
}
}

//Display and find sum of the series:
int sum_of_series(int N){
int sum=0,term=1;
for(int i=1;i<=N;i++){
printf("%d",term);
sum+=term;
term=term*10+1;
if(i!=N)
printf("+");
}
return sum;
}

//Armstrong number:
char armstrong(int X){
int sum=0,rem=0,Y=X;
while(X>0){
rem=X%10;
sum=sum+(rem*rem*rem);
X=X/10;
}
if(sum==Y)
return 'Y';
else
return 'N';
}

//Amicable numbers:
char amicable(int P, int Q){
int P_sum=0,Q_sum=0;
for(int i=1;i<=P/2;i++){
if(P%i==0)
P_sum+=i;
}
for(int j=1;j<=Q/2;j++){
if(Q%j==0)
Q_sum+=j;
}
if(P_sum==Q && Q_sum==P)
return 'y';
else
return 'n';
}



