template<typename T> 
class Nec; // forward declaration of class template

Nec<int>* p{}; // Valid. definition of C<int> not needed


//class template definition
template<typename T>
class Nec {
public:
	void foo(); // member function declaration
}; 
// class template definition completed


void gf(Nec<int>& n) // uses class template declaration only (not definition)
{
	n.foo(); // uses class template definition;
	//will need definition of Nec::foo() in this translation unit
} 

template<typename T>
void Nec<T>::foo() //required definition due to function call in gf
{

}
