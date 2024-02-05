from setuptools import find_packages
from setuptools import setup

setup(
    name='leg_detector_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('leg_detector_msgs', 'leg_detector_msgs.*')),
)
