//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMExecuteOperation-Protocol.h>

@class HMActionSet, NSString;

@interface HMExecuteRequest <HMExecuteOperation>
{
    HMActionSet *_actionSet;	// 8 = 0x8
}

+ (id)executeRequestWithActionSet:(id)arg1;	// IMP=0x000000000006d49b
- (void).cxx_destruct;	// IMP=0x000000000006d488
@property(readonly, nonatomic) HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006d35f
- (id)initWithActionSet:(id)arg1;	// IMP=0x000000000006d2f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

