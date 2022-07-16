//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ENArchive, NSMutableArray, NSMutableData;

@interface ENProtobufCoder : NSObject
{
    unsigned char _staticBuffer[256];	// 8 = 0x8
    NSMutableArray *_subCoders;	// 264 = 0x108
    ENArchive *_readArchive;	// 272 = 0x110
    const char *_readBase;	// 280 = 0x118
    const char *_readSrc;	// 288 = 0x120
    const char *_readEnd;	// 296 = 0x128
    char *_writeBase;	// 304 = 0x130
    char *_writeDst;	// 312 = 0x138
    char *_writeLim;	// 320 = 0x140
    struct __sFILE *_fileHandle;	// 328 = 0x148
    NSMutableData *_bufferData;	// 336 = 0x150
    unsigned long long _bufferOffset;	// 344 = 0x158
    unsigned long long _bufferMaxSize;	// 352 = 0x160
}

- (void).cxx_destruct;	// IMP=0x00000000000354e1
@property(nonatomic) unsigned long long bufferMaxSize; // @synthesize bufferMaxSize=_bufferMaxSize;
@property(nonatomic) unsigned long long bufferOffset; // @synthesize bufferOffset=_bufferOffset;
@property(readonly, nonatomic) NSMutableData *bufferData; // @synthesize bufferData=_bufferData;
@property(readonly, nonatomic) struct __sFILE *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(readonly, nonatomic) char *writeLim; // @synthesize writeLim=_writeLim;
@property(readonly, nonatomic) char *writeDst; // @synthesize writeDst=_writeDst;
@property(readonly, nonatomic) char *writeBase; // @synthesize writeBase=_writeBase;
@property(readonly, nonatomic) const char *readEnd; // @synthesize readEnd=_readEnd;
@property(readonly, nonatomic) const char *readSrc; // @synthesize readSrc=_readSrc;
@property(readonly, nonatomic) const char *readBase; // @synthesize readBase=_readBase;
@property(readonly, nonatomic) ENArchive *readArchive; // @synthesize readArchive=_readArchive;
- (_Bool)_writeBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000003526b
- (_Bool)_skipLength:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000350ec
- (const char *)_readLength:(unsigned long long)arg1 eofOkay:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000034e06
- (_Bool)writeFixedUInt64:(unsigned long long)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000034da9
- (_Bool)readFixedUInt64:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000034d67
- (_Bool)writeFixedSInt64:(long long)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000034d0a
- (_Bool)readFixedSInt64:(long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000034cc8
- (_Bool)writeFixedDouble:(double)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000034c67
- (_Bool)readFixedDouble:(double *)arg1 error:(id *)arg2;	// IMP=0x0000000000034c22
- (_Bool)writeFixedUInt32:(unsigned int)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000034bc5
- (_Bool)readFixedUInt32:(unsigned int *)arg1 error:(id *)arg2;	// IMP=0x0000000000034b84
- (_Bool)writeFixedSInt32:(int)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000034b27
- (_Bool)readFixedSInt32:(int *)arg1 error:(id *)arg2;	// IMP=0x0000000000034ae6
- (_Bool)writeFixedFloat:(float)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000034a85
- (_Bool)readFixedFloat:(float *)arg1 error:(id *)arg2;	// IMP=0x0000000000034a40
- (_Bool)writeVarIntBoolean:(_Bool)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000349e7
- (_Bool)readVarIntBoolean:(_Bool *)arg1 error:(id *)arg2;	// IMP=0x00000000000349ae
- (_Bool)writeVarIntUInt64:(unsigned long long)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000034956
- (_Bool)readVarIntUInt64:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x000000000003491e
- (_Bool)writeVarIntSInt64:(long long)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000348bb
- (_Bool)readVarIntSInt64:(long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000034874
- (_Bool)writeVarIntUInt32:(unsigned int)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000003481c
- (_Bool)readVarIntUInt32:(unsigned int *)arg1 error:(id *)arg2;	// IMP=0x000000000003478d
- (_Bool)readVarIntInt32:(int *)arg1 error:(id *)arg2;	// IMP=0x00000000000346f6
- (_Bool)writeVarIntSInt32:(int)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000034697
- (_Bool)readVarIntSInt32:(int *)arg1 error:(id *)arg2;	// IMP=0x0000000000034656
- (_Bool)writeVarInt:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000345d7
- (_Bool)readVarInt:(unsigned long long *)arg1 eofOkay:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000344d3
- (_Bool)writeNSString:(id)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000003446c
- (id)readNSStringAndReturnError:(id *)arg1;	// IMP=0x0000000000034312
- (_Bool)writeNSData:(id)arg1 tag:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000034284
- (id)readNSDataAndReturnError:(id *)arg1;	// IMP=0x0000000000034130
- (_Bool)skipType:(unsigned char)arg1 error:(id *)arg2;	// IMP=0x000000000003400d
- (_Bool)writeLengthDelimitedPtr:(const void *)arg1 length:(unsigned long long)arg2 tag:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000033f86
- (const char *)readLengthDelimited:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000033f07
- (_Bool)readType:(char *)arg1 tag:(unsigned long long *)arg2 eofOkay:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000033ebe
- (void)prepareForReuse;	// IMP=0x0000000000033e54
- (void)enqueueSubCoder:(id)arg1;	// IMP=0x0000000000033dee
- (id)dequeueOrCreateSubCoder;	// IMP=0x0000000000033d95
- (void)setReadArchive:(id)arg1;	// IMP=0x0000000000033d19
- (void)setFileHandle:(struct __sFILE *)arg1;	// IMP=0x0000000000033cad
- (void)setWriteMutableData:(id)arg1;	// IMP=0x0000000000033c38
- (void)setWriteMemory:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000033baf
- (void)setReadMemory:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000033b2d
- (id)init;	// IMP=0x0000000000033ad4

@end

