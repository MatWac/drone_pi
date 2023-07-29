from setuptools import find_packages
from setuptools import setup

setup(
    name='mpu6050_publisher',
    version='1.0.0',
    packages=find_packages(
        include=('mpu6050_publisher', 'mpu6050_publisher.*')),
)
