# 問5 数値解析
$$ (1) \quad \lim_{n\to+\infty} \sum_{m=1}^n \frac {(-1)^{m-1}} m  = \log 2 $$
$$ (2) \quad \lim_{n\to+\infty} \sum_{m=0}^n \frac {(-1)^m} {2m+1} = \frac \pi 4 $$

---

## sub.c

```C
#include <stdio.h>
#include <math.h>
    
double sigma_1(double n)
{
    double result,result_old,d;
    
    result = 0.0;
    result_old = 0.0;
    for(int m=1; m<=n; m++)
    {
        result += pow(-1, m-1)/m;
        d = result - result_old;
        result_old = result;
    }
    
    return result;
}

double sigma_2(double n)
{
    double result,result_old,d;
    
    result = 0.0;
    result_old = 0.0;
    for(int m=0; m<=n; m++)
    {
        result += pow(-1, m)/(2*m+1);
        d = result - result_old;
        result_old = result;
    }
    
    return result;
}
```
---
## main.c
```C
#include <stdio.h>
#include <math.h>
#include "../include/sub.h"

#define N 1e6
#define D_MIN 1e-3
    
int main(void)
{
    double d_1,  d_2;
    
    d_1 = sigma_1(N)-log(2);
    printf("(1)\t%s\n", (fabs(d_1) <= D_MIN) ? "True":"False");
    
    d_2 = sigma_2(N)-(M_PI/4);
    printf("(2)\t%s\n", (fabs(d_2) <= D_MIN) ? "True":"False");
    
    return 0;
}
```
---
## 出力結果

[![](./image/result.png)](./image/result.png)

---
- [問1へ](https://github.com/Kouji-Tanaka/B4_Programming1 "Kouji-Tanaka/B4_Programming1")
- [問2へ](https://github.com/Kouji-Tanaka/B4_Programming2 "Kouji-Tanaka/B4_Programming2")
- [問3へ](https://github.com/Kouji-Tanaka/B4_Programming3 "Kouji-Tanaka/B4_Programming3")
- [問4へ](https://github.com/Kouji-Tanaka/B4_Programming4 "Kouji-Tanaka/B4_Programming4")
- [問6へ](https://github.com/Kouji-Tanaka/B4_Programming6 "Kouji-Tanaka/B4_Programming6")

<div>
    <a href="#">
        [Topへ]
    </a>
</div>
