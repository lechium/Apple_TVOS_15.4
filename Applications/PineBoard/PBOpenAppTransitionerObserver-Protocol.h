//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class PBOpenAppTransition;
@protocol PBOpenAppTransitioner;

@protocol PBOpenAppTransitionerObserver <NSObject>

@optional
- (void)appTransitioner:(id <PBOpenAppTransitioner>)arg1 willLaunchProcessForAppTransition:(PBOpenAppTransition *)arg2;
- (void)appTransitioner:(id <PBOpenAppTransitioner>)arg1 didInterruptAppTransition:(PBOpenAppTransition *)arg2 becauseOfOtherAppTransition:(PBOpenAppTransition *)arg3;
- (void)appTransitioner:(id <PBOpenAppTransitioner>)arg1 didCompleteAppTransition:(PBOpenAppTransition *)arg2;
- (void)appTransitioner:(id <PBOpenAppTransitioner>)arg1 willStartAnimationForAppTransition:(PBOpenAppTransition *)arg2;
- (void)appTransitioner:(id <PBOpenAppTransitioner>)arg1 willBeginAppTransition:(PBOpenAppTransition *)arg2;
@end

