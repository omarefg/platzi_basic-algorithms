import turtle
import math

turt = turtle.Turtle()
screen = turtle.Screen()
fibo = 250
turt.speed(1)

def createFibo(n):
    a = 0
    b = 1
    for i in range(n):
        print(b)
        fwd = math.pi * b / 2
        fwd /= 90
        for j in range(90):
            print(fwd)
            turt.forward(fwd)
            turt.left(1)
            tmp = a
            b = a + b
            a = tmp

def createSquares(n, a, b):
    if(b < n):
        turt.backward(a)
        turt.right(90)
        turt.forward(b)
        turt.left(90)
        turt.forward(b)
        turt.left(90)
        turt.forward(b)
        tmp = b
        b = a + b
        a = tmp
        createSquares(n, a, b)

turt.pencolor("blue")

createSquares(fibo, 0, 1)

turt.penup()
turt.setposition(1, 0)
turt.seth(0)
turt.pendown()
turt.pencolor("red")

# createFibo(fibo)

screen.exitonclick()