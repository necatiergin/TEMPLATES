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




