import turtle
t = turtle.Turtle()
t.pendown()
t.pencolor("blue")
t.speed(5) # 1:slowest, 3:slow, 5:normal, 10:fast, 0:fastest
for i in range(4):
  t.forward(100)
  t.left(90)
turtle.done()