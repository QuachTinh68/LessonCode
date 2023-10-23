import cv2

path = r'D:\Pictures\hinh-nen-may-tinh-4k-game9-min.jpg'

img = cv2.imread(path)

cv2.imshow('Load image', img)
cv2.waitKey(3000)
