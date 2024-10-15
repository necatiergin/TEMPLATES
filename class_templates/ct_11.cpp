template <typename T>
class Base {
public:
	void foo();
};

template <typename T>
class Der : public Base<T> {
public:
	void bar()
	{
		//foo();	// error
		//Base::foo();	// error
		this->foo();	// valid
		Base<T>::foo();	// valid
	}
};

int main()
{
	Der<int> myder;

	myder.bar();
}
