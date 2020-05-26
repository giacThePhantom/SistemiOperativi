void philosopher(int i){
	while(1){
		think();
		take_fork(i);
		eat();
		dropfork(i);
	}
}
