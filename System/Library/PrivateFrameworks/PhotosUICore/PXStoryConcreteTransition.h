//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXStoryEffectTransition-Protocol.h>
#import <PhotosUICore/PXStorySegmentTransition-Protocol.h>
#import <PhotosUICore/PXStoryTransition-Protocol.h>

@class NSArray, NSString, PXGEffect;

@interface PXStoryConcreteTransition <PXStorySegmentTransition, PXStoryEffectTransition, PXStoryTransition>
{
    BOOL _kind;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
    long long _event;	// 16 = 0x10
    CDUnknownBlockType _effectAlphaHandler;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    NSArray *_clipLayouts;	// 40 = 0x28
    PXGEffect *_effect;	// 48 = 0x30
    PXGEffect *_auxiliaryEffect;	// 56 = 0x38
    double _initialClipAlpha;	// 64 = 0x40
    CDStruct_1b6d18a9 _duration;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000013cf21
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic) double initialClipAlpha; // @synthesize initialClipAlpha=_initialClipAlpha;
@property(readonly, nonatomic) PXGEffect *auxiliaryEffect; // @synthesize auxiliaryEffect=_auxiliaryEffect;
@property(readonly, nonatomic) PXGEffect *effect; // @synthesize effect=_effect;
@property(readonly, copy, nonatomic) NSArray *clipLayouts; // @synthesize clipLayouts=_clipLayouts;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType effectAlphaHandler; // @synthesize effectAlphaHandler=_effectAlphaHandler;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) BOOL kind; // @synthesize kind=_kind;
- (id)diagnosticDescription;	// IMP=0x000000000013ce24
@property(readonly, copy) NSString *description;
- (void)setPrimaryEffectAlpha:(double)arg1 auxiliaryEffectAlpha:(double)arg2;	// IMP=0x000000000013ca9e
- (void)configureEffectForTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000013c9f7
- (double)clipAlphaForTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000013c950
@property(readonly, nonatomic) double progress;
- (void)_end:(_Bool)arg1;	// IMP=0x000000000013c87c
- (void)wasStopped;	// IMP=0x000000000013c686
- (void)_updateClipAlphaForTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000013c511
- (void)timeDidChange;	// IMP=0x000000000013c3bc
- (_Bool)canBePaused;	// IMP=0x000000000013c3b4
- (id)initWithKind:(BOOL)arg1 duration:(CDStruct_1b6d18a9)arg2 effect:(id)arg3 auxiliaryEffect:(id)arg4;	// IMP=0x000000000013c305
- (id)initWithKind:(BOOL)arg1 duration:(CDStruct_1b6d18a9)arg2 effect:(id)arg3;	// IMP=0x000000000013c2f0
- (id)initWithKind:(BOOL)arg1 duration:(CDStruct_1b6d18a9)arg2 event:(long long)arg3 clipLayouts:(id)arg4;	// IMP=0x000000000013c218
- (id)initWithKind:(BOOL)arg1 duration:(CDStruct_1b6d18a9)arg2 event:(long long)arg3;	// IMP=0x000000000013c1a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

