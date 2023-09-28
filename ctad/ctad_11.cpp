template<typename T, int SIZE>
class MyClass {
public:
	MyClass(T(&)[SIZE]) {
		...
	}
};

int main()
{
	MyClass mc("necati"); // T => const char SIZE ==> 7
}
