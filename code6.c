// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
void main() {
  char bus[50][100] ={
     "2","2A","2B","3","4","5","6","7","8","9","10", "11","12","13","15","17","24M","25","29","50","51","52","61","62","64","66","139A","140","140A","141","142","143","144","145","146","147","148","149","150","171","189","200","203","305","406","501"};
  
  char route[50][100] = {
      "Swargate → Shivaji Nagar", "Katraj → Shivaji Nagar", "Swargate (Ring) → Wakdewadi ST Stand", "Pune Station → Swargate", "Shivaji Nagar → Swargate", "Pune Station → Swargate", "Pune Station → Swargate (alternate)", "Deccan Gymkhana → Pulgate", "Pune Station → Deccan Gymkhana", "Pune Station → Deccan Gymkhana (alt)", "Shivaji Nagar → Janata Vasahat", "Market Yard → Pimple Gurav", "Market Yard → Kasarwadi Rly Stn", "Shivaji Nagar → Upper Depot (Annabhau Sathe Bus Station)", "Shivaji Nagar → Upper Depot (women's special / variant)", "Bhekrainagar → Dhayari (DSK Vishwa)", "Shivaji Nagar → Narhe Gaon", "Swargate → Yewalewadi",  "Katraj → Samtanagar (MHB Samta Nagar)", "(variant) Katraj / Narhe → City (various)", "Swargate → Alandi", "Shaniwar Wada / Deccan → Sinhgad Paytha (variants)", "Deccan Gymkhana → Sinhgad Paytha", "Aundh → Sinhgad Paytha (variant)", "NDA GATE → BHEKRAINAGAR", "Swargate → Khanapur", "KBheinagar → Nigdi Bhakti Shakti" "Upper Depot → Sangamwadi", "Hadapsar → Warje Malwadi", "Market Yard → Aglambe Gaon", "Bhekrainagar → Nigdi Bhakti Shakti", "Pune Station → Upper Depot", "Pune Station → Katraj", "Pune Station → Kondhwa (Kumar Prithvi Soc)", "Pune Station → Ghotawade Phata", "Pune Station → Galinde Path", "Market Yard → Rose Garden", "Metro Station → New Market", "Garden Square → Hill Colony", "Industrial Area → Railway Junction", "Stadium Circle → East End", "River View → Power House", "Univ Campus → Shopping Plaza", "Nhavare (Shirur) → Hadapsar Gadital (long-distance PMPML route)", "Hadapsar → Devachi Uruli", "Pimpri-Chinchwad zone routes (intercity / PCMC) – examples", "Hinjewadi → Deccan / City (IT corridor feeders)", "Bhosari → Pune Station (industrial–city link)", "Wakad → Hinjewadi (IT park feeder)", "Kothrud → Swargate / Pune Station (local high-frequency)"};
  
  int i;
  char p[50];
  int road=0;
  printf("Enter the route:");
  scanf("%s" , &p);
  for(i=0;i<50;i++){
      road = strcmp( p , bus[i]);
       if(road==0) {
          printf("%s" , route[i], bus[i] );
          break;
       }
      
      
  }
  
 if(road!=0){
      printf("Route not found");
  }
  
  
   
    
}

