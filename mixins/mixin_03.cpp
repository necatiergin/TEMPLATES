#include <iostream>

struct Number
{
	typedef int value_type;
	int n;
	void set(int v)
	{
		n = v;
	}
	int get() const 
	{
		return n;
	}
};

template <typename Base, typename T = typename Base::value_type>
struct Undoable : public Base
{
	typedef T value_type;
	T before;
	void set(T v)
	{
		before = Base::get();
		Base::set(v);
	}
	
	void undo()
	{
		Base::set(before);
	}
};

template <typename Base, typename T = typename Base::value_type>
struct Redoable : public Base
{
	typedef T value_type;
	T after;

	void set(T v)
	{
		after = v; Base::set(v);
	}

	void redo() { Base::set(after); }
};

typedef Redoable< Undoable<Number> > ReUndoableNumber;

int main()
{
	ReUndoableNumber mynum;
	mynum.set(42);
	mynum.set(84);
	std::cout << mynum.get() << '\n';  // 84
	mynum.undo();
	std::cout << mynum.get() << '\n';  // 42
	mynum.redo();
	std::cout << mynum.get() << '\n';  // back to 84
}
