document.addEventListener('DOMContentLoaded', function() {
    var questions = document.getElementsByClassName('question');
  
    for (var i = 0; i < questions.length; i++) {
      questions[i].addEventListener('click', function() {
        var answer = this.nextElementSibling;
  
        if (answer.style.display === 'block') {
          answer.style.display = 'none';
        } else {
          answer.style.display = 'block';
        }
      });
    }
  });
  