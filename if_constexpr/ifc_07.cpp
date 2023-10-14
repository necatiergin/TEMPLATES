//usage in non template function

struct Nec {

};

int main()
{
	Nec nec;

	if constexpr (sizeof(int) > 4) {
		++nec;  //syntax error
	}
	else {
		--nec;   //syntax error
	}
}
