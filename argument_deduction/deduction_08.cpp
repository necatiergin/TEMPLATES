template<typename T>
class TypeTeller;


template <typename T>
void foo(const T* p)
{
    TypeTeller<T> x;

}

int main()
{
    const char* pnames[] = { "ahmet", "nihal", "salih", "turgut", "ayse" };
    foo(pnames); //foo<const char *>
}
