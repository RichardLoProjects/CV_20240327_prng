# CV_20240327_prng
A pet project for CV. Initialised 20240327.
Project will make a XORshift Pseudo Random Number Generator

Plan:
First mini project will be a "proof of concept" to check that the compiler works on this machine (so I can say hello world etc), and that I indeed have something that might resemble a real pseudo random number generator (PRNG).
Next miniproject will be to measure runtime.
Next miniproject will be to test how good it is as a prng - method selected was monte carlo approximation of pi.

Result:
Managed to find a working compiler.
Generated some random numbers.
Measured execution time and approximated pi to 3 significant figures (see attached picture).

Lessons learned:
Compiler:
g++ -c src/X.cpp -o obj/X.o // compile without linking
g++ obj/X1.o obj/X2.o ... obj.Xn.o -o app // link and build, app becomes app.exe
Git:
git status
git remote -v
git clone [github url]
git pull //update local to live
git add //staging
git commit -m [title] -m [description] //local merge
git remote add origin [github url] //add url for git-push
git push -u origin [branch name, like master, main, etc] //push to github
git config --global user.email "billybob@company.com"
git config --global user.name "superCoolGithubUsername"