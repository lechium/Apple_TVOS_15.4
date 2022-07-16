//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIControl;
@protocol MPDetailScrubControllerDelegate, MPDetailedScrubbing;

@interface MPDetailScrubController : NSObject
{
    _Bool _didBeginTracking;	// 8 = 0x8
    _Bool _needsCommit;	// 9 = 0x9
    float _accumulatedDelta;	// 12 = 0xc
    struct CGPoint _previousLocationInView;	// 16 = 0x10
    struct CGPoint _beginLocationInView;	// 32 = 0x20
    struct CGPoint _lastCommittedLocationInView;	// 48 = 0x30
    float _currentValue;	// 64 = 0x40
    _Bool _detailedScrubbingEnabled;	// 68 = 0x44
    _Bool _isTracking;	// 69 = 0x45
    UIControl<MPDetailedScrubbing> *_scrubbingControl;	// 72 = 0x48
    id <MPDetailScrubControllerDelegate> _delegate;	// 80 = 0x50
    double _duration;	// 88 = 0x58
    double _scrubbingVerticalRange;	// 96 = 0x60
    long long _currentScrubSpeed;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000002934ad
@property(readonly, nonatomic) long long currentScrubSpeed; // @synthesize currentScrubSpeed=_currentScrubSpeed;
@property(readonly, nonatomic) _Bool isTracking; // @synthesize isTracking=_isTracking;
@property(nonatomic) _Bool detailedScrubbingEnabled; // @synthesize detailedScrubbingEnabled=_detailedScrubbingEnabled;
@property(nonatomic) double scrubbingVerticalRange; // @synthesize scrubbingVerticalRange=_scrubbingVerticalRange;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <MPDetailScrubControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIControl<MPDetailedScrubbing> *scrubbingControl; // @synthesize scrubbingControl=_scrubbingControl;
- (void)_commitValue:(float)arg1;	// IMP=0x000000000029339d
- (void)_endScrubbing;	// IMP=0x000000000029332f
- (void)_beginScrubbing;	// IMP=0x00000000002932a2
- (float)_scaleForIdealValueForVerticalPosition:(double)arg1;	// IMP=0x000000000029320e
- (float)_minimumScale;	// IMP=0x0000000000293181
- (float)scaleForVerticalPosition:(double)arg1;	// IMP=0x0000000000293004
@property(readonly, nonatomic) _Bool durationAllowsForDetailedScrubbing;
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x0000000000292f6c
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000292f5a
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000292b64
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000292a7c
- (id)init;	// IMP=0x0000000000292a3a
- (id)initWithScrubbingControl:(id)arg1;	// IMP=0x00000000002929c4

@end
