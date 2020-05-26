void test(int i){
	if(stato[i] == HUNGRY && 
	   stato[i - 1] != EATING &&
	   stato[i + 1] != EATING){
		stato[i] = EATING;
		V(f[i]);
	}
}
