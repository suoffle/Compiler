# Compiler

### __0. 이전 Compiler-3 수정 사항__
  - struct를 정의할 때, 자기 자신을 포함할 수 없는 경우를 해결
    - id->type->size가 0인 경우(아직 type의 크기가 정의되지 않은 struct) syntax error가 발생하게 하였다.
  - N_FOR_EXP 노드가 llink를 제대로 인식하지 못하는 문제 해결
    - sem_for_expression에서 N_FOR_EXP인 경우 llink가 아닌 rlink의 타입을 검사하는 것을 확인하여, 해당 부분을 llink로 수정하였다.
  - isPointerOrArrayType 함수의 중복 선언 오류 확인 및 수정
<br><br>
---

### __1. 요약__
- scope depth를 고려한 상위 명령문 정보와 level값 계산 및 저장 코드 추가
- 현재까지 구현한 컴파일러를 시멘틱 트리(semantic tree), 어셈블리 코드, 인터프리터의 결과를 통해 분석하고 확인하였다.
<br><br>
---

### __2. 구현 및 확인 내용__
#1 명령문의 상위 명령문의 정보(return, continue, break, case) 정보 추가 
#2 level(scope depth) 값 계산 및 저장
#2 시멘틱 트리
  - type과 kind, 스택 프레임(혹은 activation record)에서의 주소, level(scope depth), 주소와 offset 확인
  - 트리의 구성 요소 및 순서 확인
#3 어셈블리 코드
  - label 종류와 각 스택 프레임의 주소 공간 확보 확인
  - 변수 및 함수 주소 가져오기 및 수행 여부 확인
  - 명령어의 적확성 확인
#4 인터프리터 결과
  - symbol table 확인
  - symbol table을 이용해 수정된 symbol 값 확인  
<br><br>
  
### __*아직 해결하지 못한 부분__  
실수 상수의 값(literal)이 literal table에서 값이 아닌 주소로 되어 있다.
