//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVDateRangeMetadataGroupInternal, NSArray, NSDate;

@interface AVMutableDateRangeMetadataGroup
{
    AVDateRangeMetadataGroupInternal *_mutablePriv;	// 16 = 0x10
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f30f6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f3098
@property(copy, nonatomic) NSArray *items;
@property(copy, nonatomic) NSDate *endDate;
@property(copy, nonatomic) NSDate *startDate;
- (id)_initWithTaggedRangeMetadataDictionary:(id)arg1 items:(id)arg2;	// IMP=0x00000000000f2ec0

@end

