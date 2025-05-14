# Edanur Lazoğlu Algoritma Proje Ödevi
## KMP Algoritması
Kmp algoritması bir metin içindeki desenlerin(örüntülerin) konumunu bulur ve bir metin işleme algoritmasıdır.  Toplam zaman karmaşıklığı O(n+m)’dir. Uzay karmaşıklığı ise O(m)'dir. Burada n metin uzunluğunu ifade ederken m örüntü uzunluğunu ifade eder. 
## Avantajlar
-	Her karaktere *en fazla* 1 kere bakar.
-	Büyük metinlerde hızlıdır.
-	Tekrarları tespit ederek önceden analiz eder. Bu da eşleşme başarısız olduğunda nereden devam etmesi gerektiğini bilmesini sağlar.
-	Geri dönme (backtracking) içermez. Yani bir karakter eşleşmediğinde önceki karakterlere dönmez. LPS dizisi ile hangi noktadan devam edeceğini doğrudan bilir. Bu da algoritmanın daha kararlı ve daha hızlı olmasını sağlar.

## Dezavantajlar
-	LPS ‘nin ön işlem gerektirmesi başlagıçta zorlayabilir.
-	Çok kısa veya benzersiz desenlerde avantajı azalabilir.
-	Örüntü içinde fazla tekrar yoksa verimliliği düşebilir.

## Ne zaman ve Neden Kullanılır?
KMP algoritması metin içinde birden fazla desen eşleşmesi aranıyorsa, geriye dönmenin maliyetli olduğu durumlarda, büyük boyutlu belgelerde ve DNA dizisi karşılaştırmalarında kullanılır. 

## Nasıl Çalışır?
KMP algoritması ön işleme kullanır. Desenleri analiz eder ardından metin üzerinden kayıpsız şekilde ilerler. İki aşamada çalışır.
1. aşamada algoritma LPS dizisini oluşturur. LPS, bir dizinin hem başında hem de sonunda bulunan ve tüm diziye eşit olmayan en uzun kısmıdır.
2. aşamada ise deseni tüm metin içinde aratırher karakteri eşleştirir. Eğer eşleşme bozulursa j=lps[j-1] ile geri kayar. Tam eşleşme olduğunda ise sonucu yazdırır ve j=lps[j-1] ile devam eder.

## Kullanım Alanları
- Arama motorları: Web sayfasında anahtar kelimeleri aramak için kullanılır.
- Metin Editörleri: "Bul ve değiştir" işlemlerini gerçekleşrimede kullanılır.
- DNA Dizisi Analizi: Genetik verilerde tekrar eden motifleri bulmak için kullanılır.
- İntihal Tespiti: Cümle veya paragraf benzerliklerini tespit etmede kullanılır.
- Veri Sıkıştırma: Tekrar eden veri bloklarını analiz etmede kullanılır.


## Güçlü Yanı
- Geriye dönmeeyi engelleyen LPS dizisi KMP algoritmasını en güçlü yanıdır. Çünkü karakter eşleşmesi başarısız lduğunda asla geriye dönmez ve daha önce elde ettiği bilgilerle ilerlemeye deavm eder. Bu da özellikle büyük veri kümelerinde zaman tasarrufu sağlar.

## Zayıf Yanı
- Yeni öğrenen biri için LPS dizisi karmaşık ve zor gelebilir. Çünkü kodlaması hata yapmaya açıktır. Bu yüzden desen çok kısa ve basitse daha basit algoritmalar kullanılabilir.
```#include


```
