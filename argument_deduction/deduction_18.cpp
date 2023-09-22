template <typename T>
T func(T*);

int main()
{
	void* vptr{};

	func(vptr);
	func(&vptr);
}
