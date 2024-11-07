## Zadanie: Implementacja klasy `Rectangle`

## Wymagania:

1. Utwórz klasę `Rectangle`, która będzie reprezentowała prostokąt.
2. Klasa powinna mieć następujące prywatne pola:
   - `width` (typu `double`) - szerokość prostokąta
   - `height` (typu `double`) - wysokość prostokąta

3. Klasa powinna mieć następujące publiczne metody:

   - **Konstruktor**
     - `Rectangle(double w, double h)`
       - Argumenty:
         - `w` - szerokość prostokąta
         - `h` - wysokość prostokąta
       - Konstruktor powinien inicjalizować pola `width` i `height` wartościami podanymi jako argumenty.

   - **Metody ustawiające**
     - `void setWidth(double w)`
       - Argumenty:
         - `w` - nowa szerokość prostokąta
       - Metoda powinna ustawiać pole `width` na wartość `w`.

     - `void setHeight(double h)`
       - Argumenty:
         - `h` - nowa wysokość prostokąta
       - Metoda powinna ustawiać pole `height` na wartość `h`.

   - **Metody pobierające**
     - `double getWidth() const`
       - Metoda powinna zwracać wartość pola `width`.

     - `double getHeight() const`
       - Metoda powinna zwracać wartość pola `height`.

   - **Metody obliczające**
     - `double area() const`
       - Metoda powinna zwracać pole powierzchni prostokąta (szerokość * wysokość).

     - `double perimeter() const`
       - Metoda powinna zwracać obwód prostokąta (2 * (szerokość + wysokość)).

   - **Metoda wyświetlająca**
     - `void display() const`
       - Metoda powinna wyświetlać informacje o prostokącie w formacie:
         ```
         Rectangle: <width> x <height>
         Area: <area>
         Perimeter: <perimeter>
         ```

#### Przykład użycia:

```cpp
int main() {
    // Tworzenie obiektu klasy Rectangle
    Rectangle rect(10, 5);

    // Wyświetlanie informacji o prostokącie
    rect.display();

    // Pobieranie szerokości i wysokości
    double width = rect.getWidth();
    double height = rect.getHeight();
    std::cout << "Width: " << width << ", Height: " << height << "\n";

    // Obliczanie pola i obwodu
    double area = rect.area();
    double perimeter = rect.perimeter();
    std::cout << "Area: " << area << ", Perimeter: " << perimeter << "\n";

    // Zmiana szerokości i wysokości
    rect.setWidth(15);
    rect.setHeight(8);

    // Wyświetlanie zaktualizowanych informacji o prostokącie
    rect.display();

    // Pobieranie nowej szerokości i wysokości
    width = rect.getWidth();
    height = rect.getHeight();
    std::cout << "New Width: " << width << ", New Height: " << height << "\n";

    // Obliczanie nowego pola i obwodu
    area = rect.area();
    perimeter = rect.perimeter();
    std::cout << "New Area: " << area << ", New Perimeter: " << perimeter << "\n";

    return 0;
}
```

Zaimplementuj klasę `Rectangle` zgodnie z powyższymi wymaganiami.
