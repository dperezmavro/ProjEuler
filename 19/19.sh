i=0
for y in `seq 1901 2000`; do
    for m in range Jan Feb March April May Jun Jul Aug Sept Oct Nov Dec; do
        EXISTS=`cal ${m} ${y} 2>&1 | grep -e 'Su' -A 1 | grep -e '7'`
        if [ -n "${EXISTS}" ]; then
            i=$((i+1))
        fi
    done
done

echo ${i}
