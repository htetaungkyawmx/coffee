#include <stdio.h>
#include <stdlib.h>

int main() {
    // Print the HTTP header for the response
    printf("Content-Type: text/html\n\n");

    // Print the HTML content
    printf("<!DOCTYPE html>\n");
    printf("<html lang=\"en\">\n");
    printf("<head>\n");
    printf("    <meta charset=\"UTF-8\">\n");
    printf("    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n");
    printf("    <title>Home | Bean Boutique Coffee</title>\n");
    printf("    <link rel=\"stylesheet\" href=\"style.css\">\n");
    printf("</head>\n");
    printf("<body>\n");

    // Header section
    printf("    <header>\n");
    printf("        <h1>Bean Boutique Coffee</h1>\n");
    printf("        <nav>\n");
    printf("            <ul>\n");
    printf("                <li><a href=\"home.html\">Home</a></li>\n");
    printf("                <li><a href=\"coffee-selection.html\">Coffee Selection</a></li>\n");
    printf("                <li><a href=\"brewing-equipment.html\">Brewing Equipment</a></li>\n");
    printf("                <li><a href=\"shopping-cart.html\">Shopping Cart</a></li>\n");
    printf("                <li><a href=\"events.html\">Events</a></li>\n");
    printf("                <li><a href=\"special-offers.html\">Special Offers</a></li>\n");
    printf("                <li><a href=\"Level.html\">Level</a></li>\n");
    printf("            </ul>\n");
    printf("        </nav>\n");
    printf("    </header>\n");

    // Main content section
    printf("    <main>\n");
    printf("        <section class=\"hero\">\n");
    printf("            <div class=\"hero-content\">\n");
    printf("                <img src=\"images/coffee-shop.jpg\" alt=\"Coffee Shop\" class=\"hero-image\">\n");
    printf("                <div class=\"hero-text\">\n");
    printf("                    <h2>Welcome to Bean Boutique Coffee</h2>\n");
    printf("                    <p>Discover our unique blends, brewing equipment, and exciting events.</p>\n");
    printf("                </div>\n");
    printf("            </div>\n");
    printf("        </section>\n");

    // Slideshow section
    printf("        <div class=\"slideshow\">\n");
    printf("            <div class=\"wrapper\">\n");
    printf("                <img src=\"images/Cappuccino.webp\" alt=\"Cappuccino\">\n");
    printf("                <img src=\"images/espresso.jpg\" alt=\"Espresso\">\n");
    printf("                <img src=\"images/latte.avif\" alt=\"Latte\">\n");
    printf("                <img src=\"images/love.png\" alt=\"Coffee Love\">\n");
    printf("                <img src=\"images/Cappuccino.webp\" alt=\"Cappuccino\">\n");
    printf("            </div>\n");
    printf("        </div>\n");
    printf("    </main>\n");

    // Footer section
    printf("    <footer>\n");
    printf("        <p>&copy; 2024 Bean Boutique Coffee. All rights reserved.</p>\n");
    printf("    </footer>\n");

    // Close the HTML tags
    printf("</body>\n");
    printf("</html>\n");

    return 0;
}
