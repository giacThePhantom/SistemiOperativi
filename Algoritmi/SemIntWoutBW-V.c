V(Sem &s){
	P(mutex);
	s.value = s.value + 1;
	if(s.value <= 0){
		V(mutex);
		PCB *p = remove(s.List);
		wakeup(p);
	}
	else{
		V(mutex);
	}
}
