template <typename T>
T func(T*);

int main()
{
	void* vptr{};

	func(vptr); // T is void call param is void *
	func(&vptr); //T is void * call param is void **
}
