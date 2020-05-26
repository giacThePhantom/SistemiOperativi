while(1){
	produce item
	P(empty);
	P(mutex);
	deposit item
	V(mutex);
	V(full);
}
