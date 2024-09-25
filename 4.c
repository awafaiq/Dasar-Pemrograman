#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned long long n, m; scanf("%llu %llu", &n, &m);
    unsigned long long rc, rz, cc, cz; scanf("%llu %llu %llu %llu", &rc, &cc, &rz, &cz);

    unsigned long long distance = llabs(rc - rz) + llabs(cc - cz);

    if(n == 2 || m == 2){
        if (distance < 4){
            if (rc == rz || cc == cz){
                if (distance == 1){
                    printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam 1 detik.\"");
                }
                else {
                    printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 2 kali.\"");
                }
            }
            else {
                printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam %llu detik.\"", distance);
            }
        }
        else {
            printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 2 kali.\"");
        }
    }

    else if(n == 3 || m == 3){
        if ((rz == n && cz == m) || (rz == 1 && cz == 1) || (rz == 1 && cz == m) || (rz == n && cz == 1)){
            if (distance < 4){
                if (rc == rz || cc == cz){
                    if (distance == 1){
                    printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam 1 detik.\"");
                    }
                    else {
                    printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 2 kali.\"");
                    }
                }
                else {
                printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam %llu detik.\"", distance);
                }
            }
            else {
            printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 2 kali.\"");
            }
        }

        else {
            if (distance < 4){
                if (rc == rz || cc == cz){
                    if (distance == 1){
                    printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam 1 detik.\"");
                    }
                    else {
                    printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 3 kali.\"");
                    }
                }

                else {
                printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam %llu detik.\"", distance);
                }
            }

            else {
            printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 3 kali.\"");
            }
        }
    }

    else {
        if ((rz == n && cz == m) || (rz == 1 && cz == 1) || (rz == 1 && cz == m) || (rz == n && cz == 1)){
            if (distance < 4){
                if (rc == rz || cc == cz){
                    if (distance == 1){
                    printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam 1 detik.\"");
                    }
                    else {
                    printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 2 kali.\"");
                    }
                }
                else {
                printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam %llu detik.\"", distance);
                }
            }
            else {
            printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 2 kali.\"");
            }
        }

        else if(cz == 1 || rz == 1 || cz == m || rz == n){
            if (distance < 4){
                if (rc == rz || cc == cz){
                    if (distance == 1){
                    printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam 1 detik.\"");
                    }
                    else {
                    printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 3 kali.\"");
                    }
                }
                else {
                printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam %llu detik.\"", distance);
                }
            }
            else {
            printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 3 kali.\"");
            }
        }
        else {
            if (distance < 4){
                if (rc == rz || cc == cz){
                    if (distance == 1){
                    printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam 1 detik.\"");
                    }
                    else {
                    printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 4 kali.\"");
                    }
                }
                else {
                printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam %llu detik.\"", distance);
                }
            }
            else {
            printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 4 kali.\"");
            }
        }
    }
}