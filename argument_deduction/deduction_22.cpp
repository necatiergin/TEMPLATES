template <typename T>
void foo(T* p)
{
	T x; //error - must be initialized
}

int main()
{
	const int i{ 46 };

	foo(&i);   //T is const int param p is const int*
}
