template <int x, bool b>
class Nec {};

int main()
{
	Nec<10, true> n1;
	Nec<sizeof(int), sizeof(int) == 4> n2;
	//Nec<5, sizeof(int) > 2> n3; //invalid
	Nec<5, (sizeof(int) > 2)> n4; //valid
}
