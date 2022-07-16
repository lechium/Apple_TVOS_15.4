//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLIndirectArgumentDescriptorInternal
{
    struct MTLArgumentDescriptorPrivate _private;	// 8 = 0x8
}

+ (id)indirectArgumentDescriptor;	// IMP=0x0000000000030d01
- (void)setConstantBlockAlignment:(unsigned long long)arg1;	// IMP=0x00000000000311f3
- (unsigned long long)constantBlockAlignment;	// IMP=0x00000000000311e1
- (void)setTextureType:(unsigned long long)arg1;	// IMP=0x00000000000311cf
- (unsigned long long)textureType;	// IMP=0x00000000000311bd
- (void)setAccess:(unsigned long long)arg1;	// IMP=0x0000000000031197
- (unsigned long long)access;	// IMP=0x0000000000031185
- (void)setArrayLength:(unsigned long long)arg1;	// IMP=0x0000000000031173
- (unsigned long long)arrayLength;	// IMP=0x0000000000031161
- (void)setIndex:(unsigned long long)arg1;	// IMP=0x000000000003114f
- (unsigned long long)index;	// IMP=0x000000000003113d
- (void)setDataType:(unsigned long long)arg1;	// IMP=0x0000000000031118
- (unsigned long long)dataType;	// IMP=0x0000000000031107
- (id)description;	// IMP=0x00000000000310f3
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000030ed4
- (unsigned long long)hash;	// IMP=0x0000000000030e34
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000030dd5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000030d6e
- (id)init;	// IMP=0x0000000000030d1b

@end
