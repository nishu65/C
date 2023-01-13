import urllib.request

# Set the URL of the video to download
video_url = "https://www.whoreshub.com/videos/96033/j-kiss/"

# Set the local file name for the video
local_filename = "MITRAZ_junoon.mp4"

# Use urllib to download the video
urllib.request.urlretrieve(video_url, local_filename)

print("Video downloaded successfully!")