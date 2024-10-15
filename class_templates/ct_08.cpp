template <typename T>
class Nec {
public:
	static int ms;
	//...
};

template <typename T>
int Nec<T>::ms{ 0 };
