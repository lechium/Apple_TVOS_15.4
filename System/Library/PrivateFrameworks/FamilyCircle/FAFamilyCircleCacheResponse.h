//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FAFamilyCircle, NSDate;

@interface FAFamilyCircleCacheResponse : NSObject
{
    FAFamilyCircle *_familyCircle;	// 8 = 0x8
    NSDate *_cacheDate;	// 16 = 0x10
    double _maxAge;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000c3f1
@property(nonatomic) double maxAge; // @synthesize maxAge=_maxAge;
@property(retain, nonatomic) NSDate *cacheDate; // @synthesize cacheDate=_cacheDate;
@property(retain, nonatomic) FAFamilyCircle *familyCircle; // @synthesize familyCircle=_familyCircle;
- (_Bool)_isFamilyCircleFresh:(id)arg1;	// IMP=0x000000000000c2fb
- (_Bool)isFamilyCircleFresh;	// IMP=0x000000000000c2a1
- (id)familyCircleValidatingAgeWithDate:(id)arg1;	// IMP=0x000000000000c25d
- (id)familyCircleIfFresh;	// IMP=0x000000000000c1f7
- (id)initWithFamilyCircle:(id)arg1 cacheDate:(id)arg2 maxAge:(double)arg3;	// IMP=0x000000000000c14f

@end

