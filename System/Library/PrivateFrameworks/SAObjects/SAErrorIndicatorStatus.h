//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSArray, NSString;

@interface SAErrorIndicatorStatus <SABackgroundContextObject>
{
}

+ (id)errorIndicatorStatusWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003c2de
+ (id)errorIndicatorStatus;	// IMP=0x000000000003c2cc
@property(copy, nonatomic) NSArray *values;
@property(nonatomic) _Bool deviceFixingProblems;
- (id)encodedClassName;	// IMP=0x000000000003c2bf
- (id)groupIdentifier;	// IMP=0x000000000003c2ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

