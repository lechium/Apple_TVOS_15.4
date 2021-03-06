//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScoreBoard/NSObject-Protocol.h>

@class NSDictionary, NSString, SCRStateTransitionContext;

@protocol SCRStateTransitionable <NSObject>
- (void)handleStateTransition:(SCRStateTransitionContext *)arg1;

@optional
+ (NSString *)descriptionForState:(unsigned long long)arg1;
+ (NSDictionary *)validStateTransitions;
@end

