import turtle
import math
t = turtle.Turtle()
t.pencolor("blue")
t.speed(10) # 1:slowest, 3:slow, 5:normal, 10:fast, 0:fastest
scale=50
noOfBoxes=4
for i in range(noOfBoxes):
  for j in range(4):
    t.pendown()
    t.fd(scale)
    t.left(90)
  t.penup()
  t.left(45)
  t.fd(scale*(math.sqrt(2)))
  t.right(45)

  
  
turtle.done()