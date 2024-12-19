@WebServlet("/home")
public class HomeServlet extends HttpServlet {
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();
        out.println("<html lang=\"en\">");
        out.println("<head>");
        out.println("<meta charset=\"UTF-8\">");
        out.println("<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">");
        out.println("<title>Home | Bean Boutique Coffee</title>");
        out.println("<link rel=\"stylesheet\" href=\"style.css\">");
        out.println("</head>");
        out.println("<body>");
        out.println("<header>");
        out.println("<h1>Bean Boutique Coffee</h1>");
        out.println("<nav>");
        out.println("<ul>");
        out.println("<li><a href=\"home.html\">Home</a></li>");
        out.println("<li><a href=\"coffee-selection.html\">Coffee Selection</a></li>");
        out.println("<li><a href=\"brewing-equipment.html\">Brewing Equipment</a></li>");
        out.println("<li><a href=\"shopping-cart.html\">Shopping Cart</a></li>");
        out.println("<li><a href=\"events.html\">Events</a></li>");
        out.println("<li><a href=\"special-offers.html\">Special Offers</a></li>");
        out.println("<li><a href=\"Level.html\">Level</a></li>");
        out.println("</ul>");
        out.println("</nav>");
        out.println("</header>");
        out.println("<main>");
        out.println("<section class=\"hero\">");
        out.println("<div class=\"hero-content\">");
        out.println("<img src=\"images/coffee-shop.jpg\" alt=\"Coffee Shop\" class=\"hero-image\">");
        out.println("<div class=\"hero-text\">");
        out.println("<h2>Welcome to Bean Boutique Coffee</h2>");
        out.println("<p>Discover our unique blends, brewing equipment, and exciting events.</p>");
        out.println("</div>");
        out.println("</div>");
        out.println("</section>");
        out.println("<div class=\"slideshow\">");
        out.println("<div class=\"wrapper\">");
        out.println("<img src=\"images/Cappuccino.webp\" alt=\"Cappuccino\">");
        out.println("<img src=\"images/espresso.jpg\" alt=\"Espresso\">");
        out.println("<img src=\"images/latte.avif\" alt=\"Latte\">");
        out.println("<img src=\"images/love.png\" alt=\"Coffee Love\">");
        out.println("<img src=\"images/Cappuccino.webp\" alt=\"Cappuccino\">");
        out.println("</div>");
        out.println("</div>");
        out.println("</main>");
        out.println("<footer>");
        out.println("<p>&copy; 2024 Bean Boutique Coffee. All rights reserved.</p>");
        out.println("</footer>");
        out.println("</body>");
        out.println("</html>");
    }
}
