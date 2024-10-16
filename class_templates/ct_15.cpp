template <typename T>
class Nec {
public:
	class Nested;  //declaration only
};

template <typename T>   //definition
class Nec<T>::Nested {
	//...
};
