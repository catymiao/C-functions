#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int countPrimes(int a[], int size) {
	int numPrimes = 0; 
	int count = 0; 
	for (int i=0; i<size; i++){
		for (int j=2; j<a[i] ; j++){
			if (a[i]%j == 0){
				count++; 
			}
		}
	if (count == 0){
		numPrimes++; 
	}
	}
  return numPrimes; // STUB!  Replace with correct code.
}
