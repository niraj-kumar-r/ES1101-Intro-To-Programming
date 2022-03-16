import turtle
t = turtle.Turtle()
t.pencolor("blue")
t.speed(10)  # 1:slowest, 3:slow, 5:normal, 10:fast, 0:fastest
scale = 50
lines = 5
for i in range(lines):
    for j in range(2):
        t.penup()
        if j == 0:
            t.home()
            t.setx(i*scale)
            t.setheading(90)
        elif j == 1:
            t.home()
            t.sety(i*scale)
            t.setheading(0)

        t.pendown()
        t.forward((lines-1)*scale)


turtle.done()
