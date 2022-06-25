class Compiler:
    def __init__(self):
        self.inp = ""
        self.oup = ""

    def compile(self, bf):
        self.inp = bf
        bf = ''.join(bf.split())

        bf_pp = self.preprocess(bf)
        # bf_pp = bf

        print(bf_pp)

        char_fns = {
            ">": self.right,
            "<": self.left,
            "+": self.inc,
            "-": self.dec,
            ".": self.print,
            ",": self.input,
            "[": self.loop,
            "]": self.end_loop,
            "C": self.clear
        }

        self.add_header()

        in_bracket = False
        bracket = ""
        for char in bf_pp:
            if char == "(":
                in_bracket = True
                continue

            if in_bracket and char not in "()":
                bracket += char
                continue
            
            if char == ")":
                in_bracket = False
                bracket_char, n = bracket.split("|")

                if bracket_char in char_fns.keys():
                    char_fns[bracket_char](n)

                bracket = ""
                continue

            if char in char_fns.keys():
                char_fns[char]()

        self.add_footer()

        return self.oup

    def preprocess(self, bf):
        out = ""
        count = 0
        count_char = ""

        for char in bf:
            if char == count_char:
                count += 1
                continue

            else:
                if count > 1:
                    if count_char in "><+-":
                        out += f"({count_char}|{count})"
                    else:
                        out += count_char * count
                else:
                    out += count_char
                
                count = 1
                count_char = char
        
        if count > 1:
            if count_char in "><+-":
                out += f"({count_char}|{count})"
            else:
                out += count_char * count
        else:
            out += count_char

        out = out.replace("[-]", "C")
        out = out.replace("[+]", "C")

        return out
                
    def add_line(self, line):
        self.oup += line + "\n"

    def add_header(self):
        self.add_line("/* AUTO TRANSPILED BRAINFUCK -> C USING FrainBuck2C.py\nby Tom Findlay {findlaytel@gmail.com} */\n")
        self.add_line("int main(int argc, char *argv[]) {")
        self.add_line("char array[30000] = {0}; char *ptr = array;")

    def add_footer(self):
        self.add_line("return 0;}")
    
    def clear(self):
        self.add_line("*ptr = 0;")

    def left(self, n=1):
        if n == 1:
            self.add_line("--ptr;")
        else:
            self.add_line(f"ptr -= {n};")

    def right(self, n=1):
        if n == 1:
            self.add_line("++ptr;")
        else:
            self.add_line(f"ptr += {n};")

    def inc(self, n=1):
        if n == 1:
            self.add_line("++*ptr;")
        else:
            self.add_line(f"*ptr += {n};")

    def dec(self, n=1):
        if n == 1:
            self.add_line("--*ptr;")
        else:
            self.add_line(f"*ptr -= {n};")

    def loop(self):
        self.add_line("while (*ptr) {")

    def end_loop(self):
        self.add_line("}")

    def print(self):
        self.add_line("putchar(*ptr);")

    def input(self):
        self.add_line("*ptr = getchar();")


if __name__ == "__main__":
    with open("code.bf", "r") as f:
        code = f.read()

    compiler = Compiler()
    compiler.compile(code)

    with open("frainbuck.c", "w") as f:
        f.write(compiler.oup)
