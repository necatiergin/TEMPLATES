template<typename T1, typename T2>
struct pair {
	constexpr pair(const T1& x, const T2& y); 
};

template<typename T1, typename T2>
pair(T1, T2)->pair<T1, T2>;			// deduce argument types by-value

pair px{ "necati", "ergin" }; // const char[7] and const char[6]
pair<const char*, const char*> py{ "necati", "ergin" };
