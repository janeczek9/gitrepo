#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figura01.py
#  

import turtle


def main(args):
    turtle.setup(800, 600)
    turtle.penup()
    turtle.setpos(-100, 100)
    turtle.pendown()
    for i in range (5):
        turtle.forward(100)
        turtle.right(144)
    for i in range (5):
        turtle.forward(150)
        turtle.right(144)
    turtle.done()
    return 

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
