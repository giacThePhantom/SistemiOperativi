void Swap(boolean &a, boolean &b){
	boolean temp;	//Queste operazioni sono
	temp = a;	//svolte atomicamente
	a = b;
	b = temp;
}
