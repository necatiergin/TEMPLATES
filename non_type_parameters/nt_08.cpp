template <int ...Values>
class Nec {
	//...
};

enum class Color {
	White, Yellow, Brown, Blue, Black
};


template <Color ...C>
class Erg {
	//...
};

int main()
{
	Nec <1, 4, 5, 7> x;
	Erg <Color::White, Color::Brown, Color::Black> y;
	//...
}
