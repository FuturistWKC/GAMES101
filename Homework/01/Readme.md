# Formula
![Formula01](01.png)  
![Formula02](02.png)
# Code
**model**
```
    float cosValue = cos(rotation_angle / 180 * acos(-1));
    float sinValue = sin(rotation_angle / 180 * acos(-1));

    model << cosValue, -sinValue, 0, 0,
             sinValue,  cosValue, 0, 0,
                0,         0,     1, 0,
                0,         0,     0, 1;
```
**projection**
```
    float t = tan(eye_fov/2/180*acos(-1));

    projection << -1/t*aspect_ratio, 0,    0,                         0,
                          0,         -1/t, 0,                         0,
                          0,         0,    (zNear+zFar)/(zNear-zFar), 2*zNear*zFar/(zFar-zNear),
                          0,         0,    1,                         0;

```
# Result
![Result](03.png)
