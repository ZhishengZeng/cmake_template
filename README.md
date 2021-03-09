# study_cmake

## study_cmake is The main project
## 'a,b,c' are subprojects of study_cmake

```
study_cmake
  |a
  |b
  |c
```


```bash
git clone https://github.com/ZhishengZeng/study_cmake.git
cd study_cmake && mkdir build && cd build && cmake .. && make
./src/a/main_a
./src/b/main_b
./src/c/main_c
./printABC
```
