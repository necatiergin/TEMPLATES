template <typename T>
class A
{
    friend class Myclass;              
public:
    A(const T& t) : mdata(t) {}
    T get()const { return mdata; }
private:
    T mdata;
};

class Myclass
{
public:
    Myclass(int val) : mval(val) {}
    template <typename T>
    T sum(const A<T>& a) const
    { 
        return mval + a.mdata; 
    }  
private:
    int mval;
};

int main()
{
    Myclass m{ 13 };
    A<int> ax{ 30 };

    auto x = m.sum(ax);
}
