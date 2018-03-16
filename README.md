
警告：未完成 
 
# MizuhaPiC 
谁说控制台不好用？黑白之间呈现的不仅仅是黑白单词。这控制台游戏引擎大概可以帮你应付大学cpp实例项目作业？ 
 
## 用法 
把文件全部拖进去就好 
 
## API 

### classes

#### Vector2
| Variables | type | usage |
|:-------------:|:-------------|
| x | float | X component of the vector |
| y | float | Y component of the vector |

| Functions | return type | usage |
|:-------------:|:-------------|
| normalized | Vector | Returns a vector have a magnitude of 1. |
| magnitude | float | Returns the length of this vector. |
| sqrMagnitude | float | Returns the squred length of this vector. |
| Dot | float |点乘|
| Project | float |投影|
| Angle | float |夹角|
| Distance | float |两向量终点距离|
| operator- | Vector2 |向量相减|
| operator+ | Vector2 |向量相加|
| operator* | Vector2 |乘上参数|
| operator/ | Vector2 |除以参数|
| operator== | Vector2 |是否等价|
| operator!= | Vector2 |否是等价|