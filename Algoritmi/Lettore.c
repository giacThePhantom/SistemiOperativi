int num_lettori = 0;
semaphore mutex = 1;

Lettore{
	while(1){
		...
		P(mutex); //protegge num_lettori e li accoda
		num_lettori++;
		if(num_lettori == 1) //primo lettore
			P(scrittura); //acquisisce la mutua esclusione in scrittura
		V(mutex);
		< legge i  dati >
		P(mutex); //protegge num_lettori
		num_lettori--;
		if(num_lettori == 0) //ultimo lettore
			V(scrittura); //rilascia la mutua esclusione in scrittura
		V(mutex);
		...
	}
}
