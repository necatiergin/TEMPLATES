#include <iterator>
#include <cassert>
#include <iostream>

template <typename Der>
class Container {
private:
    Der& derived() { return static_cast<Der&>(*this); }
    const Der& derived() const { return static_cast<const Der&>(*this); }
public:
    decltype(auto) front()
    {
        return *derived().begin();
    }

    decltype(auto) back()
    {
        return *std::prev(derived().end());
    }

    decltype(auto) size() const
    {
        return std::distance(derived().begin(), derived().end());
    }

    decltype(auto) operator[](std::size_t i)
    {
        return *std::next(derived().begin(), i);
    }
};

#include <memory>

template <typename T>
class DynArray : public Container<DynArray<T>> {
public:
    DynArray(std::size_t size) : size_{ size },
        updata_{ std::make_unique<T[]>(size_) }
    { }

    T* begin() { return updata_.get(); }
    const T* begin() const { return updata_.get(); }
    T* end() { return updata_.get() + size_; }
    const T* end() const { return updata_.get() + size_; }
private:
    std::size_t size_;
    std::unique_ptr<T[]> updata_;
};

int main()
{
    DynArray<int> arr(10);
    arr.front() = 2;
    arr[2] = 5;
    arr.back() = 67;

    for (auto val : arr)
        std::cout << val << ' ';

    std::cout << '\n';
    std::cout << "arr.size() = " << arr.size() << '\n';

}
