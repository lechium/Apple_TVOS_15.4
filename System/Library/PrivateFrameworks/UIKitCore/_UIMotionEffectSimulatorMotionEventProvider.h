//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectSimulatorMotionEventProvider
{
    NSOperationQueue *_motionEventQueue;	// 8 = 0x8
    _Bool _shouldGenerateEvents;	// 16 = 0x10
    _Bool _startedSimulatorUpdates;	// 17 = 0x11
}

- (void).cxx_destruct;	// IMP=0x0000000000a69ccb
- (void)stopGeneratingEvents;	// IMP=0x0000000000a69c5c
- (void)startGeneratingEvents;	// IMP=0x0000000000a69bed
- (void)dealloc;	// IMP=0x0000000000a69b8a
- (id)init;	// IMP=0x0000000000a69b13

@end

