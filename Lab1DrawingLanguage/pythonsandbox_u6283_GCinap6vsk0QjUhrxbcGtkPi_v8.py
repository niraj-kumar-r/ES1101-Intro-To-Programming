import turtle
import math
t = turtle.Turtle()
t.speed(0) # 1:slowest, 3:slow, 5:normal, 10:fast, 0:fastest
scale=10

t.pendown()
t.setheading(90)

def drawFractal(length,depth,branches,spread=180,color="black"):
  
  if depth==0 or length<5:
    return
  t.pencolor(color)
  
  t.fd(length)
  t.right(spread/2)
  
  for i in range(branches):
    t.left(spread/(branches+1))
    drawFractal(length/(1.5),depth-1,branches,spread,color)
  t.left(spread/(branches+1))
  t.right(spread/2)
  t.bk(length)
  
    
  

drawFractal(100,3,3,170)

  
turtle.done()