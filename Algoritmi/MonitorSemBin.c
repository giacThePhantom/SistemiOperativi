monitor BinSem{
	boolean busy; //inizializzato a FALSE
	condition idle;
	entry void P(){
		if(busy)
			idle.wait();
		busy = TRUE;
	}
	entry void V(){
		busy = FALSE;
		idle.signal();
	}
	busy = FALSE //inizializzazione
}
