template <const char* p>
class Nec {};

char gs[] = "necati";
const char gcs[] = "ergin";

int main()
{
	char s1[] = "mustafa";
	static char s2[] = "mustafa";

	//Nec<"alican"> n1; //invalid
	//Nec<s1> n2; //invalid
	[[maybe_unused]] Nec<gs> n3;
	[[maybe_unused]] Nec<gcs> n4;
	[[maybe_unused]] Nec<s2> n5;
}
