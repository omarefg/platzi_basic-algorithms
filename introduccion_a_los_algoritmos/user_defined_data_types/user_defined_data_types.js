class Client {
    constructor(client) {
        this._client = client
    }

    printClient () {
        for (let key of Object.keys(this._client)) {
            console.log(`The client ${key} is ${this._client[key]}`)
        }
    }
}

const clientData = {
    name: 'Omar',
    id: '0000000001',
    credit: '1000000',
    address: 'Calle 1, carrera 1, Ciudad Bolivar'
}

const client1 = new Client(clientData)

client1.printClient()