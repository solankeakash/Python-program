#!/usr/bin
if [ $# -ne 1 ]
then
echo "give file name"
elif [ $1 -f ]
then
for i in $(cat $1)
do
useradd $i
done
else
echo "give correct file name"
fi
