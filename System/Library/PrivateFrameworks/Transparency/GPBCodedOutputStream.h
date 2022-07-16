//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface GPBCodedOutputStream : NSObject
{
    struct GPBOutputBufferState state_;	// 8 = 0x8
    NSMutableData *buffer_;	// 40 = 0x28
}

+ (id)streamWithData:(id)arg1;	// IMP=0x0000000000050b1f
+ (id)streamWithOutputStream:(id)arg1;	// IMP=0x0000000000050ac3
- (void)writeRawLittleEndian64:(long long)arg1;	// IMP=0x0000000000053bbf
- (void)writeRawLittleEndian32:(int)arg1;	// IMP=0x0000000000053baf
- (void)writeRawVarint64:(long long)arg1;	// IMP=0x0000000000053b9e
- (void)writeRawVarintSizeTAs32:(unsigned long long)arg1;	// IMP=0x0000000000053b8e
- (void)writeRawVarint32:(int)arg1;	// IMP=0x0000000000053b7e
- (void)writeTag:(unsigned int)arg1 format:(int)arg2;	// IMP=0x0000000000053b58
- (void)writeRawPtr:(const void *)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;	// IMP=0x0000000000053a4b
- (void)writeRawData:(id)arg1;	// IMP=0x00000000000539f7
- (void)writeRawByte:(unsigned char)arg1;	// IMP=0x00000000000539be
- (void)flush;	// IMP=0x000000000005391d
- (void)writeRawMessageSetExtension:(int)arg1 value:(id)arg2;	// IMP=0x00000000000538a3
- (void)writeMessageSetExtension:(int)arg1 value:(id)arg2;	// IMP=0x0000000000053829
- (void)writeUnknownGroupArray:(int)arg1 values:(id)arg2;	// IMP=0x0000000000053706
- (void)writeGroupArray:(int)arg1 values:(id)arg2;	// IMP=0x00000000000535e3
- (void)writeBytesArray:(int)arg1 values:(id)arg2;	// IMP=0x00000000000534c0
- (void)writeMessageArray:(int)arg1 values:(id)arg2;	// IMP=0x000000000005339d
- (void)writeStringArray:(int)arg1 values:(id)arg2;	// IMP=0x000000000005327a
- (void)writeEnumArray:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x000000000005302c
- (void)writeBoolArray:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000000052e5b
- (void)writeSFixed32Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000000052c89
- (void)writeSFixed64Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000000052ab5
- (void)writeSInt64Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x00000000000528be
- (void)writeSInt32Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000000052676
- (void)writeFixed32Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x00000000000524a4
- (void)writeFixed64Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x00000000000522d0
- (void)writeUInt32Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000000052098
- (void)writeInt32Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000000051e4a
- (void)writeInt64Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000000051c66
- (void)writeUInt64Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000000051a82
- (void)writeFloatArray:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x00000000000518b4
- (void)writeDoubleArray:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x00000000000516e6
- (void)writeSInt64:(int)arg1 value:(long long)arg2;	// IMP=0x00000000000516ab
- (void)writeSInt64NoTag:(long long)arg1;	// IMP=0x0000000000051692
- (void)writeSInt32:(int)arg1 value:(int)arg2;	// IMP=0x0000000000051657
- (void)writeSInt32NoTag:(int)arg1;	// IMP=0x0000000000051641
- (void)writeSFixed64:(int)arg1 value:(long long)arg2;	// IMP=0x000000000005160b
- (void)writeSFixed64NoTag:(long long)arg1;	// IMP=0x00000000000515fa
- (void)writeSFixed32:(int)arg1 value:(int)arg2;	// IMP=0x00000000000515c4
- (void)writeSFixed32NoTag:(int)arg1;	// IMP=0x00000000000515b4
- (void)writeEnum:(int)arg1 value:(int)arg2;	// IMP=0x0000000000051581
- (void)writeEnumNoTag:(int)arg1;	// IMP=0x0000000000051571
- (void)writeUInt32:(int)arg1 value:(unsigned int)arg2;	// IMP=0x0000000000051530
- (void)writeUInt32NoTag:(unsigned int)arg1;	// IMP=0x0000000000051520
- (void)writeBytes:(int)arg1 value:(id)arg2;	// IMP=0x00000000000514d9
- (void)writeBytesNoTag:(id)arg1;	// IMP=0x000000000005148c
- (void)writeMessage:(int)arg1 value:(id)arg2;	// IMP=0x0000000000051445
- (void)writeMessageNoTag:(id)arg1;	// IMP=0x00000000000513f8
- (void)writeUnknownGroup:(int)arg1 value:(id)arg2;	// IMP=0x00000000000513ac
- (void)writeUnknownGroupNoTag:(int)arg1 value:(id)arg2;	// IMP=0x000000000005136d
- (void)writeGroup:(int)arg1 value:(id)arg2;	// IMP=0x0000000000051321
- (void)writeGroupNoTag:(int)arg1 value:(id)arg2;	// IMP=0x00000000000512e2
- (void)writeString:(int)arg1 value:(id)arg2;	// IMP=0x000000000005129b
- (void)writeStringNoTag:(id)arg1;	// IMP=0x00000000000510ae
- (void)writeBool:(int)arg1 value:(_Bool)arg2;	// IMP=0x0000000000051056
- (void)writeBoolNoTag:(_Bool)arg1;	// IMP=0x000000000005101d
- (void)writeFixed32:(int)arg1 value:(unsigned int)arg2;	// IMP=0x0000000000050fe7
- (void)writeFixed32NoTag:(unsigned int)arg1;	// IMP=0x0000000000050fd7
- (void)writeFixed64:(int)arg1 value:(unsigned long long)arg2;	// IMP=0x0000000000050fa1
- (void)writeFixed64NoTag:(unsigned long long)arg1;	// IMP=0x0000000000050f90
- (void)writeInt32:(int)arg1 value:(int)arg2;	// IMP=0x0000000000050f5d
- (void)writeInt32NoTag:(int)arg1;	// IMP=0x0000000000050f36
- (void)writeInt64:(int)arg1 value:(long long)arg2;	// IMP=0x0000000000050f03
- (void)writeInt64NoTag:(long long)arg1;	// IMP=0x0000000000050ef2
- (void)writeUInt64:(int)arg1 value:(unsigned long long)arg2;	// IMP=0x0000000000050ebf
- (void)writeUInt64NoTag:(unsigned long long)arg1;	// IMP=0x0000000000050e24
- (void)writeFloat:(int)arg1 value:(float)arg2;	// IMP=0x0000000000050de5
- (void)writeFloatNoTag:(float)arg1;	// IMP=0x0000000000050d12
- (void)writeDouble:(int)arg1 value:(double)arg2;	// IMP=0x0000000000050cd2
- (void)writeDoubleNoTag:(double)arg1;	// IMP=0x0000000000050b4e
- (id)initWithOutputStream:(id)arg1 data:(id)arg2;	// IMP=0x0000000000050a20
- (id)initWithData:(id)arg1;	// IMP=0x0000000000050a09
- (id)initWithOutputStream:(id)arg1;	// IMP=0x00000000000509bd
- (void)dealloc;	// IMP=0x0000000000050954

@end
