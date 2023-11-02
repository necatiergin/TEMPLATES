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
