from setuptools import find_packages
from setuptools import setup

setup(
    name='industrial_turtle',
    version='1.0.0',
    packages=find_packages(
        include=('industrial_turtle', 'industrial_turtle.*')),
)
