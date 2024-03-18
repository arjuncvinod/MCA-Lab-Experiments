import java.util.Scanner;

class CPU {
    double price;

    CPU(double price) {
        this.price = price;
    }

    double getPrice() {
       return price;
    }

    class Processor {
        int cores;
        String manufacturer;

        Processor(int cores, String manufacturer) {
            this.cores = cores;
            this.manufacturer = manufacturer;
        }

        public String toString() {
            return "Processor: Cores - " + cores + ", Manufacturer - " + manufacturer;
        }
    }

    class RAM {
        int memory;
        String manufacturer;

        RAM(int memory, String manufacturer) {
            this.memory = memory;
            this.manufacturer = manufacturer;
        }

        public String toString() {
            return "RAM: Memory - " + memory + ", Manufacturer - " + manufacturer;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the CPU price: ");
        double cpuPrice = scanner.nextDouble();
        CPU cpu = new CPU(cpuPrice);

        System.out.print("Enter the number of cores in the processor: ");
        int cores = scanner.nextInt();
        scanner.nextLine();
        System.out.print("Enter the processor manufacturer: ");
        String processorManufacturer = scanner.nextLine();
        CPU.Processor processor = cpu.new Processor(cores, processorManufacturer);

        System.out.print("Enter the RAM memory: ");
        int memory = scanner.nextInt();
        scanner.nextLine();
        System.out.print("Enter the RAM manufacturer: ");
        String ramManufacturer = scanner.nextLine();
        CPU.RAM ram = cpu.new RAM(memory, ramManufacturer);

        System.out.println(processor);
        System.out.println(ram);

        scanner.close();
    }
}