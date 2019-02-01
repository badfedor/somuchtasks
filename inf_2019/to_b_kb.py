import argparse

parser = argparse.ArgumentParser()
parser.add_argument("conv_to", help="convert bit(s) to bytes (b) or kilobytes (kb)", type=str)
parser.add_argument("num", help="number to convert", type=int)
args = parser.parse_args()

div = 0
div_str = ''

if args.conv_to == 'b':
    div = 8
    div_str = 'byte(s)'
elif args.conv_to == 'kb':
    div = 8*1024
    div_str = 'KiloByte(s)'
else:
    print('Syntax error. Try -h for help.')
    exit()

if args.num % div == 0:
    print(args.num, 'bit(s) is', args.num//div, div_str)
elif args.num % div > 0:
    print(args.num, 'bit(s) is', args.num//div+1, div_str)

