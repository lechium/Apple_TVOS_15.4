//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableData.h>

@interface NSMutableData (NSMutableData)
+ (id)_newZeroingDataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000003d947
+ (id)dataWithLength:(unsigned long long)arg1;	// IMP=0x000000000003d8ab
+ (id)dataWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000003d87c
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d835
- (id)initWithLength:(unsigned long long)arg1;	// IMP=0x000000000003d908
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000003d8da
- (void)setData:(id)arg1;	// IMP=0x000000000003d750
- (void)resetBytesInRange:(struct _NSRange)arg1;	// IMP=0x000000000003d5cf
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2;	// IMP=0x000000000003d2ef
- (void)increaseLengthBy:(unsigned long long)arg1;	// IMP=0x000000000003d1af
- (void)appendData:(id)arg1;	// IMP=0x000000000003cf13
- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000003cc99
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2 length:(unsigned long long)arg3;	// IMP=0x000000000003c8ae
- (_Bool)_isCompact;	// IMP=0x000000000003c8a6
- (Class)classForCoder;	// IMP=0x000000000003c895
- (void)setLength:(unsigned long long)arg1;	// IMP=0x000000000003c846
- (void *)mutableBytes;	// IMP=0x000000000003c7f4
- (_Bool)decompressUsingAlgorithm:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000040b80
- (_Bool)compressUsingAlgorithm:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000040b52
- (_Bool)_decompressUsingCompressionAlgorithm:(int)arg1 error:(id *)arg2;	// IMP=0x0000000000040a88
- (_Bool)_compressUsingCompressionAlgorithm:(int)arg1 error:(id *)arg2;	// IMP=0x00000000000409be
@end
