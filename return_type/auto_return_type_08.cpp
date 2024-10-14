auto f1(long val)
{
	if (val > 0)
		return val;

	return 0; //error
}

auto f2(long val)
{
	if (val > 0)
		return val;

	return 0L; //valid
}

auto f3(long val)
{
	return val > 0 ? val : 0; //valid
}
