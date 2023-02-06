- strcpy()
if (dest == NULL) {
    return NULL;
}

不知道為何要加這段，
如果dest位被分配到在傳進function時就會報錯，
這段應該無用武之地。

- strcpy()

char* ptr = dict;
return ptr;
dict隨迴圈移動到最後一項，
須回傳&dict[0]於main。


- memset()
unsigned char* ptr = (unsigned char*) str;
網路上實作的方法都是強制轉成unsigned char*，
但原因不明。
