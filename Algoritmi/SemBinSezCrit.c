/* valore iniziale di s = 1 (mutex) */
while(1){
	P(s);
	sezione critica
	V(s);
	sezione non critica
}
