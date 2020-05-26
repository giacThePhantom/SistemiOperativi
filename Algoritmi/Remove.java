public synchronized Object remove(){
	Object x;
	while(count == 0) wait;
	x = buffer[nexout];
	nextout = (nextout + 1) % N;
	count = count - 1;
	notifyAll();
	return x;
}
