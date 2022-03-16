import turtle
import math
import random
t = turtle.Turtle()
t.speed(0) # 1:slowest, 3:slow, 5:normal, 10:fast, 0:fastest
scale=100

t.pendown()
t.setheading(90)

def drawFractal(length,depth,branches,spread=180,color=["red","blue","green","yellow"]):
  
  if depth==0 or length<5:
    return
  t.pencolor(random.choice(color))
  t.fd(length)
  t.right((spread/(branches+1))/2)
  t.right((spread/2))
  
  for i in range(branches):
    t.left(spread/(branches))
    drawFractal(length/(1.5),depth-1,branches,spread,color)
  t.right((spread/2))
  t.left((spread/(branches+1))/2)
  t.bk(length)
  
    
  
for i in range(6):
  drawFractal(scale,10,2,180)
  t.right(360/6)

  
turtle.done()