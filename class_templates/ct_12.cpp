template <typename T>
class Nec {

};

int main()
{
	Nec<double> d;
	Nec<int> i;

	d = i; //error - different class types
}
