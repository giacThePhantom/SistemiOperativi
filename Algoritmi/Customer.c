P(mutex);
if(waiting < N){
	waiting++;
	//sveglia il barbiere
	V(customers);
	V(mutex);
	//pronto per il taglio
	P(barbers);
	get haircut
}
else{
	V(mutex);
}
