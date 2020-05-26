/* s inizializzato a TRUE */
P(bool &s){
	key = FALSE;
	do{
		Swap(s, key);
	}while(key == FALSE);
}

