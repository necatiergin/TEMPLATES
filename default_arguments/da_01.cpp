template <typename T, typename U = int>
class A {};

template <typename T, typename U = T>
class B {};


int main()
{
	A<double> x; //A<double, int>
	A<double, double> y;
	B<int> z; //B<int, int> z;
}
