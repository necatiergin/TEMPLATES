struct Nec {
	int foo(int);
	int mx;
};

template <int Nec::*ip, int (Nec::*fp)(int)>
class C {

};

int main()
{
	C<&Nec::mx, &Nec::foo> cx;
	//...
}
