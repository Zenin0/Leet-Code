class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> freq(256, 0);  // Frecuencia de cada carácter
        vector<bool> inStack(256, false);  // Para rastrear si un carácter ya está en la subsecuencia
        string result = "";  // Para almacenar la subsecuencia

        // Contar la frecuencia de cada carácter en la cadena
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }

        // Procesar cada carácter en la cadena
        for (int i = 0; i < s.size(); i++) {
            // Reducir la frecuencia del carácter actual
            freq[s[i]]--;

            // Si el carácter ya está en la subsecuencia, lo ignoramos
            if (inStack[s[i]]) {
                continue;
            }

            // Mientras la pila tenga caracteres mayores que el actual y puedan volver a aparecer
            while (!result.empty() && result.back() > s[i] && freq[result.back()] > 0) {
                inStack[result.back()] = false;  // Quitar el carácter de la subsecuencia
                result.pop_back();
            }

            // Añadir el carácter actual a la subsecuencia y marcarlo como visto
            result.push_back(s[i]);
            inStack[s[i]] = true;
        }

        return result;
    }

};
