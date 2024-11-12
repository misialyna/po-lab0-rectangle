#include "rectangle.cpp"

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