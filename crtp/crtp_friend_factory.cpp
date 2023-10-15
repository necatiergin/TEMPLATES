template <typename D> class B {
public:
	friend bool operator!=(const D& lhs, const D& rhs) 
	{
		return !(lhs == rhs);
	}
};

template <typename T> 
class C : public B<C<T>> 
{
	T x_;
public:
	C(T x) : x_(x) {}
	friend bool operator==(const C& lhs, const C& rhs) {
		return lhs.x_ == rhs.x_;
	}
};
