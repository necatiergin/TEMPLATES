template <typename T>
void foo(T = 1);

template <typename T = int>
void bar(T = {});

int main()
{
	//foo();	 //error
	foo<int>();  //valid
	bar();  //valid
}
