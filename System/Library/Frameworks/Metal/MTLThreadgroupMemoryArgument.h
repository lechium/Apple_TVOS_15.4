//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLThreadgroupMemoryArgument
{
    unsigned short _alignment;	// 64 = 0x40
    unsigned int _dataSize;	// 68 = 0x44
    unsigned long long _dataType;	// 72 = 0x48
}

- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000029bc9
- (void)setStructType:(id)arg1;	// IMP=0x0000000000029bc0
- (void)setStructType:(id)arg1 doRetain:(_Bool)arg2;	// IMP=0x0000000000029b26
- (id)structType;	// IMP=0x0000000000029b14
- (id)threadgroupMemoryStructType;	// IMP=0x0000000000029ae2
- (unsigned long long)threadgroupMemoryDataType;	// IMP=0x0000000000029ad1
- (unsigned long long)threadgroupMemoryDataSize;	// IMP=0x0000000000029ac1
- (unsigned long long)threadgroupMemoryAlignment;	// IMP=0x0000000000029ab0
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(_Bool)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 dataSize:(unsigned long long)arg8 alignment:(unsigned long long)arg9;	// IMP=0x00000000000299e4

@end

