//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CMStrideCalLocationFSM, CalibrationTrack;

@protocol CMStrideCalLocationFSMDelegate <NSObject>
- (void)fsm:(CMStrideCalLocationFSM *)arg1 didUpdateSource:(int)arg2;
- (void)fsm:(CMStrideCalLocationFSM *)arg1 didUpdateLocationAtTime:(double)arg2;
- (void)fsm:(CMStrideCalLocationFSM *)arg1 didYieldTrack:(CalibrationTrack *)arg2;
- (void)fsm:(CMStrideCalLocationFSM *)arg1 didTransitionFromState:(int)arg2 toState:(int)arg3;
@end

