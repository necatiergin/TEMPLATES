
template<typename T>
void f1(T*);

template<typename E, int N>
void f2(E(&)[N]);

template<typename T1, typename T2, typename T3>
void f3(T1(T2::*)(T3*));

class S {
public:
	void f(double*);
};

void g(int*** ppp)
{
	bool b[42];
	f1(ppp); // deduces T to be int**
	f2(b); // deduces E to be bool and N to be 42
	f3(&S::f); // deduces T1 = void, T2 = S, and T3 = double
}
