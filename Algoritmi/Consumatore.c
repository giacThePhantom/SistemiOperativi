while(1){
	P(full);
	P(mutex);
	remove item
	V(mutex);
	V(empty);
	consume item
}
