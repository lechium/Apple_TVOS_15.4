//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TURemoteVideoClient-Protocol.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface TURemoteVideoClient : NSObject <TURemoteVideoClient>
{
    long long _videoContextSlotIdentifier;	// 8 = 0x8
    CALayer *_videoLayer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000054074
@property(retain, nonatomic) CALayer *videoLayer; // @synthesize videoLayer=_videoLayer;
@property(readonly, nonatomic) long long videoContextSlotIdentifier; // @synthesize videoContextSlotIdentifier=_videoContextSlotIdentifier;
- (void)cleanUpSubLayerForLayer:(id)arg1;	// IMP=0x0000000000053e18
- (id)nameForSubLayer;	// IMP=0x0000000000053dec
- (void)insertSubLayerInLayer:(id)arg1 videoSlotIdentifier:(long long)arg2;	// IMP=0x00000000000535df
- (void)setVideoLayer:(id)arg1 forMode:(int)arg2;	// IMP=0x00000000000533d6
- (id)initWithVideoContextSlotIdentifier:(long long)arg1;	// IMP=0x0000000000053399
- (id)init;	// IMP=0x000000000005330f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
