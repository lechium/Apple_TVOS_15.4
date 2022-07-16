//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface _ICResultCache : NSObject
{
    NSArray *_cachedResults;	// 8 = 0x8
    NSDate *_start;	// 16 = 0x10
    double _ttlInSeconds;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000d9af
- (id)searchWithValue:(id)arg1;	// IMP=0x000000000000d675
- (_Bool)fuzzyMatchItem:(id)arg1 withValue:(id)arg2;	// IMP=0x000000000000d413
- (id)searchWithTrigger:(id)arg1;	// IMP=0x000000000000d1cc
- (void)clear;	// IMP=0x000000000000d1b2
- (void)addResults:(id)arg1;	// IMP=0x000000000000d14b
- (id)initWithTTL:(double)arg1;	// IMP=0x000000000000d108

@end
