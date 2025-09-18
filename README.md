# Fract-ol

The **Fract-ol** project from [42 School](https://42.fr) is a graphical exploration of fractals.  
The goal is to render fractals (like **Mandelbrot** and **Julia sets**) and allow real-time interaction: zooming, moving, and exploring the infinite beauty of mathematics.

---

## 📌 Project Overview

- Implements fractal rendering using **MiniLibX (MLX)**.
- Supports multiple fractals (Mandelbrot, Julia, Bonus: Burning Ship, etc.).
- Real-time **zoom** and **movement**.
- Interactive controls to explore infinite detail.
- Learn about **complex numbers**, **iteration formulas**, and **graphics programming**.

---

## ⚙️ Compilation

```sh
make        # builds fractol
make clean  # removes objects
make fclean # removes binary and objects
make re     # full rebuild

./fractol mandelbrot
./fractol julia <real> <imaginary>
