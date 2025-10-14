// Just a little interactive flavor 😋

document.getElementById("find-food").addEventListener("click", () => {
  const location = document.getElementById("location").value.trim();

  if (location) {
    alert(`🍴 Showing restaurants near "${location}"`);
  } else {
    alert("📍 Please enter a valid location first!");
  }
});
