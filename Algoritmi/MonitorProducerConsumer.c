monitor ProducerConsumer{
	condition full, empty;
	int count;
	entry enter(){
		if(count == N){
			//se il buffer e` pieno blocca
			full.wait();
		}
		//mette l'item nel buffer
		put_item();
		//incrementa count
		count = count + 1;
		if(count == 1){
			//se il buffer era vuoto
			//sveglia il consumatore
			empty.signal();
		}
	}
	entry remove(){
		if(count == 0){
			//se il buffer e` vuoto blocca
			empty.wait();
		}
		//rimuove item dal buffer
		remove_item();
		//decrementa count
		count = count - 1;
		if(count == N - 1){
			//se il buffer era pieno
			//sveglia il produttore
			full.signal();
		}
	}
	//inizializzazione di count
	count = 0;
	end monitor;
}

