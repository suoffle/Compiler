# Compiler

### __1. 요약__
- 시멘틱 분석기(semantic analyzer)를 구현하였다.
- 시멘틱 트리 출력 코드를 통해 N_PROGRAM(root)부터 leaf node까지 전체 구조를 확인할 수 있게 하였다.
- 실제 gcc를 통해 출력된 결과와 동일한 지를 확인하고, 차이점의 이유가 있는 경우 그 원인을 분석하였다.
  (Test Case-4 참조)

<br>
    
### __2. 구현 내용__
- #1 
