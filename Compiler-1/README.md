# Compiler

1. 요약:  
 입력 문자열은 lex.yy.c에서 토큰 단위로 분리되고, y.tab.c에서 해당 토큰을 받아 정의된 문법 규칙에 따라 문법 분석을 한다. 이때 각 토큰의 번호는 y.tab.h에 정의되어 lex.yy.c와 y.tab.c의 토큰이 공유된다.

<br>

2. 구현 내용
- #1 prac.l: 입력 문자열을 정의된 토큰 단위로 분리하는 Lex Analyzer 정의 파일.
- #2 prac.y: C언어의 일부 문법(syntax)을 정의해 놓은 Syntax Analysis 파일.

<br>

3. 수행 방법
- lex prac.l &nbsp;&nbsp;->  &nbsp;&nbsp; lex.yy.c 파일 생성
- yacc -d prac.y  &nbsp;&nbsp;->  &nbsp;&nbsp; y.tab.c 파일, y.tab.h 파일 생성

<br>

1\) 입력 문자열    
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↓  
2\) lex.yy.c: 입력 문자열을 토큰으로 분리하는 코드 (문자열 -> 토큰)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↓  
3\) y.tab.c:  토큰을 받아 문법 규칙에 맞는지 검사하는 코드 (토큰 -> 문법 분석)  

<br>

\# y.tab.h: 각 토큰의 번호가 정의된 헤더 파일.
