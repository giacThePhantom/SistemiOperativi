bool state_safe(){
	int work[m] = available[];
	bool finish[n] = {FALSE};
	int i;
	while(finish != {TRUE}){
		/* cerca Pi che non abbia terminato e 
		 * possa completare con le risorse 
		 * disponibili in work */
		for(i = 0; (i < n) && (finish[i] || (need[i][] > work[])); i++);
		if(i == n)
			return FALSE; //non esiste e` unsafe
		else{
			work[] = word[] + alloc[i][];
			finish[i] = TRUE;
		}
	}
	return TRUE;
}
