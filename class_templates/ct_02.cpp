template <typename T>
class Myint {
public:
	Myint(T x);
	Myint& set(T x);
	T get()const;
	//...
private:
	T mx;
};

template <typename T>
Myint<T>::Myint(T x) : mx{x}
{

}

template <typename T>
Myint<T> & Myint<T>::set(T x)
{
	mx = x;
	return *this;
}

template <typename T>
T Myint<T>::get()const
{
	return mx;
}
