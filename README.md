# TP2_Estrutura_De_Dados
 A Practical Exercise on Sorting Data Structures

<h2> The problem </h2> 
<p> Rick Sanchez is a intergalactical scientist that receives many invitations for lectures around the universe. As he usually accepts the invite, he reserves a <b>T</b> time in minutes for travelling across the universe for each month. This unique <b>T</b> time is applied for every month. </p>
<p> Rick wants to automatize his lectures agenda and so needs my help. He wants a program that, given the numbers of planets <b>P</b> and a <b>t</b> duration time that he will be staying in each planet, returns a sequence of planets that he can travel to for each month always respecting the <b>T</b> time that he setted as the maximum amount of time for every month.</p>
<p> The thing is that he wants to visit as most planets possible he can visit every month, so he wants to always visit the <b>k</b> planets with the lowest <b>t</b> duration of visit. Furthermore, he needs that every sequence of planets visited on each month be ordered by alphabetical order, independent of the <b>t</b> duration of visit of those planets.</p>
<p> Moreover, he assures that I can order the planets by <b>t</b> duration using a <b>stable and O(n(ln(n))) algorithm</b> and a <b>O(n*k) algorithm</b> (k is the number of letters of the planet's name) to order alphabetically the planets.</p>

<h2>Inputs and Outputs</h2>
<p>The first line of an input instance have 3 variables:</p>
<p> T: is the maximum amount of time that Rick wants to travel accross the universe for every month.</p>
<p> P: the total number  of planets that he will be visiting.</p>
<p> x: the lenght of the planets names.</p>
<p> After the first line, there will be P inputs with 2 variables:</p>
<p> t : the duration of visit of the planet</p>
<p> name: a x lenght string informing the planets name</p>
<p> The output of the program must be:</p>
<p> For every <b>M</b> month (beginning at 1) , an alphabetical ordered sequence of planets that will be visited in that <b>M</b> month informing:</p> 
<p> M: the month visitation index</p>
<p> cp: the planets name</p>
<p> t: the duration of visit of the planet.</p>

