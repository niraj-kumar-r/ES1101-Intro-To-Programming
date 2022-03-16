import turtle
t = turtle.Turtle()
t.pencolor("blue")
t.speed(10) # 1:slowest, 3:slow, 5:normal, 10:fast, 0:fastest
scale=50
for i in range(5):
  for j in range(2):
    t.penup()
    if j==0:
      t.home()
      t.setx(i*scale)
      t.setheading(90)
    elif j==1:
      t.home()
      t.sety(i*scale)
      t.setheading(0)
    
    t.pendown()
    t.forward(4*scale)

  
  
turtle.done()