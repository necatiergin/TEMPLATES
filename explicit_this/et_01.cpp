#include <iostream>


class Nec {
public:
	//...
	void set(this Nec & self, int val)
	{
		self.mx = val;
	}

	void print(const Nec this& self)
	{
		//mx = 23; //error
		//self.mx = 23;  //error

		std::cout << self.mx << '\n';
	}
private:
	int mx{};
};

int main()
{
	Nec mynec;

	mynec.print();
	mynec.set(99);
	mynec.print();
}
