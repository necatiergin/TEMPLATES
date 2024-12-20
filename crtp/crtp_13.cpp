#include <iostream>

template<typename T>
class Animal {
public:
	void cry()
	{
		static_cast<T*>(this)->make_sound();
	}
};

class Dog : public Animal<Dog> {
public:
	void make_sound()
	{
		std::cout << "hav hav hav!!!\n";
	}
};

class Cat : public Animal<Cat> {
public:
	void make_sound()
	{
		std::cout << "miyav miyav miyav!!!\n";
	}
};

class Lamb : public Animal<Lamb> {
public:
	void make_sound()
	{
		std::cout << "meeeeeeeeeee!!!\n";
	}
};

template<typename T>
void game(Animal<T>& x)
{
	x.cry();
}

int main()
{
	Dog karabas;
	Cat minnos;
	Lamb kuzucuk;

	/*karabas.cry();
	minnos.cry();
	kuzucuk.cry();*/

	game(karabas);
	game(minnos);
	game(kuzucuk);
}
