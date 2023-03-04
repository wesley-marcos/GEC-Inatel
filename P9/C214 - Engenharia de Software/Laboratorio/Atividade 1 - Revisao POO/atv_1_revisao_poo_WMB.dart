/* 
    Feito por: Wesley Marcos Borges
    Curso: GEC
    Matrícula: 1651

*/

// Superclasse
abstract class Wand {
  String? wood;
  String? core;
  double wand_size = 1;

  // Construtor
  Wand(String wood, String core, double wand_size);

  // Método
  void showWand();
}

// Subclasse
class Wizard extends Wand {
  String owner_name = "Potter";

  Wizard(String wood, String core, double wand_size)
      : super(wood, core, wand_size) {
    this.wood = wood;
    this.core = core;
    this.wand_size = wand_size;
  }

  void showWand() {
    print(
        "Mister $owner_name has a $wood wand, made from $core core and it has $wand_size centimeters!");
  }
}

// Função Main
void main() {
  // Instanciando um objeto
  Wizard wiz = Wizard("Holly", "Phoenix Feather", 32);

  // Chamando o método que fará o print
  wiz.showWand();
}
