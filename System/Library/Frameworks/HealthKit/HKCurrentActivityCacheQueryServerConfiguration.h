//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateComponents;

__attribute__((visibility("hidden")))
@interface HKCurrentActivityCacheQueryServerConfiguration
{
    NSDateComponents *_statisticsIntervalComponents;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000063fd7
- (void).cxx_destruct;	// IMP=0x0000000000064161
@property(copy, nonatomic) NSDateComponents *statisticsIntervalComponents; // @synthesize statisticsIntervalComponents=_statisticsIntervalComponents;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000640a2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000063fdf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000063f72

@end

