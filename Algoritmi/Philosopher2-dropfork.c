void drop_fork(int i){
	P(mutex);
	stato[i] = THINKING;
	//I vicini possono mangiare
	test((i - 1) % N);
	test((i + 1) % N);
	V(mutex);
}
