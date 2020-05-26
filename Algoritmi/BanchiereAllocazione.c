void request(int req_vec[]){ //richieste del processo Pi
	if(req_vec[] > need[i][])
		error(); //superato il massimo preventivato
	if(req_vec[] > available[])
		wait(); //attendo che si liberino risorse
	//simulo l'assegnazione
	available[] = available[] - req_vec[];
	alloc[i][] = alloc[i][] + req_vec[];
	need[i][] = need[i][] - req_vec[];
	if(!state_safe()){ //se non e` safe ripristino il vecchio stato
		//rollback
		available[] = available[] + req_vec[];
		alloc[i][] = alloc[i][] - req_vec[];
		need[i][] = need[i][] + req_vec[];
		wait();
	}
}
