template<typename... Types>
class Tuple {
public:
	constexpr Tuple(const Types&...); // take arguments by-reference
	template<typename... UTypes> constexpr Tuple(UTypes&&...);
	//...
};
	
template<typename... Types>
Tuple(Types...)->Tuple<Types...>; // deduce argument types by-value

int main()
{
	Tuple tx{ 42, "hello", nullptr }; 
}
