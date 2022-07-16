//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableNumberFilter-Protocol.h>

@class NSString;

@interface PXNumberFilter <PXMutableNumberFilter>
{
    struct {
        _Bool output;
    } _needsUpdateFlags;	// 8 = 0x8
    double _input;	// 16 = 0x10
    double _time;	// 24 = 0x18
    double _output;	// 32 = 0x20
    double _lastTime;	// 40 = 0x28
}

@property(readonly, nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic, setter=_setOutput:) double output; // @synthesize output=_output;
@property(nonatomic) double time; // @synthesize time=_time;
@property(readonly, nonatomic) double input; // @synthesize input=_input;
- (void)_updateOutputIfNeeded;	// IMP=0x0000000000268ce9
- (void)_invalidateOutput;	// IMP=0x0000000000268ccc
- (void)_updateIfNeeded;	// IMP=0x0000000000268c17
- (void)_setNeedsUpdate;	// IMP=0x0000000000268c03
- (_Bool)_needsUpdate;	// IMP=0x0000000000268bf3
- (void)invalidateOutput;	// IMP=0x0000000000268ba7
@property(readonly, nonatomic) double currentTime;
- (void)setInput:(double)arg1;	// IMP=0x0000000000268af5
- (void)_setLastTime:(double)arg1;	// IMP=0x0000000000268ae3
- (void)didPerformChanges;	// IMP=0x0000000000268aa2
- (id)mutableChangeObject;	// IMP=0x0000000000268a99
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000268a6a
- (double)updatedOutput;	// IMP=0x0000000000268991
- (double)initialOutputForInput:(double)arg1;	// IMP=0x000000000026898b
- (id)initWithInput:(double)arg1;	// IMP=0x000000000026891d
- (id)init;	// IMP=0x0000000000268908

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

