// recursivo
#include <stdio.h>

int max(int v[], int len, int index) {
    if (len == 0)
        return v[index];
    else {
        if (v[len - 1] > v[index])
            return max(v, len - 1, len - 1);
        else 
            return max(v, len - 1, index)
    }
}


// iterativo
#include <stdio.h>

int max(int v[], int len, int index) {
    if (len == 0)
        return v[index];
    
    int maxValue = v[index];
    
    for (int i = 0; i < len; i++) {
        if (v[i] > maxValue) {
            maxValue = v[i];
        }
    }
    
    return maxValue;
}
