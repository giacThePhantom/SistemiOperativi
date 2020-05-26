/*Variabili globali*/
boolean waiting[N];
boolean lock;
/*Programma locale*/
while(1){
	waiting[i] = true;
	key = true;
	while(waiting[i] && key){
		key = TestAndSet(lock);
	}
	wating[i] = false;
	sezione critica
	j = (i + 1) % N;
	while(j != i && !waiting[j]) //primo processo in attesa
		j = (j + 1) % N;
	if (j == i)
		lock = false;	//abilita se` stesso
	else
		waiting[j] = false; //abilita il processo j in attesa
	sezione non critica

}
