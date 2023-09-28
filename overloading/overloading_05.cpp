//C++ templates J-V

#include <cstddef>

template<typename T>
class Array {
private:
	T* data;
	//...
public:
	Array(Array<T> const&);
	Array<T>& operator= (Array<T> const&);
	void exchange_with(Array<T>* b)
	{
		T* tmp = data;
		data = b->data;
		b->data = tmp;
	}
	T& operator[] (std::size_t k) {
		return data[k];
	}
	//...
};

template<typename T> inline
void exchange(T* a, T* b)
{
	T tmp(*a);
	*a = *b;
	*b = tmp;
}

template<typename T>
void generic_algorithm(T* x, T* y)
{
	//...
	exchange(x, y); // How do we select the right algorithm?
	//...
}
