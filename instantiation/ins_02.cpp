template <typename T>
class Widget{
};

template <typename T>
class Slider : public Widget<T> {
};

void display(Slider<int>* ptr)
{
	Widget<int>* c = ptr; //Slider<int> is instantiated is not yet
}
