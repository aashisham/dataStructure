# Tower of Hanoi

## Algorithm 
Assume there are n-plates or disks.

1. Move upper n-1 disk from source X to temp Z.
2. Move the largest disk from source X to destination.
3. Move n-1 disk from temp Z to destination Y.

### Procedures :
```
    (n-1, S, D, temp) S->temp 
    (n, S, temp, D) S->D 
    (n-1, temp, S, D) temp->D
```    
