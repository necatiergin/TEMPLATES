template <typename T>
struct Nec {
	using type = T::value_type;
};

int main()
{
	Nec<int>* p{}; //valid
}
