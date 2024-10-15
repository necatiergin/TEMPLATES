template <class T, class U>
void foo(T, U);

template <typename T, typename U>
void foo(T, U);

template <typename T, class U>
void foo(T, U);

template <class T, typename U>
void foo(T, U);

int main()
{
	foo(1, 5L);
}
