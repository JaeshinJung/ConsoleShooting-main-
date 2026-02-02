# ConsoleShooting (C++ & FMOD)

A structured arcade shooter engine built in **C++** that runs directly in the system console. This project focuses on implementing classic game design patterns and integrating external audio libraries to create a complete game experience within a CLI environment.

## 🚀 Technical Highlights

* **Architecture & Design Patterns:**
  * **State Pattern:** Managed game flow (Menu, Play, Game Over) using a dedicated `StateCtrl` and state-based logic.
  * **Singleton Pattern:** Implemented a global `GameMng` to centralize game-wide resources and logic.
  * **Inheritance & Polymorphism:** Utilized a base `Unit` class for shared behaviors among `Player`, `Enemy`, and `Bullet`.
* **Audio Integration:** Integrated the **FMOD library** to handle real-time sound effects and background music within a console application.
* **Component-Based Logic:** Designed modular classes for `Effect`, `Text`, and `Sound` management to ensure clean and maintainable code.
* **Custom Console Framework:** Developed a specialized framework (`ConsoleFramework.cpp`) to handle console-based rendering and double-buffering-like logic to reduce flickering.

## 🛠 Tech Stack
* **Language:** C++
* **Libraries:** FMOD (Audio Engine)
* **Development Environment:** Visual Studio (MSVC)
* **Key Skills:** OOP, Design Patterns, Memory Management, Resource Linking.

## 📂 Key File Structure
* `main.cpp`: Entry point for the game loop.
* `StateCtrl.h/cpp`: State machine for managing different game scenes.
* `GameMng.h/cpp`: Central manager utilizing the Singleton pattern.
* `FMOD / lib / inc`: External audio library integration.
* `Define.h / include.h`: Global constants and header management.

## 🎮 How to Run
1. Open `ConsoleShooting.sln` in **Visual Studio**.
2. Ensure `fmod.dll` is in the same directory as the executable.
3. Build and run (Ctrl + F5).
4. Use the keyboard to navigate the menu and control the player in the console window.

---
*This project reflects my ability to architect software systems using industry-standard design patterns and manage external library dependencies.*
