from setuptools import find_packages
from setuptools import setup

setup(
    name='people_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('people_msgs', 'people_msgs.*')),
)
