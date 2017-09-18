#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void){
int i;
for(i = 0; i <= 10; i++){
	cout << "=";
}

cout << "\n";
cout << "\n";
cout << " Hello ladies and gentlemen \n";
cout << " This is C++ program in Linux";
cout << " Here we show you a star \n";

for(i = 1; i < 8; i++){
int j, k, J, K;
J = abs(i - 4); //J個空白
K = 7 - 2*abs(i-4); //K個星星
for( j = 1; j <= J; j++) cout << " ";
for( k = 1; k <= K; k++) cout << "*"; 
cout << "\n";
}
return 0;
}
