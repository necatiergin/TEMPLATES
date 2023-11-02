### İfade şablonları (expression templates)

İfade şablonları, derleme zamanında bir hesaplamanın tembelce değerlendirilmesini _(lazy evaluation)_ sağlayan bir metaprogramlama tekniğidir. Çalışma zamanında oluşan verimsiz işlemlerden kaçınılmasını sağlar. Ancak ifade şablonları tipik olarak daha fazla kod gerektirir, kodun okunması ve anlaşılması daha zor hale gelir.
İfade şablonları, genellikle lineer cebir kütüphanelerinin gerçekleştirilmesinde kullanılırlar.

Öncelikle ifade şablonları kullanarak hangi probleme çözüm getirmeye çalışıyoruz, bunu anlamaya çalışalım. Matrisler arasında toplama, çıkarma, çarpma gibi işlemler yaptırmak istediğimizi düşünelim. Bu işlemler iki matris arasında yapılabileceği gibi skalar bir değer ile bir matris arasında da yapılabilir. Örneğin bir matrisin tüm elemanlarının belirli bir tam sayı ile çarpılması gibi: 

```cpp
auto r1 = m1 + m2;
auto r2 = m1 + m2 + m3;
auto r3 = m1 * m2 + m3 * m4;
auto r4 = m1 + 5 * m2;
```

Yukarıdaki işlemlerde m1, m2, m3 ve m4 değişkenlerinin birer matris olduğunu düşünelim. Benzer şekilde, r1, r2, r3 ve r4 sağ taraftaki işlemlerin gerçekleştirilmesiyle ortaya çıkan matrisler olsun. İlk işlem herhangi bir sorun oluşturmaz: m1 ve m2 toplanır ve sonuç r1'e atanır. 
Ancak, ikinci işlem farklı, çünkü eklenen üç matris var. Burada önce m1 ve m2 toplanır ve bir geçici nesne oluşturulur, daha sonra bu geçici nesne ile m3 toplanır ve elde edilen sonuç r2 değişkenine atanır.
Üçüncü işlemde ise iki ayrı geçici nesne oluşur. Birincisi m1 ve m2'nin çarpımından elde edilen değer ve ikincisi m3 ve m4'ün çarpımından elde edilen değer.
Bu iki değer toplanır ve elde edilen sonuç r3 değişkenine atanır.
Son işlem ikinci işlemin bir benzeri. Skalar 5 ile matris m2 arasındaki çarpımdanyine geçici bir nesne elde edilir ve daha sonra bu geçici nesne ile m1 toplanır ve sonuç r4 değişkenine atanır.

İşlemler ne kadar karmaşık olursa o kadar fazla geçici nesne oluşur. Nesnelerin bellekte kapladığı yer büyüdükçe bu işlemlerden doğacak verim kaybı artar. İfade şablonları, hesaplamayı derleme zamanı ifadesi olarak modelleyerek bu durumdan kaçınılmasını sağlar.
Matematiksel ifadenin tamamı (m1 + 5 * m2 gibi), atama değerlendirildiğinde ve herhangi bir geçici nesneye ihtiyaç duyulmadan hesaplanan tek bir ifade şablonu haline getirilir.


Örneği basitleştirmek için matrisleri değil vektörleri kullanacağız. Örnek kodların amacı ifade şablonlarının oluşturulmasına odaklanmak olduğundan verilerin temsili çok önemli değil. Aşağıdaki çeşitli işlemler yapmaya olanak sağlayan minimal bir _vector_ gerçekleştirimi var:

- std::initializer_list parametr eli bir constructor
- eleman sayısını veren size üye fonksiyonu
- elemanlara erişim sağlayan [] operatör fonksiyonu

```cpp
#include <iostream>
#include <vector>

template<typename T>
struct vector
{
	vector(std::size_t const n) : data_(n) {}
	
	vector(std::initializer_list<T>&& l) : data_(l) {}
	
	std::size_t size() const noexcept
	{
		return data_.size();
	}

	T const& operator[](const std::size_t i) const
	{
		return data_[i];
	}

	T& operator[](const std::size_t i)
	{
		return data_[i];
	}
private:
	std::vector<T> data_;
};

template<typename T, typename U>
auto operator+ (vector<T> const& a, vector<U> const& b)
{
	using result_type = decltype(std::declval<T>() + std::declval<U>());
	vector<result_type> result(a.size());
	for (std::size_t i{}; i < a.size(); ++i) {
		result[i] = a[i] + b[i];
	}
	return result;
}

template<typename T, typename U>
auto operator* (vector<T> const& a, vector<U> const& b)
{
	using result_type = decltype(std::declval<T>() +
		std::declval<U>());
	vector<result_type> result(a.size());
	for (std::size_t i = 0; i < a.size(); ++i)
	{
		result[i] = a[i] * b[i];
	}
	return result;
}

template<typename T, typename S>
auto operator* (S const& s, vector<T> const& v)
{
	using result_type = decltype(std::declval<T>() + std::declval<S>());

	vector<result_type> result(v.size());
	for (std::size_t i = 0; i < v.size(); ++i)
	{
		result[i] = s * v[i];
	}
	return result;
}

vector<int> v1{ 1,2,3 };
vector<int> v2{ 4,5,6 };
double a{ 1.5 };
vector<double> v3 = v1 + a * v2;
// {7.0, 9.5, 12.0}
vector<int> v4 = v1 * v2 + v1 + v2; // {9, 17, 27}
```




