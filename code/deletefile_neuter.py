import immlib
def Patch_DeleteFileA(imm):
  delfileAddress = imm.getAddress("kernel32.DeleteFileA")
  if (delfileAddress <= 0):
    imm.log("No DeleteFile to patch")
    return
  imm.log("Patching DeleteFileA")
  patch = imm.assemble("XOR EAX, EAX \n Ret 4") 
  imm.writeMemory(delfileAddress, patch)
  
def main(args):
  imm = immlib.Debugger()
  Patch_DeleteFileA(imm)
  return "DeleteFileA is patched..."
