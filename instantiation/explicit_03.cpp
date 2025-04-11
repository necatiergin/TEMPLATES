// nec.h
template<typename T>
class Nec {
public:
	void foo() 
	{
		//...
	}
};

// client.cpp
template void Nec<int>::foo();
template class Nec<void>;
