//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class NSString;

@protocol _GKStateMachineDelegate <NSObject>

@optional
- (NSString *)missingTransitionFromState:(NSString *)arg1 toState:(NSString *)arg2;
- (void)stateDidChange;
- (void)stateWillChange;
@end

