//from cppreference.com

template<typename T>
struct X : B<T> // "B<T>" is dependent on T
{
    typename T::A* pa; // "T::A" is dependent on T
    void f(B<T>* pb) 
    {
        static int i = B<T>::i; // "B<T>::i" is dependent on T
        pb->j++; // "pb->j" is dependent on T
    }
};
