#include<string.h>

struct ListNode{
  int val;
  ListNode* next;
  ListNode(int n){
    n = val;
    next = NULL;
  }  
}

class Operation{
private:
  int highestBit1, highestBit2;
  int n1, n2;

  ListNode* reverseList(ListNode* head){
    ListNode* prev = nullptr;
    ListNode* current = head;
    while(current){
      ListNode* next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }
    return prev;
  }

  void deleteList(ListNode* head){
    while(head){
      ListNode* deleter = head;
      head = head->next;
      delete deleter;
    }
  }

  int findHighestBit(int& in){
    int n = 0;
    for(int i = 0;i < 32;i++)
      if((in>>i)&1)
        n = i;
    return n;
  }

  bool getSign(){
    return !((n1>>31)^(n2>>31));
  }

  void multiply(int& n1, int& n2){
    if(!n1)
      return 0;

    bool sign = getSign();
    int a = 0;

    for(int i = 0;i < 32;i++){
      if(()&1){
        plus
      }
    }

    return (sign) ? () : -();
  }

  void divide(int& n1, int& n2){
    if(!n1)
      return 0;

    bool sign = getSign();
  }

  void plus(int& n1, int& n2){
    bool carry = false;

    for(int i = 0;i < 32;n--){
      bool doCarry = false;
      if(carry){
        doCarry = (()>>i)&1;
        () = (())^(1<<i);
      }
      if((in2>>i)&1){
        if(!doCarry)
          doCarry = (()>>i)&1;
        () = (())^(1<<i);
      }
      carry = doCarry;
    }
  }

  void minus(int& n1, int& n2){
    bool carry = false;

    for(int i = 0;i < 32;n--){
      bool doCarry = false;
      if(carry){
        doCarry = !((()>>i)&1);
        () = (())^(1<<i);
      }
      if((in2>>i)&1){
        if(!doCarry)
          doCarry = !((()>>i)&1);
        () = (())^(1<<i);
      }
      carry = doCarry;
    }
  }

  void setup();
public:
  Operation(const int& in1, const int& in2){
    n1 = in1;
    n2 = in2;
    highestBit1 = findHighestBit(&n1);
    highestBit2 = findHighestBit(&n2);
  }

  void displayOperation(){
    bool sign = (n1 >= 0);
    ListNode* head = new ListNode(0);
    ListNode* temp = head;
    for(; != 0; /= 10){
      temp->next = new ListNode(%10);
      temp = temp->next;
    }
    ListNode* deleter = head;
    head = head->next;
    delete deleter;
    head = reverseList(head);
    ListNode* tempHead = head;
    (sign) ? digitalWrite(positivePin, HIGH) : digitalWrite(negativePin, HIGH);
    delay(800);
    while(tempHead){
      digitalWrite(head->val + 2, HIGH);
      delay(800);
      digitalWrite(head->val + 2, LOW);
      delay(800);
      tempHead = tempHead->next;
    }
    (sign) ? digitalWrite(positivePin, LOW) : digitalWrite(negativePin, LOW);
    deleteList(head);
    delay(800);
  }

  void multiplyOperation(){
    multiply(n1, n2);
  }

  void divideOperation(){
    divide(n1, n2);
  }

  void plusOperation(){
    plus(n1, n2);
  }

  void minusOperation(){
    minus(n1, n2);
  }
};

char operationChoice = '';
const int positivePin = 12;
const int negativePin = 13;

void blinkAll();
void clearAll();

void setup() {
  // put your setup code here, to run once:
  for(int i = 2;i < 14;i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  in1 = in2 = 0;

  if(in2 == 0){
    blinkAll();
  }
  else{
    Operation op(in1, in2);
    switch(operationChoice){
      case "+":
        op.plusOperation();
        break;
      case "-":
        op.minusOperation();
        break;
      case "*":
        op.multiplyOperation();
        break;
      case "/":
        op.divideOperation();
        break;
      default:
        blinkAll();
        break;
    }
    op.displayOperation(int in1);
  }
}

void blinkAll(){
  for(int i = 2;i < 14;i++){
    digitalWrite(i, HIGH);
  }
  delay(800);
  clearAll();
}

void clearAll(){
  for(int i = 2;i < 14;i++){
    digitalWrite(i, LOW);
  }
  delay(800);
}