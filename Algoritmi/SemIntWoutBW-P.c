P(Sem &s){
	P(mutex);
	s.value = s.value - 1;
	if(s.value < 0){
		V(mutex);
		append(processs i, s.List);
		sleep();
	}
	else{
		V(mutex);
	}
}
