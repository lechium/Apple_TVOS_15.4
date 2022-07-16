//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RCPPlayerPlaybackOptions : NSObject
{
    _Bool _useHIDEventTimestampsForDelivery;	// 8 = 0x8
    _Bool _ignoreSenderProperties;	// 9 = 0x9
    double _playbackSpeedFactor;	// 16 = 0x10
    double _minDelayBetweenSends;	// 24 = 0x18
    double _firstEventFrameDelay;	// 32 = 0x20
    CDUnknownBlockType _customizeHIDEvent;	// 40 = 0x28
    struct CGAffineTransform _transform;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000109b0
@property(copy, nonatomic) CDUnknownBlockType customizeHIDEvent; // @synthesize customizeHIDEvent=_customizeHIDEvent;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) _Bool ignoreSenderProperties; // @synthesize ignoreSenderProperties=_ignoreSenderProperties;
@property(nonatomic) _Bool useHIDEventTimestampsForDelivery; // @synthesize useHIDEventTimestampsForDelivery=_useHIDEventTimestampsForDelivery;
@property(nonatomic) double firstEventFrameDelay; // @synthesize firstEventFrameDelay=_firstEventFrameDelay;
@property(nonatomic) double minDelayBetweenSends; // @synthesize minDelayBetweenSends=_minDelayBetweenSends;
@property(nonatomic) double playbackSpeedFactor; // @synthesize playbackSpeedFactor=_playbackSpeedFactor;
- (unsigned long long)timestampForEventReplay:(id)arg1;	// IMP=0x00000000000108cc
- (id)init;	// IMP=0x000000000001081e

@end

