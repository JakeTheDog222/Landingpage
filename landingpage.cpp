<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Quality Rush</title>
    <link rel="stylesheet" href="styles.css">
    <style>
    body { 
    font-family: Arial, sans-serif; 
    text-align: center; 
    margin: 0; 
    padding: 0;
    background-color: #f8f9fa; 
    }

header { 
display: flex; 
justify-content: space-between; 
align-items: center; 
background: #28a745; 
color: white;
 padding: 15px;
  }

.menu-icon {
 font-size: 24px; 
 cursor: pointer; 
 display: none;
  }

nav ul { 
list-style: none; 
padding: 0;
 }

nav ul li { 
display: inline;
 margin: 0 15px;
  }

nav ul li a { 
color: white; 
text-decoration: none; 
}

.scroll-container { 
display: flex; 
overflow-x: auto;
 gap: 20px; 
 padding: 10px; 
 white-space: nowrap; 
 }

.product { 
background: white; 
padding: 15px; 
border-radius: 5px; 
box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
 min-width: 150px;
  }

form input, form button { 
display: block; 
margin: 10px auto; 
padding: 10px; 
width: 80%; 
}

form button { 
background: #28a745; 
color: white; 
border: none; 
cursor: pointer; }

@media screen and (max-width: 600px) { 
.menu-icon { 
display: block; 
}
 nav ul { 
 display: none;
  position: absolute; 
  background: #28a745; 
  width: 100%; 
  left: 0; 
  top: 50px; 
  text-align: left; 
  padding: 10px; 
  } 
  nav ul.show { 
  display: block; 
  } 
  }
    </style>
</head>
<body>
    <header>
        <div class="menu-icon" onclick="toggleMenu()">&#9776;</div>
        <h1>Quality Rush</h1>
        <nav id="nav-menu">
            <ul>
                <li><a href="#home">Home</a></li>
                <li><a href="#market">Market Place</a></li>
                <li><a href="#features">Features</a></li>
                <li><a href="#contact">Contact</a></li>
            </ul>
        </nav>
    </header>

    <section id="home">
        <h2>Welcome to Quality Rush</h2>
        <p>Order fresh vegetables and meat from the comfort of your home. We ensure quality and convenience at your doorstep.</p>
    </section>

    <section id="market">
        <h2>Market Place</h2>
        <div class="scroll-container">
            <div class="product">Meat</div>
            <div class="product">Vegetables</div>
            <div class="product">Fruits</div>
            <div class="product">Dairy</div>
        </div>
    </section>

    <section id="features">
        <h2>Our Features</h2>
        <ul>
            <li>Track your vegetable and meat list</li>
            <li>Save favorite items for easy reordering</li>
            <li>Receive notifications for fresh stock updates</li>
        </ul>
    </section>

    <footer id="contact">
        <h2>Contact Us</h2>
        <form id="contact-form">
            <input type="text" id="contact-name" placeholder="Your Name" required>
            <input type="email" id="contact-email" placeholder="Your Email" required>
            <button type="submit">Submit</button>
        </form>
        <p id="contact-confirmation"></p>
    </footer>

    <script src="script.js"></script>
</body>
</html>