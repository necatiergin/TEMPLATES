
template <typename T>
void foo(T x)
{
	bar(x); 
}

void bar(int)
{
	
}

int main()
{
	foo(7); //invalid
}
