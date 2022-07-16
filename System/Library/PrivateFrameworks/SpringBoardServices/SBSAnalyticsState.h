//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSDescriptionProviding-Protocol.h>

@class NSDictionary, NSString;

@interface SBSAnalyticsState : NSObject <BSDescriptionProviding>
{
    double _timestamp;	// 8 = 0x8
    NSDictionary *_payload;	// 16 = 0x10
}

+ (id)withTimestamp:(double)arg1 payload:(id)arg2;	// IMP=0x000000000000d57c
+ (id)withTimestamp:(double)arg1;	// IMP=0x000000000000d568
- (void).cxx_destruct;	// IMP=0x000000000000dcb9
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)succinctDescriptionBuilder;	// IMP=0x000000000000dc46
- (id)succinctDescription;	// IMP=0x000000000000dbf6
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000000dab4
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000000da64
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)coreAnalyticsRepresentation;	// IMP=0x000000000000d9b4
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000000d99e
- (id)initWithTimestamp:(double)arg1 payload:(id)arg2;	// IMP=0x000000000000d5d7

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

