explicit this <br>
deducing this <br>

- C++23 ile gelen en önemli eklemelerden biri.
- _explicit object parameter_ deniyor.
- non-static üye fonksiyonlarda kullanılıyor.
- fonksiyonun ilk parametresi olmak zorunda.
- Sınıf türünden önce this anahtar sözcüğü kullanılıyor.


Sağlayabileceği faydalar şöyle özetlenebilir:
- Kod tekrarının engellenmesi
- _recursive lambda_ fonksiyonların kolay bir şekilde ayzılabilmesi
- _this_ göstericisinin değerle fonksiyona geçilebilmesi
- Bazı _CRTP_ uygulamalarının daha kolay yapılabilmesi
