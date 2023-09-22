template <typename T>
struct DefaultDelete {

	void operator()(T* p)
	{
		delete p;
	}
};

template <typename T, typename D = DefaultDelete<T>>
class UniquePtr {
public:
	//...
	~UniquePtr()
	{
		//...
		D{}(mp);
	}
private:
	T* mp;
};
