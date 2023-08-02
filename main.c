#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <assert.h>
#include <stdbool.h>

int main(){
assert(Sum_of_Digits(1234)==10);
assert(occurence(12131410,1)==4);

prime(4);
prime(12);

assert(sum_of_series(4)==1234);
assert(sum_of_series(7)==1234567);

assert(armstrong(153)=='Y');
assert(armstrong(176)=='N');

assert(amicable(220,284)=='y');
assert(amicable(29,84)=='n');
}
