template<typename T>
class Nec {
public:
	void foo() 
	{
		//...
	}
};

template void Nec<int>::foo();
template class Nec<void>;
