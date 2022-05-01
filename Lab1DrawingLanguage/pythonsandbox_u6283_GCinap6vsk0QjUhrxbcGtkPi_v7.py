import turtle
import math
t = turtle.Turtle()
t.speed(0)  # 1:slowest, 3:slow, 5:normal, 10:fast, 0:fastest
scale = 100
numOfCir = 36

t.pendown()

for i in range(36):
    t.circle(scale)
    t.right(360/numOfCir)


turtle.done()
