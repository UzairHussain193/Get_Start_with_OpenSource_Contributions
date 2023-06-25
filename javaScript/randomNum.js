function playGame() {
  let x = Math.floor(Math.random() * 100);
  let num;
  let score = 0;
  // console.log(x)
  do {
    num = prompt("Enter a num ");
    console.log(num);
    if (num > x) {
      console.log("Your gase num is greter then random num");
    } else if (num < x) {
      console.log("your gase num is less then the random num");
    }
    score++;
  } while (num != x && num != 0);
  console.log(
    "Your random num is " + x + " and you try the " + score + " time"
  );
}
// function playGame() {
//   var x = Math.floor(Math.random() * 100);
//   var num;
//   var score = 0;

//   var resultContainer = document.getElementById("result");

//   do {
//     num = prompt("Enter a number: ");
//     resultContainer.innerHTML += "<p>" + num + "</p>";

//     if (num > x) {
//       resultContainer.innerHTML +=
//         "<p>Your guess is greater than the random number.</p>";
//     } else if (num < x) {
//       resultContainer.innerHTML +=
//         "<p>Your guess is less than the random number.</p>";
//     }

//     score++;
//   } while (num != x && num != 0);

//   resultContainer.innerHTML +=
//     "<p>Your random number is " +
//     x +
//     " and you took " +
//     score +
//     " guesses.</p>";
// }
