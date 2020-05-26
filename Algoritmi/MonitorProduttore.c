Producer(){
	while(TRUE){
		//crea nuovo item
		make_item();
		//chiamata alla funzione enter
		ProducerConsumer.enter();
	}
}
