template <int N>
class Nec {

};

int main()
{
	Nec<15> nec_15;
	Nec<10> nec_14;

	nec_15 = nec_14; //error - different types
}
