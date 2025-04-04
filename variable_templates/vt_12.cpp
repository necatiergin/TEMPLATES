template<int... Ns>
constexpr int sum = (0 + ... + Ns);	//binary left fold

int main() 
{
	static_assert(sum<10, 20, 30> == 60);
	static_assert(sum<> == 0); 
}
