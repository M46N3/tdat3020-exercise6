pipeline {
    agent any
    stages {
        stage('Build') {
            steps{
                echo 'Build'
                sh 'docker build -t fuzzer .'
            }
        }
        stage('Fuzzing') {
            steps{
                echo 'Fuzzing'
                sh 'docker container run fuzzer'
            }
        }
    }
}
