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

template<typename T>
void quick_exchange(T* a, T* b) // #1
{
	T tmp(*a);
	*a = *b;
	*b = tmp;
}

template<typename T>
void quick_exchange(Array<T>* a, Array<T>* b) // #2
{
	a->exchange_with(b);
}

void func(Array<int>* p1, Array<int>* p2)
{
	int x = 42, y = -7;
	quick_exchange(&x, &y); // uses #1
	quick_exchange(p1, p2); // uses #2
}
