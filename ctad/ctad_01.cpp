template<typename T>
class Myclass {
public:
	Myclass(T);
};

int main()
{
	Myclass m{ 10 };  //m's type is Myclass<int>
}
