//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDisplayLinkProtocol-Protocol.h>

@class NSString;

@interface PXManualDisplayLink : NSObject <PXDisplayLinkProtocol>
{
    _Bool _paused;	// 8 = 0x8
    unsigned int _highFrameRateReason;	// 12 = 0xc
    id _target;	// 16 = 0x10
    SEL _selector;	// 24 = 0x18
    double _duration;	// 32 = 0x20
    long long _preferredFramesPerSecond;	// 40 = 0x28
    double _targetTimestamp;	// 48 = 0x30
    unsigned long long _frameRateRangeType;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000553dc4
@property(nonatomic) unsigned long long frameRateRangeType; // @synthesize frameRateRangeType=_frameRateRangeType;
@property(nonatomic) unsigned int highFrameRateReason; // @synthesize highFrameRateReason=_highFrameRateReason;
@property(readonly, nonatomic) double targetTimestamp; // @synthesize targetTimestamp=_targetTimestamp;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void)invalidate;	// IMP=0x0000000000553d47
- (void)incrementTargetTimeWithInterval:(double)arg1;	// IMP=0x0000000000553cb6
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double timestamp;
@property(readonly, nonatomic) double currentMediaTime;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2;	// IMP=0x0000000000553b50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

