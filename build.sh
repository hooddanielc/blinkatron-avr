TEST_TARGETS=test/*-test.cc

for f in $TEST_TARGETS
do
  ib --cfg test "${f%.*}"
  ../out/test/`realpath --relative-to . "${f%.*}"`
done

ib  main
