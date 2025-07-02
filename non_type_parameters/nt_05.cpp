template<typename T, int N, int M>
constexpr bool less(const T(&a)[N], const T(&b)[M])
{
	for (int i = 0; i < N && i < M; ++i)
	{
		if (a[i] < b[i])
			return true;

		if (b[i] < a[i])
			return false;
	}

	return N < M;
}

int main()
{
	constexpr int a[] = { 3, 7, 9 };
	constexpr int b[] = { 3, 7, 9, 2, 6 };
	constexpr int c[] = { 3, 7, 9, 3, 6 };

	constexpr auto result1 = less(b, c);
	constexpr auto result2 = less(a, c);
}
