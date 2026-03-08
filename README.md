# Compiler
컴파일러

### 사용 기술
- Lex
- Yacc
- C

### 개요
- Compiler-1: lex, yacc 파일 작성
    - lex: 입력 문자열 토큰 단위로 분리
    - yacc: 문법 규칙에 맞는지 여부를 분석한다.
      
- Compiler-2: action code, syntax tree
    - reduce 상황: 정의된 문법 규칙에 따라 액션 코드(action code)를 수행하도록 하였다.
    - syntax tree: 액션 코드를 수행하며 문법을 tree 구조로 생성한다.
      
- Compiler-3: semantic analyzer, semantic tree
    - semantic analyzer: 문법가 의미적(semantic)으로 옳은지를 판단하도록 구현하였다.
    - semantic tree: syntax tree에서 type, 주소 등이 추가된 tree 구조이다.
      
- Compiler-4: 구현한 컴파일러를 통해 시멘틱 트리(semantic tree), 어셈블리 코드, 인터프리터 결과를 출력하였다.

### Test_Case(보고서)
  - 구현한 코드를 바탕으로 test case를 만들어 실험한 결과와 결과의 이유를 작성하였다.
  - 구현 도중 발생했던 문제점이나 수정 사항 등을 기록하였다. 

<br>

> 참고 도서
도서명: "C언어와 컴파일러"  
저자: 유재우, 최재영, 신경희  
출판사: 숭실대학교출판부(SSUPRESS)  
출판연도: 2015  

