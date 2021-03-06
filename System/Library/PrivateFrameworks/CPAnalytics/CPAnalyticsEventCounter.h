//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPAnalyticsEventMatcher, NSString;

@interface CPAnalyticsEventCounter : NSObject
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    CPAnalyticsEventMatcher *_matcher;	// 24 = 0x18
    NSString *_countKey;	// 32 = 0x20
}

+ (id)_validateAndParseEventName:(id)arg1;	// IMP=0x000000000000438e
- (void).cxx_destruct;	// IMP=0x000000000000435b
@property(readonly, nonatomic) NSString *countKey; // @synthesize countKey=_countKey;
@property(readonly, nonatomic) CPAnalyticsEventMatcher *matcher; // @synthesize matcher=_matcher;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)resetCount;	// IMP=0x0000000000004315
- (void)countEvent:(id)arg1;	// IMP=0x00000000000041c5
- (id)initWithName:(id)arg1 matcher:(id)arg2;	// IMP=0x000000000000407e
- (id)initWithEventName:(id)arg1;	// IMP=0x0000000000003f28
- (id)initWithConfig:(id)arg1;	// IMP=0x0000000000003cb4

@end

