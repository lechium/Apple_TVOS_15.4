//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISDisplayLink, NSDate;

@interface ISTouchLivePhotoPlaybackFilter
{
    _Bool _touchActive;	// 8 = 0x8
    long long __playbackRequestID;	// 16 = 0x10
    ISDisplayLink *__displayLink;	// 24 = 0x18
    NSDate *__playbackStartDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000021d50
@property(retain, nonatomic, setter=_setPlaybackStartDate:) NSDate *_playbackStartDate; // @synthesize _playbackStartDate=__playbackStartDate;
@property(nonatomic, setter=_setDisplayLink:) ISDisplayLink *_displayLink; // @synthesize _displayLink=__displayLink;
@property(nonatomic, setter=_setPlaybackReaquestID:) long long _playbackRequestID; // @synthesize _playbackRequestID=__playbackRequestID;
@property(nonatomic, getter=isTouchActive) _Bool touchActive; // @synthesize touchActive=_touchActive;
- (void)reset;	// IMP=0x0000000000021c95
- (void)_handleDisplayLink;	// IMP=0x0000000000021beb
- (void)didPerformChanges;	// IMP=0x0000000000021b16
- (long long)_nextPlaybackRequestID;	// IMP=0x0000000000021922

@end
