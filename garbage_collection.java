
class GarbageCollection {
    
    public static void main(String[] args) {
        String s = new String("hello world");
        System.out.println(s);
        //s variable is set to null rather than the pointer to the object. this as a result, results in the object not being accessible. the garbage collector can clear this unreferenced memory
        s = null;
        
    }
}