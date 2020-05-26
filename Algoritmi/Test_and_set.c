bool TestAndSet(boolean &var){ //il valore di var viene modificato
	boolean temp;	//Tutte le operazioni della funzione 
	temp = var;	//sono atomiche.
	var = true;
	return temp;
}
