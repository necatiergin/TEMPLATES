template <typename T>
class HasToString
{
private:
	typedef char YesType[1];
	typedef char NoType[2];

	template <typename C> 
	static YesType& test(decltype(&C::ToString));
	
	template <typename C> 
	static NoType& test(...);


public:
	enum { value = sizeof(test<T>(0)) == sizeof(YesType) };
};
