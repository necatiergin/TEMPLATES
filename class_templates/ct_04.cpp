template <typename T>
class Myclass {
public:
	//Myclass<T> foo(Myclass<T>);
	Myclass foo(Myclass); //same as above
	//...
};

template <typename T>
//Myclass Myclass<T>::foo(Myclass x) //error
Myclass<T> Myclass<T>::foo(Myclass x) //valid
{
	//Myclass<T> y = x;
	Myclass y = x; //same as above
	//...

	return {};
}

