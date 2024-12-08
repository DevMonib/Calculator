#include <iostream>
#include <cmath>

using namespace std;

// Function for single number operations
void singleOperation(int op, double num1) {
    switch (op) {
        case 1:
            cout << "sin(" << num1 << ") = " << sin(num1) << endl;
            break;
        case 2:
            cout << "cos(" << num1 << ") = " << cos(num1) << endl;
            break;
        case 3:
            cout << "tan(" << num1 << ") = " << tan(num1) << endl;
            break;
        case 4:
            cout << "cot(" << num1 << ") = " << cos(num1) / sin(num1) << endl;
            break;
        case 5:
            if (num1 >= -1 && num1 <= 1)
                cout << "ARCSin(" << num1 << ") = " << asin(num1) << endl;
            else
                cout << "Error: ARCSin value out of range (-1 to 1)" << endl;
            break;
        case 6:
            if (num1 >= -1 && num1 <= 1)
                cout << "ARCCos(" << num1 << ") = " << acos(num1) << endl;
            else
                cout << "Error: ARCCos value out of range (-1 to 1)" << endl;
            break;
        case 7:
            cout << "ARCTan(" << num1 << ") = " << atan(num1) << endl;
            break;
        case 8:
            cout << "ARCCot(" << num1 << ") = " << acos(num1) / asin(num1) << endl;
            break;
        case 9:
            cout << "Sinh(" << num1 << ") = " << sinh(num1) << endl;
            break;
        case 10:
            cout << "Cosh(" << num1 << ") = " << cosh(num1) << endl;
            break;
        case 11:
            cout << "Tanh(" << num1 << ") = " << tanh(num1) << endl;
            break;
        case 12:
            cout << "Coth(" << num1 << ") = " << cosh(num1) / sinh(num1) << endl;
            break;
        case 13:
            if (num1 == 0)
            {
                cout << "\t 0! = 1" << endl;
            }
            else if (num1 > 0 && floor(num1) == num1)
            {
                double factorial = 1;
                for (int i = 1; i <= num1; i++)
                {
                    factorial *= i;
                }
                cout << "\t" << num1 << "! = " << factorial << endl;
            }
            else
            {
                cout << "Error: Factorial is not defined for negative or non-integer values." << endl;
            }
            break;
        case 14:
            if (num1 > 0)
                cout << "\t Log(" << num1 << ") = " << log10(num1) << endl;
            else
                cout << "Error: Logarithm is not defined for non-positive values." << endl;
            break;
        case 15:
            if (num1 >= 0)
                cout << "Radical(" << num1 << ") = " << sqrt(num1) << endl;
            else
                cout << "Error: Radical is not defined for negative values." << endl;
            break;
        default:
            cout << "Invalid Operator\n\n";
    }
}

// Function for binary operations
void doubleOperation(int op, double num1, double num2) {
    if (op == 4 && num2 == 0)
    {
        cout << "Error: Division by zero is not allowed." << endl;
    }
    else if (op == 5 && static_cast<int>(num2) == 0)
    {
        cout << "Error: Modulo by zero is not allowed." << endl;
    }
    else
    {
        switch (op)
        {
            case 1:
                cout << "\t" << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case 2:
                cout << "\t" << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case 3:
                cout << "\t" << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case 4:
                cout << "\t" << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                break;
            case 5:
                cout << "\t" << static_cast<int>(num1) << " % " << static_cast<int>(num2) << " = " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
                break;
            case 6:
                cout << "\t" << num1 << " ^ " << num2 << " = " << pow(num1, num2) << endl;
                break;
            default:
                cout << "\tInvalid Operator\n\n";
        }
    }
}

// Function to calculate the roots of quadratic equation
void calculateRoots(double a, double b, double c) {
    double discriminant = ((b * b) - (4 * a * c));
    if (discriminant > 0)
    {
        double r1 = (((-b) + sqrt(discriminant)) / (2 * a));
        double r2 = (((-b) - sqrt(discriminant)) / (2 * a));
        cout << "The equation has two roots And They Are : " << r1 << " & " << r2 << endl;
    }
    else if (discriminant == 0)
    {
        double r1 = ((-b) / (2 * a));
        cout << "The equation has only one root and it is: " << r1 << endl;
    }
    else
    {
        cout << "The equation has no real roots" << endl;
    }
}

// Function for geometric calculations
void geometricCalculations(int op) {
    double num1, num2, num3, num4;
    if (op == 1) // Perimeter
    {
        cout << "\n\t1 = Square\n\t2 = Rectangle\n\t3 = Triangle\n\t4 = Circle\n\t5 = Trapezoid\n\t6 = Diamond\n\tWhat Shape Do You Want?\n\t";
        cin >> op;
        switch (op)
        {
            case 1:
                cout << "Please Input Size of the Side :\t";
                cin >> num1;
                cout << "\nThe Perimeter of This Shape Equal to : " << 4 * num1 << endl;
                break;
            case 2:
                cout << "Please Input Size of the First Side :\t";
                cin >> num1;
                cout << "\nPlease Input Size of the Second Side :\t";
                cin >> num2;
                cout << "\nThe Perimeter of This Shape Equal to : " << (2 * (num1 + num2)) << endl;
                break;
            case 3:
                cout << "Please Input Size of the First Side :\t";
                cin >> num1;
                cout << "\nPlease Input Size of the Second Side :\t";
                cin >> num2;
                cout << "\nPlease Input Size of the Third Side :\t";
                cin >> num3;
                cout << "\nThe Perimeter of This Shape Equal to : " << (num1 + num2 + num3) << endl;
                break;
            case 4:
                cout << "Please Input the Circle Diameter :\t";
                cin >> num1;
                cout << "\nThe Perimeter of This Shape Equal to : " << (3.14 * num1) << endl;
                break;
            case 5:
                cout << "Please Input Size of the First Side :\t";
                cin >> num1;
                cout << "\nPlease Input Size of the Second Side :\t";
                cin >> num2;
                cout << "\nPlease Input Size of the Third Side :\t";
                cin >> num3;
                cout << "\nPlease Input Size of the Fourth Side :\t";
                cin >> num4;
                cout << "\nThe Perimeter of This Shape Equal to : " << (num1 + num2 + num3 + num4) << endl;
                break;
            case 6:
                cout << "Please Input Size of the Side :\t";
                cin >> num1;
                cout << "\nThe Perimeter of This Shape Equal to : " << 4 * num1 << endl;
                break;
            default:
                cout << "\tInvalid !!\n\n";
        }                   
    }
    else if (op == 2) // Area
    {
        cout << "\n\t1 = Square\n\t2 = Rectangle\n\t3 = Triangle\n\t4 = Circle\n\t5 = Trapezoid\n\t6 = Diamond\n\tWhat Shape Do You Want?\n\t";
        cin >> op;
        switch (op)
        {
            case 1:
                cout << "Please Input Size of the Side :\t";
                cin >> num1;
                cout << "\nThe Area of This Shape Equal to : " << num1 * num1 << endl;
                break;
            case 2:
                cout << "Please Input Size of the First Side :\t";
                cin >> num1;
                cout << "\nPlease Input Size of the Second Side :\t";
                cin >> num2;
                cout << "\nThe Area of This Shape Equal to : " << num1 * num2 << endl;
                break;
            case 3:
                cout << "Please Input Size of the Base :\t";
                cin >> num1;
                cout << "\nPlease Input Size of the Height :\t";
                cin >> num2;
                cout << "\nThe Area of This Shape Equal to : " << ((num1 * num2) / 2) << endl;
                break;
            case 4:
                cout << "Please Input the Circle Radius :\t";
                cin >> num1;
                cout << "\nThe Area of This Shape Equal to : " << (3.14 * num1 * num1) << endl;
                break;
            case 5:
                cout << "Please Input Size of the Little Base :\t";
                cin >> num1;
                cout << "\nPlease Input Size of the Big Base:\t";
                cin >> num2;
                cout << "\nPlease Input Size of the Height :\t";
                cin >> num3;
                cout << "\nThe Area of This Shape Equal to : " << (((num1 + num2) * num3) / 2) << endl;
                break;
            case 6:
                cout << "Please Input Size of the Little Radius :\t";
                cin >> num1;
                cout << "\nPlease Input Size of the Big Radius:\t";
                cin >> num2;
                cout << "\nThe Area of This Shape Equal to : " << ((num1 * num2) / 2) << endl;
                break;
            default:
                cout << "\tInvalid !!\n\n";
        }   
    }
    else if (op == 3) // Volume
    {
        cout << "\n\t1 = Square Cube\n\t2 = Rectangle Cube\n\t3 = Pyramid\n\t4 = Sphere\n\tWhat Shape Do You Want?\n\t";
        cin >> op;
        switch (op)
        {
            case 1:
                cout << "Please Input Size of the Side :\t";
                cin >> num1;
                cout << "Please Input Size of the Height :\t";
                cin >> num2;
                cout << "\nThe Volume of This Shape Equal to : " << ((num1 * num1) * num1) << endl;
                break;
            case 2:
                cout << "Please Input Size of the First Side :\t";
                cin >> num1;
                cout << "\nPlease Input Size of the Second Side :\t";
                cin >> num2;
                cout << "Please Input Size of the Height :\t";
                cin >> num3;
                cout << "\nThe Volume of This Shape Equal to : " << (num3 * (num1 * num2)) << endl;
                break;
            case 3:
                cout << "Please Input Size of the First Side :\t";
                cin >> num1;
                cout << "\nPlease Input Size of the Second Side :\t";
                cin >> num2;
                cout << "\nPlease Input Size of the Height :\t";
                cin >> num3;
                cout << "\nThe Volume of This Shape Equal to : " << ((((num1 * num2) / 2) * num3) / 3) << endl;
                break;
            case 4:
                cout << "Please Input the Circle Radius :\t";
                cin >> num1;
                cout << "\nThe Volume of This Shape Equal to : " << (((num1 * num1) * 3.14) * (4 / 3)) << endl;
                break;
            default:
                cout << "\tInvalid !!\n\n";
        }
    }
}

int main()
{
    int operation;
    double num1, num2, num3;
    char continueOption;

    do
    {
        cout << "\t\tWelcome To My Calculator\n\n";
        cout << "\t1 = Single Operation\n(Sin, Cos, Tan, Cot, ARCSin, ARCCos, ARCTan, ARCCot, Factorial, Sinh, Cosh, Tanh, Coth, Log, Radical)\n\n";
        cout << "\t2 = Double Operation\n(Sum, Deduce, Multiplication, Division, Modulo, Power)\n\n";
        cout << "\t3 = Calculate the Roots of the 2nd Degree Equation\n\n";
        cout << "\t4 = Geometric Calculations\n(Perimeter, Area, Volume)\n\n";
        cout << " Please Choose What Do you Want :\t";
        cin >> operation;
        cout << "\n";

        if (operation == 1)
        {
            cout << "\n 1 = sin\n 2 = cos\n 3 = tan\n 4 = cot\n 5 = ARCSin\n 6 = ARCCos\n 7 = ARCTan\n 8 = ARCCot\n 9 = Sinh\n 10 = Cosh\n 11 = Tanh\n 12 = Coth\n 13 = Factorial\n 14 = Log(10 Base)\n 15 = Radical\n";
            cout << "Please Enter An Operator :\t";
            cin >> operation;
            cout << "Please Input The Number :\n\t";
            cin >> num1;
            singleOperation(operation, num1);
        }
        else if (operation == 2)
        {
            cout << "Please Enter An Operator :\n";
            cout << "1 = Sum (+)\n2 = Deduce (-)\n3 = Multiplication (*)\n4 = Division (/)\n5 = Modulo (%)\n6 = Power (^)\n\t";
            cin >> operation;
            cout << "Please Enter The First Number :\n\t";
            cin >> num1;    
            cout << "Please Enter The Second Number :\n\t";
            cin >> num2;
            doubleOperation(operation, num1, num2);
        }
        else if (operation == 3)
        {
            cout << "Please Input The A : \n\t";
            cin >> num1;
            cout << "Please Input The B : \n\t";
            cin >> num2;
            cout << "Please Input The C : \n\t";
            cin >> num3;
            calculateRoots(num1, num2, num3);
        }
        else if (operation == 4)
        {
            cout << "\t1 = Perimeter\n\t2 = Area\n\t3 = Volume\n\t\tWhat Do You Want :\t";
            cin >> operation;
            geometricCalculations(operation);
        }
        cout << " \tDo You Want To Continue ? (Y/N)\n\t";
        cin >> continueOption;                
    } 
    while (continueOption == 'Y' || continueOption == 'y');
    cout << "See you";
    return 0;
}
