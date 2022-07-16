//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _PXStoryPacingControllerDecisionHistory : NSObject
{
    NSMutableArray *_decisionHistory;	// 8 = 0x8
    long long _onBarCount;	// 16 = 0x10
    long long _decisionCount;	// 24 = 0x18
    double _onBarPercentage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000008495ff
@property(readonly, nonatomic) double onBarPercentage; // @synthesize onBarPercentage=_onBarPercentage;
@property(readonly, nonatomic) long long decisionCount; // @synthesize decisionCount=_decisionCount;
@property(readonly, nonatomic) long long onBarCount; // @synthesize onBarCount=_onBarCount;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentError;
- (id)descriptionWithShortStyle:(_Bool)arg1;	// IMP=0x00000000008493c5
- (void)recordDecision:(CDStruct_12f93e2f)arg1;	// IMP=0x0000000000849314
- (void)resetWithTargetDuration:(CDStruct_1b6d18a9)arg1 reason:(id)arg2;	// IMP=0x000000000084923e
- (CDStruct_12f93e2f)firstPacingDecisionAfterTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000008490d7
- (id)init;	// IMP=0x0000000000848ffe

@end
