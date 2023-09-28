int max(int a, int b)
{
	return b < a ? a : b;
}

template<typename T>
T max(T a, T b)
{
	return b < a ? a : b;
}

int main()
{
	::max(7, 42); // max(int, int)
	::max(7.0, 42.0); // max<double> 
	::max('a', 'b'); // max<char> 
	::max<>(7, 42); // max<int> 
	//::max<>(7, 4.2); // max<int> //error
	::max<double>(7, 42); // max<double> 
	::max('a', 42.7); //max(int, int)
}
