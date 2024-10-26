const searchBox = document.querySelector('.searchBox');
const searchBtn = document.querySelector('.searchBtn');
const recipeContainer = document.querySelector('.recipe-container');

const fetchRecipes = async (query) => {
  recipeContainer.innerHTML = "<h2>Fetching Recipes...</h2>"
  const data =await fetch(`https://www.themealdb.com/api/json/v1/1/search.php?s=${query}`)
  const response =await data.json();
  console.log(response);

// Suggested code may be subject to a license. Learn more: ~LicenseLog:356193804.
recipeContainer.innerHTML = "";
 
response.meals.forEach(meal => {
     const recipeDiv = document.createElement('div');
     recipeDiv.classList.add('recipe');
     recipeDiv.innerHTML = `
       <img src="${meal.strMealThumb}">
       <h3>${meal.strMeal}</h3>
       <p>${meal.strCategory}</p>
       <p>${meal.strArea}</p>
       
     `
     const button = document.createElement('button');
     button.textContent = "View Recipe";
     
     
     recipeContainer.appendChild(recipeDiv);
     

  });
}


searchBtn.addEventListener('click',(e)=>{
   e.preventDefault();
   const searchInput = searchBox.value.trim();
   
   fetchRecipes(searchInput);
     console.log(searchInput, 'clicked');

});