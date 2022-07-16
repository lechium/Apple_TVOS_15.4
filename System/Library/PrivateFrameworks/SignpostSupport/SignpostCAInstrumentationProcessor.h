//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SignpostEvent;

@interface SignpostCAInstrumentationProcessor : NSObject
{
    _Bool _isConciseFormat;	// 8 = 0x8
    unsigned int _curFrameSeed;	// 12 = 0xc
    CDUnknownBlockType _commitIntervalBlock;	// 16 = 0x10
    CDUnknownBlockType _transactionLifetimeBlock;	// 24 = 0x18
    CDUnknownBlockType _frameLatencyBlock;	// 32 = 0x20
    CDUnknownBlockType _hidLatencyBlock;	// 40 = 0x28
    CDUnknownBlockType _renderBlock;	// 48 = 0x30
    CDUnknownBlockType _frameLifetimeBlock;	// 56 = 0x38
    CDUnknownBlockType _contextInfoBlock;	// 64 = 0x40
    NSMutableDictionary *_frameSeedToAccumulatedStateDict;	// 72 = 0x48
    SignpostEvent *_curLongFrameLifetimeBegin;	// 80 = 0x50
    SignpostEvent *_curFrameLifetimeBegin;	// 88 = 0x58
}

+ (void)addNeededSCToAllowlist:(id)arg1;	// IMP=0x0000000000008807
+ (void)addNeededSCToWhitelist:(id)arg1;	// IMP=0x00000000000087c9
+ (_Bool)filterPassesRequiredSCForCAInstrumentation:(id)arg1;	// IMP=0x0000000000008698
- (void).cxx_destruct;	// IMP=0x000000000000a993
@property(nonatomic) _Bool isConciseFormat; // @synthesize isConciseFormat=_isConciseFormat;
@property(nonatomic) unsigned int curFrameSeed; // @synthesize curFrameSeed=_curFrameSeed;
@property(retain, nonatomic) SignpostEvent *curFrameLifetimeBegin; // @synthesize curFrameLifetimeBegin=_curFrameLifetimeBegin;
@property(retain, nonatomic) SignpostEvent *curLongFrameLifetimeBegin; // @synthesize curLongFrameLifetimeBegin=_curLongFrameLifetimeBegin;
@property(readonly, nonatomic) NSMutableDictionary *frameSeedToAccumulatedStateDict; // @synthesize frameSeedToAccumulatedStateDict=_frameSeedToAccumulatedStateDict;
@property(copy, nonatomic) CDUnknownBlockType contextInfoBlock; // @synthesize contextInfoBlock=_contextInfoBlock;
@property(copy, nonatomic) CDUnknownBlockType frameLifetimeBlock; // @synthesize frameLifetimeBlock=_frameLifetimeBlock;
@property(copy, nonatomic) CDUnknownBlockType renderBlock; // @synthesize renderBlock=_renderBlock;
@property(copy, nonatomic) CDUnknownBlockType hidLatencyBlock; // @synthesize hidLatencyBlock=_hidLatencyBlock;
@property(copy, nonatomic) CDUnknownBlockType frameLatencyBlock; // @synthesize frameLatencyBlock=_frameLatencyBlock;
@property(copy, nonatomic) CDUnknownBlockType transactionLifetimeBlock; // @synthesize transactionLifetimeBlock=_transactionLifetimeBlock;
@property(copy, nonatomic) CDUnknownBlockType commitIntervalBlock; // @synthesize commitIntervalBlock=_commitIntervalBlock;
- (id)newConfiguredExtractor;	// IMP=0x000000000000a698
- (void)handleDeviceReboot;	// IMP=0x000000000000a65f
- (_Bool)handleSignpostEvent:(id)arg1;	// IMP=0x000000000000a3f9
- (_Bool)handleSignpostInterval:(id)arg1;	// IMP=0x000000000000983d
- (void)handleSignpostIntervalBegin:(id)arg1;	// IMP=0x000000000000960f
- (void)_handleLongFrameLifetimeBegin:(id)arg1;	// IMP=0x0000000000009552
- (void)_handleFrameLifetimeBegin:(id)arg1;	// IMP=0x0000000000009495
- (void)_handleContextInfo:(id)arg1;	// IMP=0x00000000000092c7
- (void)_handleFrameLifetimeInterval:(id)arg1 isLong:(_Bool)arg2;	// IMP=0x000000000000920c
- (void)_handleFrameLatencyInterval:(id)arg1;	// IMP=0x0000000000008e78
- (void)_handleRenderInterval:(id)arg1;	// IMP=0x0000000000008de3
- (void)_handleHIDInterval:(id)arg1;	// IMP=0x0000000000008c87
- (void)_cleanupStateWithSeed:(unsigned int)arg1;	// IMP=0x0000000000008a86
- (id)_stateForFrameSeed:(unsigned int)arg1;	// IMP=0x0000000000008968
- (id)init;	// IMP=0x00000000000088fe

@end
