//function return type may be int or double

constexpr auto func()
{
	if constexpr (sizeof(int) > 4u) {
		return 1;
	}
	else {
		return 0.5;
	}
}


//function return type may be int or void

auto foo()
{
	if constexpr (sizeof(int) > 4) {
		return 1;
	}
}

int main()
{
	constexpr auto val = func();
}
