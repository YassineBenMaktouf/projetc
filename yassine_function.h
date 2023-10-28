struct ETS
{
char nomETS[50];	//nom du ETS
char region[20];	//Région de l'ETS
int cap_pat;	//capacité patients de l'ETS
int phone;		//telephone de l'ETS
char id[20];		//id de l'ETS
char director[50];	//directeur de l'ETS
int cap_doc;	//capacité docteurs de l'ETS
char creat_date[10];	//date de creation de l'ETS
};
void addETS(struct ETS E);	//fct Ajouter ETS
void delETS(struct ETS E);	//fct Supprimer ETS
void editETS(struct ETS E);	//fct modifier ETS
void rech_reg(struct ETS E);	//fct recherche par region
void rech_cap(struct ETS E);	//fct recherche par capacité
void map(struct ETS E);		//fct affichage map
