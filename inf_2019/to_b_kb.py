import argparse

parser = argparse.ArgumentParser()
parser.add_argument("invar", help="convert bit(s) to bytes (b) or kilobytes (kb)", type=str)
parser.add_argument("num", help="number to convert", type=int)
args = parser.parse_args()



