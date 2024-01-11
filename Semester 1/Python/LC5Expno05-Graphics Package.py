from Modules.graphics.rectangle import area as rect_area, perimeter as rect_perimeter
from Modules.graphics.circle import area as circle_area, perimeter as circle_perimeter
from Modules.graphics.threeDgraphics.cuboid import surface_area as cuboid_surface_area, volume as cuboid_volume

length_rect = float(input("Enter the length of the rectangle: "))
width_rect = float(input("Enter the width of the rectangle: "))

radius_circle = float(input("Enter the radius of the circle: "))

length_cuboid = float(input("Enter the length of the cuboid: "))
width_cuboid = float(input("Enter the width of the cuboid: "))
height_cuboid = float(input("Enter the height of the cuboid: "))

print("\nRectangle Area:", rect_area(length_rect, width_rect))
print("Rectangle Perimeter:", rect_perimeter(length_rect, width_rect))

print("\nCircle Area:", circle_area(radius_circle))
print("Circle Perimeter:", circle_perimeter(radius_circle))

print("\nCuboid Surface Area:", cuboid_surface_area(length_cuboid, width_cuboid, height_cuboid))
print("Cuboid Volume:", cuboid_volume(length_cuboid, width_cuboid, height_cuboid))
