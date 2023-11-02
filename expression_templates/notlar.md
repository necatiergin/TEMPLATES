### İfade şablonları (expression templates)

İfade şablonları, derleme zamanında bir hesaplamanın tembelce değerlendirilmesini _(lazy evaluation)_ sağlayan bir metaprogramlama tekniğidir. Çalışma zamanında oluşan verimsiz işlemlerden kaçınılmasını sağlar. Ancak ifade şablonları tipik olarak daha fazla kod gerektirir, kodun okunması ve anlaşılması daha zor hale gelir.
İfade şablonları, genellikle lineer cebir kütüphanelerinin gerçekleştirilmesinde kullanılırlar.

Öncelikle ifade şablonları kullanarak hangi probleme çözüm getirmeye çalışıyoruz, bunu anlamaya çalışalım. Matrisler arasında toplama, çıkarma, çarpma gibi işlemler yaptırmak istediğimizi düşünelim. Bu işlemler iki matris arasında yapılabileceği gibi skalar bir değer ile bir matris arasında da yapılabilir. Örneğin bir matrisin tüm elemanlarının belirli bir tam sayı ile çarpılması gibi. 

```cpp
auto r1 = m1 + m2;
auto r2 = m1 + m2 + m3;
auto r3 = m1 * m2 + m3 * m4;
auto r4 = m1 + 5 * m2;
```
