# Compiler

### __0.이전 Compiler-3 수정 사항__
  - struct를 정의할 때, 자기 자신을 포함할 수 없는 경우를 해결하였다.
    - id->type->size가 0인 경우(아직 type의 크기가 정의되지 않은 struct) syntax error가 발생하게 하였다.
  - N_FOR_EXP 노드가 llink를 제대로 인식하지 못하는 것을 확인하여 이를 수정하였다.
    - sem_for_expression에서 N_FOR_EXP인 경우 llink가 아닌 rlink의 타입을 검사하는 것을 확인하여, 해당 부분을 llink로 수정하였다.


### __1.요약__
현재까지 구현한 컴파일러를 통해 시멘틱 트리(semantic tree), 어셈블리 코드, 인터프리터 결과를 출력하였다.


### __2.구현 내용__
