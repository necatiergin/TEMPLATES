template <typename T>
struct Nec
{
	void foo() {}
	void bar() {}
};

int main()
{
	Nec<char>* pcnec; // no instantiati0n
	Nec<int> nec;  // Nec<int> is instantiated
	Nec<float>* pfnec; // no instantiation
	//...
	nec.foo(); //Nec<int>::foo instantiated
	pfnec->bar(); //Nec<float> and Nec<float>::bar instantiated
}
