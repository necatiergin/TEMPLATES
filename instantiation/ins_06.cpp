template<typename T> 
T f(T x) 
{ 
	return x * x; 
}

int main()
{
	decltype(f(5)) x = 7;
	//partial instantiation
	//compiler only needs the declaration of the function
}
