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
	[[maybe_unused]] Nec <1, 4, 5, 7> x;
	[[maybe_unused]] Erg <Color::White, Color::Brown, Color::Black> y;
	//...
}
