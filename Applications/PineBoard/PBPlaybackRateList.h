//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PBPlaybackRateList : NSObject
{
    NSArray *_values;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001e3b70
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00100000001e37d0
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00100000001e3740
- (id)succinctDescriptionBuilder;	// IMP=0x00100000001e36a0
- (id)succinctDescription;	// IMP=0x00100000001e3630
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001e34c0
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (float)previousPlaybackRateBefore:(float)arg1 defaultPlaybackRate:(float)arg2;	// IMP=0x00100000001e32b0
- (float)nextPlaybackRateAfter:(float)arg1 defaultPlaybackRate:(float)arg2;	// IMP=0x00100000001e3110
@property(readonly, nonatomic) unsigned long long count;
- (id)init;	// IMP=0x00100000001e3050
- (id)initWithNumberArray:(id)arg1;	// IMP=0x00100000001e2f00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
