import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s = nextInt()
    val d = nextInt()

    if (s < d) {
        println(-1)
        return@with
    }
    val a = (s + d) / 2
    val b = (s - d) / 2
    if (a + b==s && a - b==d)
        println("$a $b")
    else
        println(-1)
}