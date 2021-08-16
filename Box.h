 class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
       // write prototypes of getters for length, width and height
      void setValues(int blength, int bwidth, int bheight);
      int getlength();
      int getheight();
      int getwidth();
      int calcVolume();
};