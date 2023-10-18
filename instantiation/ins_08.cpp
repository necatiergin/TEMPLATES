template<typename T> 
class Nec; // forward declaration of class template


int main()
{
	Nec<void>* p = new Nec<void>;
	//error - complete type required
}
