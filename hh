document.querySelector('.cau1').addEventListener('click', function() {
            document.querySelector('.cau1').classList.toggle('active');
            document.querySelector('.cau01').classList.toggle('display-block');
            document.querySelector('.cau2').classList.remove('active');
            document.querySelector('.cau02').classList.remove('display-block');
            document.querySelector('.cau3').classList.remove('active');
            document.querySelector('.cau03').classList.remove('display-block');
            document.querySelector('.cau4').classList.remove('active');
            document.querySelector('.cau04').classList.remove('display-block');
        })

        document.querySelector('.cau2').addEventListener('click', function() {
            document.querySelector('.cau1').classList.remove('active');
            document.querySelector('.cau01').classList.remove('display-block');
            document.querySelector('.cau2').classList.toggle('active');
            document.querySelector('.cau02').classList.toggle('display-block');
            document.querySelector('.cau3').classList.remove('active');
            document.querySelector('.cau03').classList.remove('display-block');
            document.querySelector('.cau4').classList.remove('active');
            document.querySelector('.cau04').classList.remove('display-block');
        })

        document.querySelector('.cau3').addEventListener('click', function() {
            document.querySelector('.cau1').classList.remove('active');
            document.querySelector('.cau01').classList.remove('display-block');
            document.querySelector('.cau2').classList.remove('active');
            document.querySelector('.cau02').classList.remove('display-block');
            document.querySelector('.cau3').classList.toggle('active');
            document.querySelector('.cau03').classList.toggle('display-block');
            document.querySelector('.cau4').classList.remove('active');
            document.querySelector('.cau04').classList.remove('display-block');
        })

        document.querySelector('.cau4').addEventListener('click', function() {
            document.querySelector('.cau1').classList.remove('active');
            document.querySelector('.cau01').classList.remove('display-block');
            document.querySelector('.cau2').classList.remove('active');
            document.querySelector('.cau02').classList.remove('display-block');
            document.querySelector('.cau3').classList.remove('active');
            document.querySelector('.cau03').classList.remove('display-block');
            document.querySelector('.cau4').classList.toggle('active');
            document.querySelector('.cau04').classList.toggle('display-block');
        })