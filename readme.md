# Reverse Engineering Cheatsheet

```text
v4 = BYTE6(buf);
BYTE6(buf) = BYTE2(v26);
BYTE2(v26) = v4;
```

: is equal to:

```python
v4 = buf[6]
buf[6] = buf[2]
buf[2] = v4
```
