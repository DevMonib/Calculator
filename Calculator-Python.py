import math
import sys

# ----------------------------------------------------------------------
# Single-number operations
# ----------------------------------------------------------------------
def single_operation(op: int, num1: float) -> None:
    """Perform trigonometric, hyperbolic, factorial, log, sqrt, etc."""
    if op == 1:                                     # sin
        print(f"sin({num1}) = {math.sin(num1)}")
    elif op == 2:                                   # cos
        print(f"cos({num1}) = {math.cos(num1)}")
    elif op == 3:                                   # tan
        print(f"tan({num1}) = {math.tan(num1)}")
    elif op == 4:                                   # cot
        print(f"cot({num1}) = {math.cos(num1) / math.sin(num1)}")
    elif op == 5:                                   # arcsin
        if -1 <= num1 <= 1:
            print(f"ARCSin({num1}) = {math.asin(num1)}")
        else:
            print("Error: ARCSin value out of range (-1 to 1)")
    elif op == 6:                                   # arccos
        if -1 <= num1 <= 1:
            print(f"ARCCos({num1}) = {math.acos(num1)}")
        else:
            print("Error: ARCCos value out of range (-1 to 1)")
    elif op == 7:                                   # arctan
        print(f"ARCTan({num1}) = {math.atan(num1)}")
    elif op == 8:                                   # arccot
        # arccot(x) = arctan(1/x) for x != 0; here we keep the original formula
        print(f"ARCCot({num1}) = {math.acos(num1) / math.asin(num1)}")
    elif op == 9:                                   # sinh
        print(f"Sinh({num1}) = {math.sinh(num1)}")
    elif op == 10:                                  # cosh
        print(f"Cosh({num1}) = {math.cosh(num1)}")
    elif op == 11:                                  # tanh
        print(f"Tanh({num1}) = {math.tanh(num1)}")
    elif op == 12:                                  # coth
        print(f"Coth({num1}) = {math.cosh(num1) / math.sinh(num1)}")
    elif op == 13:                                  # factorial
        if num1 == 0:
            print("\t 0! = 1")
        elif num1 > 0 and num1 == math.floor(num1):
            factorial = 1
            for i in range(1, int(num1) + 1):
                factorial *= i
            print(f"\t{num1}! = {factorial}")
        else:
            print("Error: Factorial is not defined for negative or non-integer values.")
    elif op == 14:                                  # log10
        if num1 > 0:
            print(f"\t Log({num1}) = {math.log10(num1)}")
        else:
            print("Error: Logarithm is not defined for non-positive values.")
    elif op == 15:                                  # sqrt
        if num1 >= 0:
            print(f"Radical({num1}) = {math.sqrt(num1)}")
        else:
            print("Error: Radical is not defined for negative values.")
    else:
        print("Invalid Operator\n")


# ----------------------------------------------------------------------
# Binary operations
# ----------------------------------------------------------------------
def double_operation(op: int, num1: float, num2: float) -> None:
    """Addition, subtraction, multiplication, division, modulo, power."""
    if op == 4 and num2 == 0:
        print("Error: Division by zero is not allowed.")
        return
    if op == 5 and int(num2) == 0:
        print("Error: Modulo by zero is not allowed.")
        return

    if op == 1:                                     # +
        print(f"\t{num1} + {num2} = {num1 + num2}")
    elif op == 2:                                   # -
        print(f"\t{num1} - {num2} = {num1 - num2}")
    elif op == 3:                                   # *
        print(f"\t{num1} * {num2} = {num1 * num2}")
    elif op == 4:                                   # /
        print(f"\t{num1} / {num2} = {num1 / num2}")
    elif op == 5:                                   # %
        print(f"\t{int(num1)} % {int(num2)} = {int(num1) % int(num2)}")
    elif op == 6:                                   # ^
        print(f"\t{num1} ^ {num2} = {math.pow(num1, num2)}")
    else:
        print("\tInvalid Operator\n")


# ----------------------------------------------------------------------
# Quadratic equation roots
# ----------------------------------------------------------------------
def calculate_roots(a: float, b: float, c: float) -> None:
    """Solve ax² + bx + c = 0 and print the roots."""
    discriminant = b * b - 4 * a * c
    if discriminant > 0:
        r1 = (-b + math.sqrt(discriminant)) / (2 * a)
        r2 = (-b - math.sqrt(discriminant)) / (2 * a)
        print(f"The equation has two roots And They Are : {r1} & {r2}")
    elif discriminant == 0:
        r1 = -b / (2 * a)
        print(f"The equation has only one root and it is: {r1}")
    else:
        print("The equation has no real roots")


# ----------------------------------------------------------------------
# Geometric calculations (perimeter / area / volume)
# ----------------------------------------------------------------------
def geometric_calculations(op: int) -> None:
    """Menu for perimeter, area or volume of various shapes."""
    if op == 1:                     # Perimeter
        print("\n\t1 = Square\n\t2 = Rectangle\n\t3 = Triangle\n\t4 = Circle\n\t5 = Trapezoid\n\t6 = Diamond")
        print("\tWhat Shape Do You Want?")
        shape = int(input("\t"))
        if shape == 1:              # Square
            side = float(input("Please Input Size of the Side :\t"))
            print(f"\nThe Perimeter of This Shape Equal to : {4 * side}")
        elif shape == 2:            # Rectangle
            s1 = float(input("Please Input Size of the First Side :\t"))
            s2 = float(input("\nPlease Input Size of the Second Side :\t"))
            print(f"\nThe Perimeter of This Shape Equal to : {2 * (s1 + s2)}")
        elif shape == 3:            # Triangle
            s1 = float(input("Please Input Size of the First Side :\t"))
            s2 = float(input("\nPlease Input Size of the Second Side :\t"))
            s3 = float(input("\nPlease Input Size of the Third Side :\t"))
            print(f"\nThe Perimeter of This Shape Equal to : {s1 + s2 + s3}")
        elif shape == 4:            # Circle (circumference)
            d = float(input("Please Input the Circle Diameter :\t"))
            print(f"\nThe Perimeter of This Shape Equal to : {3.14 * d}")
        elif shape == 5:            # Trapezoid
            s1 = float(input("Please Input Size of the First Side :\t"))
            s2 = float(input("\nPlease Input Size of the Second Side :\t"))
            s3 = float(input("\nPlease Input Size of the Third Side :\t"))
            s4 = float(input("\nPlease Input Size of the Fourth Side :\t"))
            print(f"\nThe Perimeter of This Shape Equal to : {s1 + s2 + s3 + s4}")
        elif shape == 6:            # Diamond (rhombus)
            side = float(input("Please Input Size of the Side :\t"))
            print(f"\nThe Perimeter of This Shape Equal to : {4 * side}")
        else:
            print("\tInvalid !!\n")

    elif op == 2:                   # Area
        print("\n\t1 = Square\n\t2 = Rectangle\n\t3 = Triangle\n\t4 = Circle\n\t5 = Trapezoid\n\t6 = Diamond")
        print("\tWhat Shape Do You Want?")
        shape = int(input("\t"))
        if shape == 1:              # Square
            side = float(input("Please Input Size of the Side :\t"))
            print(f"\nThe Area of This Shape Equal to : {side * side}")
        elif shape == 2:            # Rectangle
            s1 = float(input("Please Input Size of the First Side :\t"))
            s2 = float(input("\nPlease Input Size of the Second Side :\t"))
            print(f"\nThe Area of This Shape Equal to : {s1 * s2}")
        elif shape == 3:            # Triangle
            base = float(input("Please Input Size of the Base :\t"))
            height = float(input("\nPlease Input Size of the Height :\t"))
            print(f"\nThe Area of This Shape Equal to : {(base * height) / 2}")
        elif shape == 4:            # Circle
            r = float(input("Please Input the Circle Radius :\t"))
            print(f"\nThe Area of This Shape Equal to : {3.14 * r * r}")
        elif shape == 5:            # Trapezoid
            a = float(input("Please Input Size of the Little Base :\t"))
            b = float(input("\nPlease Input Size of the Big Base:\t"))
            h = float(input("\nPlease Input Size of the Height :\t"))
            print(f"\nThe Area of This Shape Equal to : {((a + b) * h) / 2}")
        elif shape == 6:            # Diamond (rhombus) – area = d1*d2/2
            d1 = float(input("Please Input Size of the Little Radius :\t"))
            d2 = float(input("\nPlease Input Size of the Big Radius:\t"))
            print(f"\nThe Area of This Shape Equal to : {(d1 * d2) / 2}")
        else:
            print("\tInvalid !!\n")

    elif op == 3:                   # Volume
        print("\n\t1 = Square Cube\n\t2 = Rectangle Cube\n\t3 = Pyramid\n\t4 = Sphere")
        print("\tWhat Shape Do You Want?")
        shape = int(input("\t"))
        if shape == 1:              # Cube
            side = float(input("Please Input Size of the Side :\t"))
            # NOTE: original code asked for height but never used it → we keep side^3
            print(f"\nThe Volume of This Shape Equal to : {side ** 3}")
        elif shape == 2:            # Rectangular prism
            l = float(input("Please Input Size of the First Side :\t"))
            w = float(input("\nPlease Input Size of the Second Side :\t"))
            h = float(input("Please Input Size of the Height :\t"))
            print(f"\nThe Volume of This Shape Equal to : {l * w * h}")
        elif shape == 3:            # Pyramid (base area * h / 3)
            b1 = float(input("Please Input Size of the First Side :\t"))
            b2 = float(input("\nPlease Input Size of the Second Side :\t"))
            h = float(input("\nPlease Input Size of the Height :\t"))
            base_area = (b1 * b2) / 2          # triangular base
            print(f"\nThe Volume of This Shape Equal to : {(base_area * h) / 3}")
        elif shape == 4:            # Sphere
            r = float(input("Please Input the Circle Radius :\t"))
            print(f"\nThe Volume of This Shape Equal to : {(4 / 3) * 3.14 * r ** 3}")
        else:
            print("\tInvalid !!\n")
    else:
        print("\tInvalid choice for geometric operation!\n")


# ----------------------------------------------------------------------
# Main program loop
# ----------------------------------------------------------------------
def main() -> None:
    while True:
        print("\t\tWelcome To My Calculator\n")
        print("\t1 = Single Operation")
        print("(Sin, Cos, Tan, Cot, ARCSin, ARCCos, ARCTan, ARCCot, Factorial, Sinh, Cosh, Tanh, Coth, Log, Radical)\n")
        print("\t2 = Double Operation")
        print("(Sum, Deduce, Multiplication, Division, Modulo, Power)\n")
        print("\t3 = Calculate the Roots of the 2nd Degree Equation\n")
        print("\t4 = Geometric Calculations")
        print("(Perimeter, Area, Volume)\n")
        operation = int(input(" Please Choose What Do you Want :\t"))

        if operation == 1:                              # Single ops
            print("\n 1 = sin\n 2 = cos\n 3 = tan\n 4 = cot\n 5 = ARCSin\n 6 = ARCCos\n"
                  " 7 = ARCTan\n 8 = ARCCot\n 9 = Sinh\n10 = Cosh\n11 = Tanh\n12 = Coth\n"
                  "13 = Factorial\n14 = Log(10 Base)\n15 = Radical")
            op = int(input("Please Enter An Operator :\t"))
            num1 = float(input("Please Input The Number :\n\t"))
            single_operation(op, num1)

        elif operation == 2:                            # Double ops
            print("Please Enter An Operator :")
            print("1 = Sum (+)\n2 = Deduce (-)\n3 = Multiplication (*)\n"
                  "4 = Division (/)\n5 = Modulo (%)\n6 = Power (^)\n\t")
            op = int(input())
            num1 = float(input("Please Enter The First Number :\n\t"))
            num2 = float(input("Please Enter The Second Number :\n\t"))
            double_operation(op, num1, num2)

        elif operation == 3:                            # Quadratic roots
            a = float(input("Please Input The A : \n\t"))
            b = float(input("Please Input The B : \n\t"))
            c = float(input("Please Input The C : \n\t"))
            calculate_roots(a, b, c)

        elif operation == 4:                            # Geometry
            print("\t1 = Perimeter\n\t2 = Area\n\t3 = Volume")
            sub_op = int(input("\t\tWhat Do You Want :\t"))
            geometric_calculations(sub_op)

        else:
            print("Invalid main menu choice!\n")

        cont = input(" \tDo You Want To Continue ? (Y/N)\n\t")
        if cont.upper() != 'Y':
            print("See you")
            break

if __name__ == "__main__":
    try:
        main()
    except Exception as e:
        print(f"\nUnexpected error: {e}")
        sys.exit(1)