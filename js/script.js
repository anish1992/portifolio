
    // click the image on the main page
    var tile_1 = document.getElementById('t1');

	// Get the resume modal
    var resume = document.getElementById('resume');
    // image one container
    var resumeImg = document.getElementById("img01");

    tile_1.onclick = function(){ // tile important move onclick to tile 
        resume.style.display = "block";
        resumeImg.src = "images/resume_full.png";
    }

    // Get the <span> element that closes the modal
    var close = document.getElementsByClassName("close")[0];

    // When the user clicks on <span> (x), close the modal
    close.onclick = function() {
        resume.style.display = "none";
    }