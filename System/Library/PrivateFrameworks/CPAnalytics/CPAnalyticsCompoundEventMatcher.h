//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CPAnalyticsCompoundEventMatcher
{
    unsigned long long _type;	// 8 = 0x8
    NSArray *_subEventMatchers;	// 16 = 0x10
}

+ (id)notEventMatcherWithSubEventMatcher:(id)arg1;	// IMP=0x000000000000ee86
+ (id)orEventMatcherWithSubEventMatchers:(id)arg1;	// IMP=0x000000000000ee38
+ (id)andEventMatcherWithSubEventMatchers:(id)arg1;	// IMP=0x000000000000edea
- (void).cxx_destruct;	// IMP=0x000000000000edd7
@property(readonly, copy, nonatomic) NSArray *subEventMatchers; // @synthesize subEventMatchers=_subEventMatchers;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)doesMatch:(id)arg1;	// IMP=0x000000000000eab8
- (id)initWithType:(unsigned long long)arg1 subEventMatchers:(id)arg2;	// IMP=0x000000000000ea2c
- (id)init;	// IMP=0x000000000000ea0e

@end

