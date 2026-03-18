# HowTo GitHub codespace GUI

Tento repozitář poskytuje připravené prostředí pro C++ a Python pomocí GitHub Codespaces s grafickým rozhraním v prohlížeči.

Není potřeba instalovat žádný software na vlastní počítač.

---

## 1. Vytvoření GitHub účtu

Pokud ještě nemáš účet:

1. Otevři: https://github.com
2. Klikni na **Sign up**
3. Vytvoř účet a zvol si [silné heslo](https://www.grc.com/haystack.htm)
4. Potvrď e-mail

---

## 2. Fork repozitáře

1. Otevři tento repozitář
2. Klikni na **Fork** (vpravo nahoře)
3. Vyber svůj účet pro `Owner` pokud už není
4. Klinkni na zelený `Create fork` vpravo dole

Vznikne ti vlastní kopie repozitáře.

---

## 3. Vytvoření Codespace

1. Otevři svůj fork repozitáře
2. Klikni na zelený **Code**
3. Záložka **Codespaces**
4. Klikni na `+` **Create a codespace**

Počkej 2–5 minut na vytvoření prostředí. Status můžeš zobrazit kliknutím vpravo dole na `Setting up remote connection: Building codespace...`

Proces skončí něčím takovým: `Outcome: success User: vscode WorkspaceFolder: /workspaces/HowTo-GitHub-codespace-GUI`

---

## 4. Překlad a spuštění programu

Buď přímo v GUI VSCode:

1. V codespace stiskni `F1` a vyber **CMake: Configure**
2. Ze seznamu vyber kompilátor `GCC`
3. Po konfiguraci v projektu přibude `build` složka a ve spodní liště vlevo se objeví možnost `Build` a `Launch`

nebo pomocí terminálu:

```bash
g++ main.cpp -o main
```

či pomocí CMake:

```bash
cmake -S . -B build
cmake --build build
```

a spuštění:

```bash
./main
```

---

## 5. Uložení práce (DŮLEŽITÉ)

Pravidelně ukládej změny buď přes git v GUI VSCode, nebo v terminálu:

```bash
git status
git add .
git commit -m "Moje práce"
git push
```

Neuložená práce může být ztracena pokud dojde ke smazání codespace (obvykle 30 dní bez aktivity).

---

## 6. Zastavení Codespace (DŮLEŽITÉ)

Po dokončení práce:

1. Otevři https://github.com/codespaces
2. Najdi svůj Codespace
3. Klikni na **Stop**

Nezavírej pouze záložku v prohlížeči, protože rychleji vyčerpáš free limit 120 core-hodin měsíčně!

---

## 7. Řešení problémů

Typicky se nenačte rozšíření, nebo motiv, zkus znovu načíst rozhraní:

1. V codespace stiskni `F1`
2. Vyber **Developer: Reload Window**

Pokud nepomůže, zkus resetovat codespace (vytvoří se úplně znovu):

1. V codespace stiskni `F1`
2. Vyber **Codespaces: Rebuild Container**

---

## 8. Otevření grafického prostředí (OPTIONAL - jen pro GUI programy)

Po spuštění Codespace:

1. Otevři záložku **Ports**
2. Najeď myší na řádek s portem **6080**
3. Klikni na zobrazenou ikonku **Open in Browser**

Otevře se nové okno s noVNC pracovní plochou.
Ještě před připojením ověř, že je vlevo v nastavení:

- aktivováno `Přizpůsobit oknu`
- Přizpůsobení velikosti: `Vzdálené`

---

## Souhrn

Před začátkem:

- \[ \] GitHub účet
- \[ \] Fork repozitáře
- \[ \] Codespace vytvořen

Po práci:

- \[ \] Uloženo (commit + push)
- \[ \] Codespace zastaven

---
