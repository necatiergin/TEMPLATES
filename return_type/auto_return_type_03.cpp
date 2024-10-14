auto foo();

int main()
{
    auto x = foo(); //invalid
    //
}

auto foo()
{
    return 5;
}
