export DISPLAY=:0
cheese -f &
cd ./Images/
mkdir capture1
gnome-screenshot --window --delay=1
mv Capture*.png capture1/capture.png
firefox --display=:0.0 ./capture1/capture.png