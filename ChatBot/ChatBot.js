function talk() {
    var know = {

        "Hello": "&nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp Hi there!",
        "hello": "&nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp Hi there!",
        "HELLO": "&nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp Hi there!",

        "Good Morning": "&nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp Good Morning to you",
        "good morning": "&nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp Good Morning to you",
        "Good morning": "&nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp Good Morning to you",
        "GOOGD MORNING": "&nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp Good Morning to you",

        "How are you?": "&nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp I am Fine",
        "How Are You?": "&nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp I am Fine",
        "how are you?": "&nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp I am Fine",
        "HOW ARE YOU?": "&nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp I am Fine",

        "Who are you?": "&nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp I am Ruhail's Assistant",
        "Who Are You?": "&nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp I am Ruhail's Assistant",
        "who are you?": "&nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp I am Ruhail's Assistant",

        "Bye": "&nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp See you soon!!",
        "bye": "&nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp See you soon!!",
        "BYE": "&nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp &nbsp See you soon!!"
    };
    var user = document.getElementById("userBox").value;
    document.getElementById("userBox").value = "";
    document.getElementById("text").innerHTML += user + "<br>";

    if (user in know) {
        document.getElementById("text").innerHTML += know[user] + "<br>";
    } else {
        document.getElementById("text").innerHTML += "I don't understand... <br>";
    }
}