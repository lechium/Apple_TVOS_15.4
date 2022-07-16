//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLAttributeDescriptorArray, MTLBufferLayoutDescriptorArray;

@interface MTLStageInputOutputDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000041b0
+ (id)alloc;	// IMP=0x00000000000041a6
+ (id)stageInputOutputDescriptor;	// IMP=0x000000000000418d
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000004229
- (void)reset;	// IMP=0x0000000000004223
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000421b

// Remaining properties
@property(readonly) MTLAttributeDescriptorArray *attributes; // @dynamic attributes;
@property(nonatomic) unsigned long long indexBufferIndex; // @dynamic indexBufferIndex;
@property(nonatomic) unsigned long long indexType; // @dynamic indexType;
@property(readonly) MTLBufferLayoutDescriptorArray *layouts; // @dynamic layouts;

@end

