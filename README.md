# EarlyReturnKata


Step:

1. Add return

``` cpp
     Return<type> r;
```
    
2. Move value into return

``` cpp
r.set(value);
return r.value;
``` 

3. Add if clause

``` cpp
if (r.isSet) {
    return r.value;
} else {

}
``` 

4. move up a level
 a. if you are in a loop, duplicate outside and add a break;
5. expand else to everything in left in current block
6. invert if
7. repeat

