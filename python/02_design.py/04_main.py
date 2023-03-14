import turtle
import colorsys
t=turtle.Turtle()
t.speed(0)
turtle.Screen().bgcolor('black')
t.pensize(2)
n=100
h=0
for i in range(36):
    for i in range(4):
        c=colorsys.hsv_to_rgb(h,1,0.6)
        h+=1/n
        t.color(c)
        t.circle(40+i*5,90)
        t.forward(100)
        t.left(90)
    t.right(10)    
turtle.done()
