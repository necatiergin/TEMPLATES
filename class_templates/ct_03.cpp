template <typename T>
class Myclass {
public:
	Myclass(T x);
	//...
};

template <typename T>
//Myclass<T>::Myclass<T>(T x)	//invalid
Myclass<T>::Myclass(T x)		//valid
{
  
}
