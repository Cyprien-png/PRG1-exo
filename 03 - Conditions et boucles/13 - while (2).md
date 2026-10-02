# `while` (2)

Que va afficher à l'exécution chacun des groupes d'instructions ci-dessous ?

~~~cpp
// 1
int i = 0;
while (i <= 5) 
   i++;
cout << i;
~~~
6

<details>
<summary>Solution</summary>

~~~
6
~~~
</details>

~~~cpp
// 2
int i = 0, j = 0;
while (i <= 5) 
   i += j++;
cout << i << ' ' << j;
~~~
```
0 0
0 += 0
0 1
0 += 1 = 1
1 2
1 += 2 = 3
3 3
3 += 3 = 6
6 4
```
6 4

<details>
<summary>Solution</summary>

~~~
6 4
~~~
</details>


~~~cpp
// 3
int i = 0, j = 0;
while (i <= 5) 
   i += ++j;
cout << i << ' ' << j;
~~~
```
0 0
0 += 1 = 1
1 1
1 += 2 = 3
3 2 
3 += 3 = 6
6 3
```
6 3

<details>
<summary>Solution</summary>

~~~
6 3
~~~

</details>

~~~cpp
// 4
int i = 0, j = 0;
while (j <= 5) 
   i += j++;
cout << i << ' ' << j;
~~~
```
0 0
0 += 0
0 1
0 += 1 = 1
1 2
1 += 2 = 3
3 3
3 += 3 = 6
6 4
6 += 4 = 10
10 5
10 += 5 = 15
15 6
```
15 6

<details>
<summary>Solution</summary>

~~~
15 6
~~~

</details>

~~~cpp
//5
int i = 0, j = 0;
while (j <= 5)
   i += ++j;
cout << i << ' ' << j;
~~~
```
0 0
0 += 1 = 1
1 1
1 += 2 = 3
3 2
3 += 3 = 6
6 3
6 += 4 = 10
10 4
10 += 5 = 15
15 5
15 += 6 = 21
21 6 

```
21 6

<details>
<summary>Solution</summary>

~~~
21 6
~~~

</details>

~~~cpp
// 6
int i = 0, j = 0;
while (i <= 5) i += 2; j++;
cout << i << ' ' << j;
~~~
6 1

<details>
<summary>Solution</summary>

~~~
6 1
~~~

Notons que proprement indenté, le code est 

~~~cpp
int i = 0, j = 0;
while (i <= 5) 
   i += 2; 
j++;
cout << i << ' ' << j;
~~~

et `j++;` n'est donc pas dans la boucle
</details>
