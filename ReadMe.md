# NYU ProcDesign Development Template

A template for doing SystemVerilog development for the NYU Processor Design
team.
Answer the Following:

What is a registry?
    The registry is a collection of instructions about what the contents and tools within packages is and its kind of like a collection of dependent sourse code files I have reviewed the official docs:https://cmake.org/cmake/help/latest/command/if.html#basic-expressions and its basically like a set of instructions of how to use the source code comands that are involved in the packages that may reffer to several kind of files (System Verilog, C++, or even cmake files)
What is a package?
    A package contains the source code files that can help with several kind of files(System Verilog, C++, or even cmake files) that act as a collection of tools that can be used in every kind of files  
What’s the difference between an interface library and a “normal” library or executable? Can you think of any uses for this besides System Verilog files? (Think about source code used for generic programming)
    An interface library has immedate properties set of instructions that can be used to be used but, the regular library doesn't necessarily need to be used the code that it is included in and isn't immediately compiled in a project. I think the used to installed and exported for C++ execution files in combination with precompilation statements to reduce CPU Cycles of having to retrieve files that include the properties involved in the interface library. 
        Refferences:https://cmake.org/cmake/help/latest/command/add_library.html#:~:text=Interface%20Libraries,-add_library(&text=An%20INTERFACE%20library%20target%20does,may%20be%20installed%20and%20exported.
What is a top module?
    The modules that are exposed models of interest that you are trying to tell cmake and verilator that those are the explicit models of interest that are trying to tell cmake and verilator that those are the focus to simulated.
