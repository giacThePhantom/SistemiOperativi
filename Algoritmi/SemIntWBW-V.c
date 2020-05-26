V(int &s){
	P(mutex);
	s = s + 1;
	if(s <= 0){
		V(delay);
	}
	V(mutex);
}
