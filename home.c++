#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    cout << "Content-Type: text/html\n\n";
    cout << "<html lang=\"en\">";
    cout << "<head>";
    cout << "<meta charset=\"UTF-8\">";
    cout << "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">";
    cout << "<title>Home | Bean Boutique Coffee</title>";
    cout << "<link rel=\"stylesheet\" href=\"style.css\">";
    cout << "</head>";
    cout << "<body>";
    cout << "<header>";
    cout << "<h1>Bean Boutique Coffee</h1>";
    cout << "<nav><ul>";
    cout << "<li><a href=\"home.html\">Home</a></li>";
    cout << "<li><a href=\"coffee-selection.html\">Coffee Selection</a></li>";
    cout << "<li><a href=\"brewing-equipment.html\">Brewing Equipment</a></li>";
    cout << "<li><a href=\"shopping-cart.html\">Shopping Cart</a></li>";
    cout << "<li><a href=\"events.html\">Events</a></li>";
    cout << "<li><a href=\"special-offers.html\">Special Offers</a></li>";
    cout << "<li><a href=\"Level.html\">Level</a></li>";
    cout << "</ul></nav></header>";
    cout << "<main></main>";
    cout << "<footer><p>&copy; 2024 Bean Boutique Coffee. All rights reserved.</p></footer>";
    cout << "</body></html>";
    return 0;
}
