function toggleMode(){
    const html = document.documentElement

    /*if(html.classList.contains('light')){
        html.classList.remove('light')
    }
    else{
        html.classList.add('light')
    }*/

    html.classList.toggle('light')

    const img = document.querySelector("#profile img")

    if(html.classList.contains('light')){
        img.setAttribute('src', './assets/avatar-light.png')
        img.setAttribute('alt', 'Rapaz com oculos escuro e jaqueta com um fundo azul')
    }
    else{
        img.setAttribute('src', './assets/avatar.png')
        img.setAttribute('alt', 'Foto de um rapaz de óculos, barba e camisa preto com um fundo laranja')
    }

}