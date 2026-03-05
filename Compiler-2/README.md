# Compiler

1. 요약
- 이전(Compiler-1)은 단순하게 문법 규칙이 맞는지(해당하는 규칙이 존재하는지)를 평가하는 코드이고, 이번(Compiler-2)는 정의된 문법 규칙({ })에 따라 액션 코드를 수행하도록 하였다.
    - prac.y: shift/reduce 동작을 수행하며 문법 규칙을 분석한다.
    - 액션 코드: 규칙이 reduce될 때 func.c의 함수를 호출하고, syntax tree를 구성한다.  

2. 구현 내용
- #1 prac.l: yylval를 YYSTYPE(long) 타입으로 확장하였다. yylval는 lex에서 값을 전달 받는 전역 변수이다.
    - 예를 들어 1111이라는 입력이 들어오면,
      - token = INTEGER_CONSTANT
      - yylval = 1111
- #2 prac.y: 액션 코드 추가 및 액션 코드를 수행하기 위한 func.c 함수 선언을 추가하였다.
- #3 func.c:
    - syntax tree 생성: 추후에 구현할 semantic 분석을 위해 구현.
    - Initialize(): 초기 symbol을 등록.(printf, scanf, malloc)
    - error(): syntax 오류, 오류 타입을 출력하는 함수.
- #4 pracmain.c: initialize() -> yyparse() -> print_ast() 순으로 진행되는 메인 코드이다.
    - initialize(): 초기 symbol 등록.
    - yyparse(): 입력 문자열을 lex를 통해 token을 받아 구문 분석.
    - print_ast(): syntax tree 출력
 
