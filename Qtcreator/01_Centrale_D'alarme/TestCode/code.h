#ifndef CODE_H
#define CODE_H

#include <QtGlobal>

  class code
{
    public:
    code(const int _tailleCode=4);
    ~code();
    bool VerifierCode(const quint8 _unCode[]);
    void Memoriser(const quint8 _unCode[]);

  private:
    quint8 *codeUsine;
    quint8 *codeUtilisateur;
    const int tailleCode;
};

#endif // CODE_H
