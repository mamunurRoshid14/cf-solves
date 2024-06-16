//https://codeforces.com/profile/mamunur_roshid_517
        fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        var aa = readLine()!!
        while (aa.isNotEmpty() && aa.last() == '0') {
            aa = aa.dropLast(1)
        }
        if (aa.isNotEmpty()) {
            aa = aa.dropLast(1)
        }
        println(aa)
    }
}
                //Link: https://codeforces.com/contest/1910/problem/A