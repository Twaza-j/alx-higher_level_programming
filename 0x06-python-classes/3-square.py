#!/usr/bin/python3
# Author: Agaba Twazagye
"""Defines a square"""


class Square:
    """A class that represents a square"""

    def __init__(self, size=0):
        """Initializing the square class
        Args:
            size: the size of the square defined
        Raises:
            TypeError: if size is not integer
            ValueError: if size is less than zero
        """

        if size < 0:
            raise ValueError('size must be >= 0')

        self.__size = size

    def area(self):
        """
        Calculates area of the square
        Returns: The square of the size
        """
        return self.__size ** 2
