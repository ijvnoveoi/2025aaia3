# �ϥ�python������1
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack)#�r�ꪺ����
        N = len(needle)#�r�ꪺ����
        for i in range(H-N+1):#�n�O�o+1
            if haystack[ i : i+N ] == needle:#��쪺��
                return i#���m����
        return -1  #�S�����
