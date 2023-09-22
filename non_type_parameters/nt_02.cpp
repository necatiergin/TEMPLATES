template <const char* p>
class Nec {};

char gs[] = "necati";
const char gcs[] = "ergin";

int main()
{
	char s1[] = "mustafa";
	static char s2[] = "mustafa";

	//Nec<"alican"> n1; //invalid
	//Nec<str> n2; //invalid
	Nec<gs> n3;
	Nec<gcs> n4;
	Nec<s2> n5;
}
