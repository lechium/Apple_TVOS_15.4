//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateInterval;

__attribute__((visibility("hidden")))
@interface _HKStatisticsQueryServerConfiguration
{
    unsigned long long _options;	// 8 = 0x8
    unsigned long long _mergeStrategy;	// 16 = 0x10
    NSDateInterval *_dateInterval;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a540d
- (void).cxx_destruct;	// IMP=0x00000000000a5621
@property(copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(nonatomic) unsigned long long mergeStrategy; // @synthesize mergeStrategy=_mergeStrategy;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a54fd
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a5415
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a537f

@end
