template <decltype(auto) x>
class Myclass {

};

int g{ 54 };

int main()
{
	Myclass<(g)> m1;
	Myclass<&g> m2;

	//...
}
