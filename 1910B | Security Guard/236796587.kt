//https://codeforces.com/profile/mamunur_roshid_517
        fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        var aa = readLine()!!
        var in1 = Int.MAX_VALUE
        var in2 = -1
 
        for (j in aa.indices) {
            if (in1 == Int.MAX_VALUE && aa[j] == '-') {
                in1 = j
            } else if (aa[j] == '+') {
                in2 = j
            }
        }
 
        if (in1 < in2) {
            aa = aa.substring(0, in1) + aa[in2] + aa.substring(in1 + 1, in2) + aa[in1] + aa.substring(in2 + 1)
        }
 
        var f = true
        var cn = 0
 
        for (j in aa.indices) {
            if (aa[j] == '+') {
                cn++
            } else {
                cn--
            }
 
            if (cn < 0) {
                f = false
            }
        }
 
        if (f) {
            if (in1 < in2) {
                println("${in1 + 1} ${in2 + 1}")
            } else {
                println("1 1")
            }
        } else {
            println("-1")
        }
    }
}
                //Link: https://codeforces.com/contest/1910/problem/B