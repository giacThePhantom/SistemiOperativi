P(int &s){
	P(mutex);
	s = s - 1;
	if(s < 0){
		V(mutex);
		P(delay);
	}
	else
		V(mutex);
}
