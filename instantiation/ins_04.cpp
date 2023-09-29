template<typename T> class C; // #1 declaration only

C<int>* p = 0; // #2 fine: definition of C<int> not needed

template<typename T>
class C {
public:
	void f(); // #3 member declaration
}; 

// #4 class template definition completed

void g(C<int>& c) // #5 use class template declaration only
{
	c.f(); // #6 use class template definition; 
		   // will need definition of C::f()
		   // in this translation unit
	//C<void>* p = new C<void>;
} 


template<typename T>
void C<T>::f() //required definition due to #6
{}
