//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUState, NSArray, NSMutableArray, NSPointerArray;

@interface CUStateMachine : NSObject
{
    CUState *_currentState;	// 8 = 0x8
    NSMutableArray *_eventQueue;	// 16 = 0x10
    _Bool _dispatching;	// 24 = 0x18
    NSPointerArray *_lcaPath;	// 32 = 0x20
    _Bool _started;	// 40 = 0x28
    CUState *_targetState;	// 48 = 0x30
    CUState *_initialState;	// 56 = 0x38
    NSArray *_states;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000a4ea4
@property(retain, nonatomic) NSArray *states; // @synthesize states=_states;
@property(retain, nonatomic) CUState *initialState; // @synthesize initialState=_initialState;
- (void)_firstTimeInit;	// IMP=0x00000000000a46eb
- (void)transitionToState:(id)arg1;	// IMP=0x00000000000a4696
- (void)dispatchEvent:(id)arg1;	// IMP=0x00000000000a41f5
- (void)invalidate;	// IMP=0x00000000000a4050
- (void)start;	// IMP=0x00000000000a3d0f
- (void)dealloc;	// IMP=0x00000000000a3c71

@end
