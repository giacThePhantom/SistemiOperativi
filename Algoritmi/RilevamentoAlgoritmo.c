int work[m] = available[m];
bool finish[] = {FALSE}, found - TRUE;
while(found){
	found = FALSE;
	for(int i = 0; i < n && !found; i++){
		//cerca un Pi con richiesta soddisfacibile
		if(!finish[i] && req_vec[i][] <= work[]){
			//assume ottimisticamente che Pi esegua
			//fino al termine e che quindi restituisca
			//le risorse (catturato alla prossima 
			//esecuzione)
			work[] = work[] + alloc[i][];
			finish[i] = TRUE;
			found = TRUE;
		}
	}
}//se finish[i] = FALSE per un qualsiasi i, Pi e` in deadlock
