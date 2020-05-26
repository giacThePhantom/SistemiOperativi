boolean choosing[N]; /*il processo sceglie un numero*/
int number[N]; /*ultimo numero scelto*/
while(1){
	choosing[i] = TRUE; 
	number[i] = Max(number[0], ..., number[N - 1]) + 1;
	choosing[i] = FALSE;
	for(j = 0; j < N; j++){
		while(choosing[j] == TRUE);
		while(number[j] != 0 && (number[j] < number[i] || (number[j] == number[i]) && (j < i)));
	}
	sezione critica
	number[i] = 0;
	sezione non critica
}
