/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface EBFill : NSObject 
{
}

+ (id)edFillFromXlXf:(struct XlXf { int (**x1)(); struct XlHeader { NSUInteger x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; short x3; short x4; short x5; NSInteger x6; NSInteger x7; unsigned char x8; unsigned char x9; NSInteger x10; NSInteger x11; NSInteger x12; NSInteger x13; NSInteger x14; NSInteger x15; NSInteger x16; NSInteger x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; }*)arg1 edResources:(id)arg2;
     /* Encoded args for previous method: @16@0:4^{XlXf=^^?{XlHeader=IsC}sssiiCCiiiiiiiiCCCCCCCBBBBBBBBBBBBBBB}8@12 */

+ (id)edFillFromXlDXf:(struct XlDXf { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; struct XlDXfUserFmt {} *x7; struct XlDXfFont {} *x8; struct XlDXfAlign {} *x9; struct XlDXfBorders {} *x10; struct XlDXfPattern {} *x11; struct XlDXfProtect {} *x12; }*)arg1 edResources:(id)arg2;
+ (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)extractFromEDFill:(id)arg1 foreColorReference:(id*)arg2 backColorReference:(id*)arg3 fillPatternEnum:(NSInteger*)arg4;
     /* Encoded args for previous method: B24@0:4@8^@12^@16^i20 */

+ (NSInteger)convertXlFillPatternEnumToED:(NSInteger)arg1;
+ (NSInteger)convertEDPatternFillEnumToXl:(NSInteger)arg1;


@end
