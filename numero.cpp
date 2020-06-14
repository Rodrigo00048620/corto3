#include <iostream>
using namespace std;
int main(){
    int n, m;
    for(n = 1; <=100; n++){
        m = 1 + rand() % (101-1);
    }
    int nu = 0;
    cout << "Tiene 5 intentos, acertar el numero de 1 a 100" << endl;
    cin >> nu;
    char f = "f";
    if (nu > m ){
        cout << "El numero que escogio es mayor, tiene 4 intentos mas, escriba f para salir" << endl;
        string nu2;
        cin >> nu2;
            if (nu2 == f ){
                    cout << "Gracias por jugar" << endl;
                         }else if (nu2 > m){
                            cout << "El numero que escogio es mayor, tiene 3 intentos mas, escriba F para salir" << endl;
                            string nu3;
                            cin >> nu3;
                            if (nu3 == f ){
                                 cout << "Gracias por jugar" << endl;
                                     }else if (nu3 > m){
                                        cout << "El numero que escogio es mayor, tiene 2 intentos mas, escriba F para salir" << endl;
                                        string nu4;
                                        cin >> nu4;
                                          if (nu4 == f ){
                                            cout << "Gracias por jugar" << endl;
                                            }else if (nu4 > m){
                                            cout << "El numero que escogio es mayor, tiene 1 intento mas, escriba F para salir" << endl;
                                            string nu5;
                                            cin >> nu5;
                                            if (nu5 == f ){
                                                cout << "Gracias por jugar" << endl;
                                                }else if (nu5 > m){
                                                    cout << "El numero que escogio es mayor, gracias por jugar" << endl;
                                                }else if (nu5 < m){
                                                    cout << "El numero que escogio es menor, gracias por jugar" << endl;
                                                }else if (nu5 == m){
                                                    cout << "Lo conseguiste" << endl;
                                                }
                                            }else if(nu4 < m){
                                            cout << "El numero que escogio es menor, tiene 1 intento mas, escriba F para salir" << endl;
                                            string nu5;
                                            cin >> nu5;
                                            if (nu5 == f ){
                                                cout << "Gracias por jugar" << endl;
                                                }else if (nu5 > m){
                                                    cout << "El numero que escogio es mayor, gracias por jugar" << endl;
                                                }else if (nu5 < m){
                                                    cout << "El numero que escogio es menor, gracias por jugar" << endl;
                                                }else if (nu5 == m){
                                                    cout << "Lo conseguiste" << endl;
                                                }
                                            }else if (nu4 == m){
                                                cout << "lo conseguiste" << endl;
                                            }
                                            
                                         }else if (nu3 < m){
                                            cout << "El numero que escogio es menor, tiene 2 intento mas, escriba F para salir" << endl;
                                            string nu4;
                                            cin >> nu4;
                                                if (nu4 == f ){
                                                    cout << "Gracias por jugar" << endl;
                                                    }else if (nu4 > m){
                                                        cout << "El numero que escogio es mayor, tiene 1 intento mas, escriba F para salir" << endl;
                                                        string nu5;
                                                        cin >> nu5;
                                                        if (nu5 == f ){
                                                            cout << "Gracias por jugar" << endl;
                                                        }else if (nu5 > m){
                                                            cout << "El numero que escogio es mayor, gracias por jugar" << endl;
                                                        }else if (nu5 < m){
                                                            cout << "El numero que escogio es menor, gracias por jugar" << endl;
                                                        }else if (nu5 == m){
                                                            cout << "Lo conseguiste" << endl;
                                                        } 
                                                    }else if(nu4 < m){
                                                        cout << "El numero que escogio es menor, tiene 1 intento mas, escriba F para salir" << endl;
                                                        string nu5;
                                                        cin >> nu5;
                                                            if (nu5 == f ){
                                                                cout << "Gracias por jugar" << endl;
                                                            }else if (nu5 > m){
                                                                cout << "El numero que escogio es mayor, gracias por jugar" << endl;
                                                             }else if (nu5 < m){
                                                                cout << "El numero que escogio es menor, gracias por jugar" << endl;
                                                            }else if (nu5 == m){
                                                                cout << "Lo conseguiste" << endl;
                                                            }
                                            }else if (nu4 == m){
                                                cout << "lo conseguiste" << endl;
                                            }
                                        }else if (nu3 == m){
                                            cout << "lo conseguiste" << endl;
                                        }
                            }else if (nu2 < m){
                            cout << "El numero que escogio es menor, tiene 3 intentos mas, escriba F para salir" << endl;
                            string nu3;
                            cin >> nu3;
                            if (nu3 == f ){
                                 cout << "Gracias por jugar" << endl;
                                     }else if (nu3 > m){
                                        cout << "El numero que escogio es mayor, tiene 2 intentos mas, escriba F para salir" << endl;
                                        string nu4;
                                        cin >> nu4;
                                          if (nu4 == f ){
                                            cout << "Gracias por jugar" << endl;
                                            }else if (nu4 > m){
                                            cout << "El numero que escogio es mayor, tiene 1 intento mas, escriba F para salir" << endl;
                                            string nu5;
                                            cin >> nu5;
                                            if (nu5 == f ){
                                                cout << "Gracias por jugar" << endl;
                                                }else if (nu5 > m){
                                                    cout << "El numero que escogio es mayor, gracias por jugar" << endl;
                                                }else if (nu5 < m){
                                                    cout << "El numero que escogio es menor, gracias por jugar" << endl;
                                                }else if (nu5 == m){
                                                    cout << "Lo conseguiste" << endl;
                                                }
                                            }else if(nu4 < m){
                                            cout << "El numero que escogio es menor, tiene 1 intento mas, escriba F para salir" << endl;
                                            string nu5;
                                            cin >> nu5;
                                            if (nu5 == f ){
                                                cout << "Gracias por jugar" << endl;
                                                }else if (nu5 > m){
                                                    cout << "El numero que escogio es mayor, gracias por jugar" << endl;
                                                }else if (nu5 < m){
                                                    cout << "El numero que escogio es menor, gracias por jugar" << endl;
                                                }else if (nu5 == m){
                                                    cout << "Lo conseguiste" << endl;
                                                }
                                            }else if (nu4 == m){
                                                cout << "lo conseguiste" << endl;
                                            }
                                            
                                         }else if (nu3 < m){
                                            cout << "El numero que escogio es menor, tiene 2 intento mas, escriba F para salir" << endl;
                                            string nu4;
                                            cin >> nu4;
                                                if (nu4 == f ){
                                                    cout << "Gracias por jugar" << endl;
                                                    }else if (nu4 > m){
                                                        cout << "El numero que escogio es mayor, tiene 1 intento mas, escriba F para salir" << endl;
                                                        string nu5;
                                                        cin >> nu5;
                                                        if (nu5 == f ){
                                                            cout << "Gracias por jugar" << endl;
                                                        }else if (nu5 > m){
                                                            cout << "El numero que escogio es mayor, gracias por jugar" << endl;
                                                        }else if (nu5 < m){
                                                            cout << "El numero que escogio es menor, gracias por jugar" << endl;
                                                        }else if (nu5 == m){
                                                            cout << "Lo conseguiste" << endl;
                                                        } 
                                                    }else if(nu4 < m){
                                                        cout << "El numero que escogio es menor, tiene 1 intento mas, escriba F para salir" << endl;
                                                        string nu5;
                                                        cin >> nu5;
                                                            if (nu5 == f ){
                                                                cout << "Gracias por jugar" << endl;
                                                            }else if (nu5 > m){
                                                                cout << "El numero que escogio es mayor, gracias por jugar" << endl;
                                                             }else if (nu5 < m){
                                                                cout << "El numero que escogio es menor, gracias por jugar" << endl;
                                                            }else if (nu5 == m){
                                                                cout << "Lo conseguiste" << endl;
                                                            }
                                            }else if (nu4 == m){
                                                cout << "lo conseguiste" << endl;
                                            }
                                        }else if (nu3 == m){
                                            cout << "lo conseguiste" << endl;
                                        }
                                    }else if (nu2 == m){
                                        cout << "lo conseguiste" << endl;
                                    }
        }else if (n < m){
        cout << "El numero que escogio es menor, tiene 4 intentos mas, escriba f para salir" << endl;
        string nu2;
        cin >> nu2;
            if (nu2 == f ){
                    cout << "Gracias por jugar" << endl;
                         }else if (nu2 > m){
                            cout << "El numero que escogio es mayor, tiene 3 intentos mas, escriba F para salir" << endl;
                            string nu3;
                            cin >> nu3;
                            if (nu3 == f ){
                                 cout << "Gracias por jugar" << endl;
                                     }else if (nu3 > m){
                                        cout << "El numero que escogio es mayor, tiene 2 intentos mas, escriba F para salir" << endl;
                                        string nu4;
                                        cin >> nu4;
                                          if (nu4 == f ){
                                            cout << "Gracias por jugar" << endl;
                                            }else if (nu4 > m){
                                            cout << "El numero que escogio es mayor, tiene 1 intento mas, escriba F para salir" << endl;
                                            string nu5;
                                            cin >> nu5;
                                            if (nu5 == f ){
                                                cout << "Gracias por jugar" << endl;
                                                }else if (nu5 > m){
                                                    cout << "El numero que escogio es mayor, gracias por jugar" << endl;
                                                }else if (nu5 < m){
                                                    cout << "El numero que escogio es menor, gracias por jugar" << endl;
                                                }else if (nu5 == m){
                                                    cout << "Lo conseguiste" << endl;
                                                }
                                            }else if(nu4 < m){
                                            cout << "El numero que escogio es menor, tiene 1 intento mas, escriba F para salir" << endl;
                                            string nu5;
                                            cin >> nu5;
                                            if (nu5 == f ){
                                                cout << "Gracias por jugar" << endl;
                                                }else if (nu5 > m){
                                                    cout << "El numero que escogio es mayor, gracias por jugar" << endl;
                                                }else if (nu5 < m){
                                                    cout << "El numero que escogio es menor, gracias por jugar" << endl;
                                                }else if (nu5 == m){
                                                    cout << "Lo conseguiste" << endl;
                                                }
                                            }else if (nu4 == m){
                                                cout << "lo conseguiste" << endl;
                                            }
                                            
                                         }else if (nu3 < m){
                                            cout << "El numero que escogio es menor, tiene 2 intento mas, escriba F para salir" << endl;
                                            string nu4;
                                            cin >> nu4;
                                                if (nu4 == f ){
                                                    cout << "Gracias por jugar" << endl;
                                                    }else if (nu4 > m){
                                                        cout << "El numero que escogio es mayor, tiene 1 intento mas, escriba F para salir" << endl;
                                                        string nu5;
                                                        cin >> nu5;
                                                        if (nu5 == f ){
                                                            cout << "Gracias por jugar" << endl;
                                                        }else if (nu5 > m){
                                                            cout << "El numero que escogio es mayor, gracias por jugar" << endl;
                                                        }else if (nu5 < m){
                                                            cout << "El numero que escogio es menor, gracias por jugar" << endl;
                                                        }else if (nu5 == m){
                                                            cout << "Lo conseguiste" << endl;
                                                        } 
                                                    }else if(nu4 < m){
                                                        cout << "El numero que escogio es menor, tiene 1 intento mas, escriba F para salir" << endl;
                                                        string nu5;
                                                        cin >> nu5;
                                                            if (nu5 == f ){
                                                                cout << "Gracias por jugar" << endl;
                                                            }else if (nu5 > m){
                                                                cout << "El numero que escogio es mayor, gracias por jugar" << endl;
                                                             }else if (nu5 < m){
                                                                cout << "El numero que escogio es menor, gracias por jugar" << endl;
                                                            }else if (nu5 == m){
                                                                cout << "Lo conseguiste" << endl;
                                                            }
                                            }else if (nu4 == m){
                                                cout << "lo conseguiste" << endl;
                                            }
                                        }else if (nu3 == m){
                                            cout << "lo conseguiste" << endl;
                                        }
                            }else if (nu2 < m){
                            cout << "El numero que escogio es menor, tiene 3 intentos mas, escriba F para salir" << endl;
                            string nu3;
                            cin >> nu3;
                            if (nu3 == f ){
                                 cout << "Gracias por jugar" << endl;
                                     }else if (nu3 > m){
                                        cout << "El numero que escogio es mayor, tiene 2 intentos mas, escriba F para salir" << endl;
                                        string nu4;
                                        cin >> nu4;
                                          if (nu4 == f ){
                                            cout << "Gracias por jugar" << endl;
                                            }else if (nu4 > m){
                                            cout << "El numero que escogio es mayor, tiene 1 intento mas, escriba F para salir" << endl;
                                            string nu5;
                                            cin >> nu5;
                                            if (nu5 == f ){
                                                cout << "Gracias por jugar" << endl;
                                                }else if (nu5 > m){
                                                    cout << "El numero que escogio es mayor, gracias por jugar" << endl;
                                                }else if (nu5 < m){
                                                    cout << "El numero que escogio es menor, gracias por jugar" << endl;
                                                }else if (nu5 == m){
                                                    cout << "Lo conseguiste" << endl;
                                                }
                                            }else if(nu4 < m){
                                            cout << "El numero que escogio es menor, tiene 1 intento mas, escriba F para salir" << endl;
                                            string nu5;
                                            cin >> nu5;
                                            if (nu5 == f ){
                                                cout << "Gracias por jugar" << endl;
                                                }else if (nu5 > m){
                                                    cout << "El numero que escogio es mayor, gracias por jugar" << endl;
                                                }else if (nu5 < m){
                                                    cout << "El numero que escogio es menor, gracias por jugar" << endl;
                                                }else if (nu5 == m){
                                                    cout << "Lo conseguiste" << endl;
                                                }
                                            }else if (nu4 == m){
                                                cout << "lo conseguiste" << endl;
                                            }
                                            
                                         }else if (nu3 < m){
                                            cout << "El numero que escogio es menor, tiene 2 intento mas, escriba F para salir" << endl;
                                            string nu4;
                                            cin >> nu4;
                                                if (nu4 == f ){
                                                    cout << "Gracias por jugar" << endl;
                                                    }else if (nu4 > m){
                                                        cout << "El numero que escogio es mayor, tiene 1 intento mas, escriba F para salir" << endl;
                                                        string nu5;
                                                        cin >> nu5;
                                                        if (nu5 == f ){
                                                            cout << "Gracias por jugar" << endl;
                                                        }else if (nu5 > m){
                                                            cout << "El numero que escogio es mayor, gracias por jugar" << endl;
                                                        }else if (nu5 < m){
                                                            cout << "El numero que escogio es menor, gracias por jugar" << endl;
                                                        }else if (nu5 == m){
                                                            cout << "Lo conseguiste" << endl;
                                                        } 
                                                    }else if(nu4 < m){
                                                        cout << "El numero que escogio es menor, tiene 1 intento mas, escriba F para salir" << endl;
                                                        string nu5;
                                                        cin >> nu5;
                                                            if (nu5 == f ){
                                                                cout << "Gracias por jugar" << endl;
                                                            }else if (nu5 > m){
                                                                cout << "El numero que escogio es mayor, gracias por jugar" << endl;
                                                             }else if (nu5 < m){
                                                                cout << "El numero que escogio es menor, gracias por jugar" << endl;
                                                            }else if (nu5 == m){
                                                                cout << "Lo conseguiste" << endl;
                                                            }
                                            }else if (nu4 == m){
                                                cout << "lo conseguiste" << endl;
                                            }
                                        }else if (nu3 == m){
                                            cout << "lo conseguiste" << endl;
                                        }
                                    }else if (nu2 == m){
                                        cout << "lo conseguiste" << endl;
                                    }
                            }else if(n == m){
                                cout << "lo conseguiste" << endl;
                            }
}
                                            