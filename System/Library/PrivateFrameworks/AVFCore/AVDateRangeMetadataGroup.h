//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCore/NSCopying-Protocol.h>
#import <AVFCore/NSMutableCopying-Protocol.h>

@class AVDateRangeMetadataGroupInternal, NSArray, NSDate, NSString;

@interface AVDateRangeMetadataGroup <NSCopying, NSMutableCopying>
{
    AVDateRangeMetadataGroupInternal *_priv;	// 8 = 0x8
}

+ (id)_metadataItemsForFigMetadataArray:(id)arg1;	// IMP=0x00000000000f2612
+ (id)_figMetadataArrayForMetadataItems:(id)arg1;	// IMP=0x00000000000f2493
@property(readonly, copy, nonatomic) NSArray *items;
@property(readonly, copy, nonatomic) NSDate *endDate;
@property(readonly, copy, nonatomic) NSDate *startDate;
- (unsigned long long)hash;	// IMP=0x00000000000f21a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f1fb1
- (id)description;	// IMP=0x00000000000f1ef0
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f1e8d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f1e82
- (void)dealloc;	// IMP=0x00000000000f1dc0
- (id)initWithItems:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;	// IMP=0x00000000000f1cf4
- (id)init;	// IMP=0x00000000000f1c99
- (id)uniqueID;	// IMP=0x00000000000f22a9
- (id)classifyingLabel;	// IMP=0x00000000000f2294
@property(readonly, nonatomic) NSString *cueingOptions;
- (id)propertyList;	// IMP=0x00000000000f2382
- (id)initWithPropertyList:(id)arg1;	// IMP=0x00000000000f22be
@property(readonly, nonatomic) NSDate *modificationTimestamp;
@property(readonly, nonatomic) NSDate *discoveryTimestamp;
- (id)_initWithTaggedRangeMetadataDictionary:(id)arg1 items:(id)arg2;	// IMP=0x00000000000f23a9
- (void)_extractPropertiesFromTaggedRangeMetadataDictionary:(id)arg1;	// IMP=0x00000000000f29f9
- (id)_taggedRangeMetadataDictionary;	// IMP=0x00000000000f2798
@property(readonly, nonatomic, getter=_dateRangeMetadataGroupInternal) AVDateRangeMetadataGroupInternal *dateRangeMetadataGroupInternal;

@end
