template <typename T>
class Myint {
public:
	Myint(T x) : mx{x} {}
	Myint& set(T x) 
	{
		mx = x;
		return *this;
	}
	
	T get()const
	{
		return mx;
	}
private:
	T mx;
};
