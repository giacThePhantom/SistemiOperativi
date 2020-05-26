while(1){
	P(customers);
	P(mutex);
	waiting--;
	V(barbers);
	V(mutex);
	cut hair
}
