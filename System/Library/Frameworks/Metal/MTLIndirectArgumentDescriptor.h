//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLIndirectArgumentDescriptor
{
}

+ (id)indirectArgumentDescriptor;	// IMP=0x0000000000031282
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003120f
+ (id)alloc;	// IMP=0x0000000000031205
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003127a

// Remaining properties
@property(nonatomic) unsigned long long access; // @dynamic access;
@property(nonatomic) unsigned long long arrayLength; // @dynamic arrayLength;
@property(nonatomic) unsigned long long constantBlockAlignment; // @dynamic constantBlockAlignment;
@property(nonatomic) unsigned long long dataType; // @dynamic dataType;
@property(nonatomic) unsigned long long index; // @dynamic index;
@property(nonatomic) unsigned long long textureType; // @dynamic textureType;

@end

