# Geometry Calculator (C++)

## 📌 Project Description
This project is a **Geometry Calculator** implemented in **C++** using **Object-Oriented Programming (OOP)** principles.  
The program allows users to calculate area, perimeter, surface area, and volume for various **2D and 3D geometric shapes**.

---

## 🧱 UML Design
The project is designed using UML class diagrams.  
Main abstraction hierarchy:

- Shape (abstract base class)
  - Shape2D
    - Rectangle
    - Square
    - Circle
    - Triangle
    - Ellipse
    - Parallelogram
  - Shape3D
    - Cube
    - Sphere

---

## 🛠️ Features
- Object-Oriented design (Inheritance, Polymorphism, Abstraction)
- Separate header (.h) and source (.cpp) files
- Console-based menu system
- Supports both 2D and 3D shape calculations

---

## 🚀 How to Run
1. Open the project in **Code::Blocks**
2. Build the project
3. Run `main.cpp`
4. Select a shape from the menu
5. Enter required dimensions

---

## 📁 Project Structure
Geometry_Calculator/
│
├── main.cpp                # Program entry point, menu system
│
├── Shape.h                 # Abstract base class for all shapes
├── Shape2D.h               # Base class for 2D shapes
├── Shape3D.h               # Base class for 3D shapes
│
├── Rectangle.h / .cpp      # Rectangle implementation
├── Square.h / .cpp         # Square implementation
├── Circle.h / .cpp         # Circle implementation
├── Triangle.h / .cpp       # Triangle implementation
├── Ellipse.h / .cpp        # Ellipse implementation
├── Parallelogram.h / .cpp  # Parallelogram implementation
│
├── Cube.h / .cpp           # Cube (3D shape)
├── Sphere.h / .cpp         # Sphere (3D shape)
│
├── README.md               # Project documentation
└── Report.pdf              # Project report

