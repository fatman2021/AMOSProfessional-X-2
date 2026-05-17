
### 2020.12.27 : Welcome to the official AMOS Professional AGA (The X Project) source code repository.

You will find in this repository the entire source code of AMOS Professional AGA.
This source-code is published under the MIT licence, which means you can do anything you want from it as long as the copyright notice is present in both the modified source code and the boot screen of the application. Contrary to the initial François Lionet Repository, the application was updated to mention both official François Lionet's Amos Professional repository, and Amos Professional AGA repository.

François Lionet → original AMOS Professional 2.0

AmiDARK / Frédéric Cordier → AMOS Professional X and AGA modernization cordierfr@wanadoo.fr

---

This distribution is based on the repository created by marc365. https://github.com/marc365/AMOSProfessional
Thank you Marc365 for your work creating a compilable version of the Amos Professional source code!
I have included parts of your readme after this intro.

As explained here : https://softwareengineering.stackexchange.com/questions/317041/should-i-add-the-license-in-every-header-and-source-file#:~:text=1%20Answer&text=This%20is%20an%20old%20question,included%20with%20the%20source%20code.
The MIT License only requires that the license text available here : https://mit-license.org/ 
be included in all copies or substantial portions of the Software. This mean that the License.txt available in the repository fit the MIT license requirements.

This repository is 68k Assembly and was entirely restructured. It will be really different from the original François Lionet or Marc365 repositories..
Files names are now more talkative and organized by categories. It is better for developer teams as some files were explosed in parts to make updates easier by development teams.
It is powerful and runs like an operating system. Games and multimedia become exciting to program again, relying on your own skills instead of libraries.

This release is as-is and doesn't contain any installation or demos.
However, I have commented many parts of Amos Professional source code. It may be really useful for those that wants to learn how Amos Professional Internally works.


# AMOS Professional

based on the original 68000 source code by François Lionet (Thank you!)


# History
Some years ago there was discussion of re-development, but the work mentioned in [this article](http://www.amiworld.it/news/amos_upgrade_eng.html) was not made public, any collaborative efforts have disappeared. An archive was made available at a later date but was partially incomplete and difficult to build - this project fixes the build problems, but has no relation to any previous plans or news releases.


# AMOS PRO goes Public Domain!

> [01 dec 2012](https://web.archive.org/web/20130530022407/http://www.pianetaamiga.it)
In occasion of Pianeta Amiga 2012, Pietro Ghizzoni, current owner of AMOS Pro sources after Francois Lionet ceased development, has kindly agreed to release them as Public Domain. You can download the full package in advance from this link. Sources will be also put on Aminet in the next days.

> [09 oct 2017](https://www.facebook.com/groups/AmosPro/permalink/525528911118447/?comment_id=525722051099133&comment_tracking=%7B%22tn%22%3A%22R0%22%7D)
François said that Amos Professional source code was Adandoned and is now under MIT License.

> [14 jan 2020](https://www.facebook.com/francois.lionet.33/posts/10221277298060319)
François Lionet decide to put Amos Professional License under GPLv3 terms. The Amos Professional AGA (The X Project) is then canceled

> [26 apr 2020](https://github.com/AOZ-Studio/AMOS-Professional-Official)
François Lionet, finally decided to drop the idea to use LGPL v3 licence terms for the Amos Professional source code and came back to his initial choice of MIT License.
With this final decision, I decided to restart the Amos Professional AGA (The X Project).


# AMOS present and future

Amos Professional did get good improvements during 2019. These improvements added partial but interesting support for the AGA chipset.
With recent minding about future, I decided to restart the project in a more flexible way. It is now called "Amos Professional Unity".
The Amos Professional AGA (The X Project) is now stopped in its current shape/form. A new project is born and will replace the Amos Professional AGA (The X Project).
2021 should be the year of the Amos Professional Unity projet.
The official ["Amos Professional AGA (The X Project)"](http://amos-professional-aga.frederic-cordier.fr/?amos-professional-aga-x-version) mini website will be maintened to receive now updates for the "Amos Professional Unity" project.
Regards,
AmiDARK

# About official AMOS Professional Source Code repository.
> On 2020.04.26, François Lionet officially released Amos Professional source code on his own GitHub repository under MIT Licence type as it was initially planed by himself many years ago.<br>
> The link to get access to the official AMOS-Professional-Offical repository Source Code is here : https://github.com/Francaoz/AMOS-Professional-Official<br>
> The original AMOS-Professional-Official licence s available in the License.txt file of this project.<br>
> On 2020.05.01 François Lionet announced officially on his Facebook Page that he gives to Colin Vella the responsability to handle the Amos Professional Official Source Code GitHub repository. ( https://www.facebook.com/photo.php?fbid=10222434008617360&set=a.3542674563888&type=3&theater )

# About AMOS Professional X2 Project for AGA support.
> The project that did initially takes the name "Amos Professional X" was stopped. With the official release of Amos Professional under MIT Licence, I have reopened this project.
For the moment Source code is private but it will be released under the original MIT Licence when everything will be finished.

> I have much respect about the huge amount of work François did to create AMOS and AMOS Professional but, for the moment, and in respect to the MIT Licence terms capabilities (source : https://github.com/Francaoz/AMOS-Professional-Official/blob/master/LICENSE seen in the GitHub box about MIT Licence "A short and simple permissive license with conditions only requiring preservation of copyright and license notices. Licensed works, modifications, and larger works may be distributed under different terms and without source code." ) and not restricted by licence information added by François, I consider that improving AMOS Professional with AGA support is a larger work as it require me to makes many changes in many components of the AMOS Professional engine (copper list, sprites, bob, iff/ilbm, load/save datas, internal structures, etc.).<br>
With these, I prefer not release the source code for the moment.<br>
Source code will probably be released for "educational purposes" when the project will be finished (and more especially because it was initially planed with the AMOS Factory team to include this major update inside their major updates, and I want to respect this engagment with the AMOS Factory team)

# 2020.05.06 : Project reorganization

During integration of AGA support to the original Amos Professional 2.00 (ECS), I discovered that due to the fact that AMOS Professional uses static structures for datas such as packed screen, blitter objects, icons, screens, but not only these; I had to made changes that did potentially break double direction compatibility between original Amos Professional 2.00 (ECS) and new Amos Professional 3.00 AGA (X version). Rework entirely the bank system and data structure to be dynamic should be too long, and may not assure a total compatibility between original Amos Professional 2.00 (ECS) and new Amos Professional 3.00 AGA (X version).

This problem forces me to take a decision concerning the future of the development of AGA support for Amos Professional :

 I must proceed to a complete reorganization of both Source Code,  and file names for the releases.

This mean, for example, that the new Amos Professional AGA 3.00 will use an AmosProAGA.library instead of the original AMOS.library.
This was required to be sure that any Amiga users can have both original Amos Professional 2.00  (ECS) and Amos Professional 3.00 AGA (X version) capable of running without conflicts on the same computer.
It also ensures that games already developed under the original Amos Professional 2.00  (ECS) can run without problem when Amos Professional 3.0 AGA (X version) is also installed in the computer configuration.
This reorganization also required to update the editor, interpreter and compiler configuration files with a new name including AGA inside, for the same reasons than the ones explained above.
>It is a restart of the whole project concerning AGA support, and as it is a "free time" development (not commercial), I can promise nothing about future releases/updates dates.

I hope that everything will be ok with François Lionet now as I don't want to steal his work. Just protect mine. I hope he can understand this.

François Lionet MIT Licence is available in this project, in the file Licence.txt
The Amos Professional AGA (X version) project ia distribued under MIT License with Closed source.

Regards,
Frédéric Cordier
