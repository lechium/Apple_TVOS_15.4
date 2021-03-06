//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCore/NSCopying-Protocol.h>
#import <AVFCore/NSMutableCopying-Protocol.h>

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVTimedMetadataGroup <NSCopying, NSMutableCopying>
{
    AVTimedMetadataGroupInternal *_priv;	// 8 = 0x8
}

@property(readonly, copy, nonatomic) NSArray *items;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
@property(readonly, nonatomic, getter=_timedMetadataGroupInternal) AVTimedMetadataGroupInternal *timedMetadataGroupInternal;
- (unsigned long long)hash;	// IMP=0x00000000000f1037
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f0f10
- (id)description;	// IMP=0x00000000000f0e3f
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f0da3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f0d98
- (void)dealloc;	// IMP=0x00000000000f0d21
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x00000000000f0986
- (id)initWithItems:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;	// IMP=0x00000000000f08cd
- (id)init;	// IMP=0x00000000000f0856
- (struct opaqueCMSampleBuffer *)_createSerializedRepresentationWithFormatDescription:(struct opaqueCMFormatDescription *)arg1 error:(id *)arg2;	// IMP=0x00000000000f1181
- (const struct opaqueCMFormatDescription *)copyFormatDescription;	// IMP=0x00000000000f1125

@end

