public synchronized deposit(Object x){
	while(count == size) wait();
	buffer[nextin] = x;
	nextin = (nextin + 1) % N;
	count = count + 1;
	notifyAll();
}
