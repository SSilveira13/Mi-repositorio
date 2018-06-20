/*
    utest example : Unit test examples.
    Copyright (C) <2016>  <Mauricio Davila>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../testing/inc/main_test.h"
#include "../inc/ArrayList.h"
#include "../inc/Employee.h"



int main(void)
{
        startTesting(1);//Funciona newArrayList
        startTesting(2);//Funciona add
        startTesting(3);//Funciona deleteArrayList preguntar------------------
        startTesting(4);//Funciona len
        startTesting(5);//Funciona get
        startTesting(6);//Funciona contains
        startTesting(7);//Funciona set
        startTesting(8);//Funciona Remove
        startTesting(9);//Funciona clear
        startTesting(10);//Funciona clone
        startTesting(11);//Funciona push
        startTesting(12);//Funciona indexOf
        startTesting(13);//Funciona isEmpty
        startTesting(14);//Funciona pop
        startTesting(15);//NO Funciona subList
        startTesting(16);//NO Funciona containsAll
        startTesting(17);// sort---------------------------

    return 0;
}





