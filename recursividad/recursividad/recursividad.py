import turtle

turt = turtle.Turtle()
screen = turtle.Screen()
fibo = 200
turt.speed(10)
squares = []

def createFibo(n, a, b):
    for i in squares:
        if i < n:
            turt.circle(i, 90)

def createSquares(n, a, b):
    if b < n:
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
        squares.append(b)
        createSquares(n, a, b)

turt.pensize(3)

turt.pencolor("blue")
createSquares(fibo, 0, 1)

turt.penup()
turt.setposition(1, 0)
turt.seth(0)
turt.pendown()
turt.pencolor("red")
createFibo(fibo, 0, 1)

screen.exitonclick()