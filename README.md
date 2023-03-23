# CHI_Academy_LB1
Move and Copy Semantics

Цель: продемонстрирувать  свои способности при:
• реализации семантики копирования для класса с ресурсом
• реализации семантики перемещения для класса с ресурсом
• определение операции обработки ресурсоемких в копирования и перемещения заданий
• получении данныех из текстового файла с помощью объекта ifstream

Описание
Разработайте и запрограммируйте класс Тхt, который управляет динамически выделяемым массивом строк. При создании экземпляра класса Тхt объект ничего не получает или получает ссылку на неизменяемую строку. Если файл не существует, объект Тхt принимает безопасное пустое состояние. Если файл существует, конструктор с одним аргументом выделяет память для количества строк, содержащихся в файле, и копирует их в память. Чтобы просмотреть синтаксис для чтения из текстового файла с помощью объекта ifstream, см. класс istream
Класс Тхt включает следующие функции-члены:
• конструктор копирования;
• оператор присваивания копий;
• конструктор перемещения;
• оператор присваивания перемещения;
• деструктор;
• функция-член с именем size_t size () const, которая возвращает количество записей текстовых данных;
Определите свой класс и его реализацию в пространстве имен l1. Сохраните определение класса в файле заголовка с именем Txt.h, а определения функций-членов - в файле реализации с именем Txt.cpp.

Input
Текстовый файл с именем test.txt. Убедитесь, что вы включили этот файл в качестве аргумента командной строки.
Output
Результат этой программы зависит от скорости и вычислительной мощности машины, на которой вы запускаете программу. На выходе вы должны увидеть следующее:
• Размер всех объектов должен быть одинаковым.
• Операции копирования должны выполняться медленнее, чем операции перемещения.
Пример
Def Const        380 nanoseconds - a.size = 0
Cust Const  9982078037 nanoseconds - b.size = 124458
Cp Assig      422828094 nanoseconds - a.size = 124458
Mv Assig            761 nanoseconds - a.size = 124458
Cp Const     399876151 nanoseconds - c.size = 124458
Mv Const          1141 nanoseconds - d.size = 124458
Dest           429119369 nanoseconds