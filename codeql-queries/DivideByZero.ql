/**
 * Finds division-by-zero through deep function calls.
 */
import cpp

/**
 * A call that eventually leads to a division with 0 as the denominator.
 */
predicate leadsToDivideByZero(CallExpr call) {
  exists(FunctionCallTarget f, BinaryExpr bin, Literal zero |
    f.getName() = "dangerousDivide" and
    call.getTarget() = f and
    bin.getOperator() = "/" and
    bin.getRightOperand() = zero and
    zero.getValue() = "0"
  )
}

from CallExpr call
where leadsToDivideByZero(call)
select call, "This call can lead to a divide-by-zero through dangerousDivide()."
