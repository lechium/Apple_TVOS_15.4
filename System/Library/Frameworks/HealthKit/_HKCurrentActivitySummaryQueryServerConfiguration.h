//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _HKCurrentActivitySummaryQueryServerConfiguration
{
    NSDictionary *_collectionIntervals;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000057fd
- (void).cxx_destruct;	// IMP=0x00000000000182e4
@property(copy, nonatomic) NSDictionary *collectionIntervals; // @synthesize collectionIntervals=_collectionIntervals;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011e3f6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002eb1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011e391

@end

