import turtle
import math
t = turtle.Turtle()
t.pencolor("blue")
t.speed(10) # 1:slowest, 3:slow, 5:normal, 10:fast, 0:fastest
scale=100
dia=scale*math.sqrt(2)

t.pendown()
for i in range(4):
  t.fd(scale)
  t.right(90)
t.right(45)
t.fd(dia)
for j in range(2):

  t.right(90)
  t.fd(dia/2)
t.right(90)
t.fd(dia)

for h in range(2):
  t.left(90)
  t.fd(dia/2)
  
  
turtle.done()