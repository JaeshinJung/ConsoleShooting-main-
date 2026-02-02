# ConsoleShooting (C++ Custom Game Engine)

A high-performance, command-line interface (CLI) based arcade shooter built from the ground up using **C++**. This project demonstrates the implementation of a custom game engine architecture without relying on high-level commercial engines.

## 🚀 Key Technical Highlights

* **Custom Game Loop:** Implemented a non-blocking game loop to handle real-time input, physics updates, and rendering at a consistent frame rate.
* **Manual Memory Management:** Leveraged C++ memory management techniques to optimize object lifecycle, ensuring zero memory leaks during intensive entity spawning.
* **Entity Component Architecture:** Designed a modular system to manage game objects (Player, Enemies, Projectiles), facilitating scalable game logic.
* **Collision Detection:** Built a coordinate-based collision system for real-time interaction between projectiles and enemies.

## 🛠 Tech Stack
* **Language:** C++ (Standard 14/17)
* **Environment:** Windows/Linux Console
* **Concepts:** Object-Oriented Programming (OOP), Pointers/Memory Management, Data Structures.

## 📂 Project Structure
* `Engine/`: Core game loop and system controllers.
* `Entities/`: Logic for game objects and their behaviors.
* `Utils/`: Input handling and coordinate mapping for the console buffer.

## 🎮 How to Run
1. Clone the repository: `git clone https://github.com/JaeshinJung/ConsoleShooting-main-.git`
2. Compile using G++: `g++ -o game main.cpp`
3. Run the executable: `./game`

---
*Developed as part of my deep dive into System-level Software Engineering and Game Architecture.*
