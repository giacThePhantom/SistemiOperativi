void take_fork(int i){
	P(mutex);
	stato[i] = HUNGRY;
	test(i);
	V(mutex);
	P(f[i]);
}
