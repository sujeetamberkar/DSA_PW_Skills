# Infix Expressions 
    -1) Human readable form 
        2 + 6 * 4 / 8 - 3
        2 + 24 / 8 - 3
        2 + 3 - 3
        2

    if str = "2 + 6 * 4 / 8 - 3"


## Rules 
    - 1) If S [i] is a digit, then push into val stack
    - 2) If S [i] is opperator (+,-,*,/)
            a) If OP stack is empty: 
                    Then Push it directly 

            b) If pr(stack.top()<S[i]) priority of "+, -" is 1,   "/, * " is 2 

            c) if pr(stacl.top()>= S[i] )
                    KAM KARO
                Solve until you get priority less than "*,/" use the val in stack
                Pop 1 Opperator 
                Pop 2 Opperator 

                the UpperVala = Val 2

                int answer = value1 OP value2

                Push the answer into val STACK

            d) Kam karo until the stack diesnt get over

## Understanding Infix Expressions
- **Human-readable form**: Infix expressions are written as `operand1 operator operand2`, which is easy to read and understand. For instance:
    ```
    2 + 6 * 4 / 8 - 3
    ```

## Code Execution Steps
1. **Digit Handling**: 
    - If `s[i]` is a digit, push it onto the `val` stack after converting it from ASCII to an integer.

2. **Operator Handling**: 
    - If `s[i]` is an operator (`+`, `-`, `*`, `/`), determine its precedence and handle it accordingly.

### Rules for Operator Handling
- If the operator stack (`op`) is empty, push the operator onto the stack.
- If the incoming operator has higher precedence than the top of the operator stack, push it onto the stack.
- If the incoming operator has equal or lower precedence, process the operators from the stack until you find an operator with lower precedence or the stack is empty:
    - Pop the top operator from the `op` stack.
    - Pop the top two values from the `val` stack.
    - Apply the operator to these values.
    - Push the result back onto the `val` stack.
- Continue processing until there are no more operators left in the input.

### Priority Function
- The `priority` function assigns a numerical precedence level to operators:
    - `+`, `-` have precedence `1`.
    - `*`, `/` have precedence `2`.

### Solve Function
- The `solve` function applies an operator to two values and returns the result.

## Example Evaluation
Given the string `2 + 6 * 4 / 8 - 3`, the code evaluates as follows:
- Convert to human-readable steps:
    ```
    2 + 6 * 4 / 8 - 3
    2 + (6 * 4) / 8 - 3
    2 + 24 / 8 - 3
    2 + 3 - 3
    2
    ```
- The final result pushed onto the `val` stack will be `2`.


