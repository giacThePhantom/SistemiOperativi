public class BoundedBuffer{
	Object[] buffer;
	int nexin;
	int nextout;
	int size;
	int count;
	//costrutture
	public BoundedBuffer(int n){
		size = n;
		buffer = new Object[size];
		nextin = 0;
		nextout = 0;
		count = 0;
	}
}
