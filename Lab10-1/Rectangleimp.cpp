namespace RectangleImp {
   // Rectangle
   class Rectangle
   {
       private:	
         // Create length and width here
         double length;
         double width;

      public: 
         // Declare public methods here
         Rectangle() {
            length = 0.0;
            width = 0.0;
         }
      
   void setLength(double len)
   {
      // Write setLength here
      length = len;
   }

   void setWidth(double wid)
   {
      // write setWidth here
      width = wid;
   }

   double getLength()
   {
      // write getLength here
      return length;
   }

   double getWidth()
   {
      // write getWidth here
      return width;
   }
      
   double calculateArea()
   {
      // write calculateArea here
      return length * width;
   }

   double calculatePerimeter()
   {
      // write calculatePerimeter here
      return 2 * (length + width);
   }
};
}
