//a non-template class grands a 

template <typename>
class A;

class Myclass {
public:
	template <typename>	
	friend class A;
private:
	int foo(int);
};


template <typename>
class A {
public:
	void bar()
	{
		Myclass x;
		x.foo(10);
	}
};


int main()
{
	A<int> a1;
	a1.bar();
	A<double> a2;
	a2.bar();
}
