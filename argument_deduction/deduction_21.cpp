template <typename T, typename U>
T foo(U ux);

int main()
{
	int (*fp1)(double) = foo;	// int foo<int, double>(double)
	float (*fp2)(float) = foo;	// float foo<float, float>(float)
}
