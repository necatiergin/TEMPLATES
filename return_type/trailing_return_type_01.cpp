template <typename T, typename U>
decltype(x + y) foo(T x, U y)  //invalis
{ 
	//...
}

template <typename T, typename U>
auto bar(T x, U y)-> decltype(x + y) // valid
{
	//...
}