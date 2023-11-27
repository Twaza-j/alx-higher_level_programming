#!/usr/bin/python3
"""A class that defines a rectangle with private attributes width and height"""


class Rectangle:
    """This represents a rectangle"""

    def __init__(self, width=0, height=0):
        """Initializes a new instance of this Rectangle class
        Args:
            width: The width of the rectangle
            height: The height of the rectangle
        Raises:
            TypeError: if size is not integer
            ValueError: if size is less than zero
        """
        self.width = width
        self.height = height

    @property
    def width(self):
        """
        Getter method that retrieves the width

        Returns: The width of the rectangle.
        """
        return self.__width

    @width.setter
    def width(self, value):
        """
        Setter method that sets the widt

        Args:
            value: The width value to set.

        Raises:
            TypeError: If the width is not an integer.
            ValueError: If the width is less than 0.
        """
        if not isinstance(value, int):
            raise TypeError("width must be an integer")
        if value < 0:
            raise ValueError("width must be >= 0")
        self.__width = value

    @property
    def height(self):
        """
        Getter method that retrieves  the height.

        Returns:
            The height of the rectangle.
        """
        return self.__height

    @height.setter
    def height(self, value):
        """
        Setter method that sets the height

        Args:
            value: The height value to set

        Raises:
            TypeError: If the height is not an integer.
            ValeError: If the height is less than 0.
        """
        if not isinstance(value, int):
            raise TypeError("height must be an integer")
        if value < 0:
            raise ValueError("height must be >= 0")
        self.__height = value
