//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject
{
    AVCaptureAudioChannelInternal *_internal;	// 8 = 0x8
    _Bool _enabled;	// 16 = 0x10
    float _volume;	// 20 = 0x14
}

+ (void)initialize;	// IMP=0x000000000002a56b
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) float peakHoldLevel;
@property(readonly, nonatomic) float averagePowerLevel;
- (void)invalidate;	// IMP=0x000000000002a620
- (void)dealloc;	// IMP=0x000000000002a5e5
- (id)initWithConnection:(id)arg1;	// IMP=0x000000000002a57c

@end
