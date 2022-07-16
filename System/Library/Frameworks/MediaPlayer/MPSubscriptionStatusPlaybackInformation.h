//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICMusicSubscriptionStatus;

@interface MPSubscriptionStatusPlaybackInformation : NSObject
{
    ICMusicSubscriptionStatus *_subscriptionStatusObject;	// 8 = 0x8
    _Bool _definitiveInformation;	// 16 = 0x10
    _Bool _hasPlaybackCapability;	// 17 = 0x11
    _Bool _requiresCarrierManualVerification;	// 18 = 0x12
    _Bool _shouldUseLease;	// 19 = 0x13
    _Bool _shouldUseAccountLessStreaming;	// 20 = 0x14
    _Bool _shouldRequirePlaybackAuthorizationTokensForPlayback;	// 21 = 0x15
}

- (void).cxx_destruct;	// IMP=0x00000000001aa033
@property(readonly, nonatomic) _Bool shouldRequirePlaybackAuthorizationTokensForPlayback; // @synthesize shouldRequirePlaybackAuthorizationTokensForPlayback=_shouldRequirePlaybackAuthorizationTokensForPlayback;
@property(readonly, nonatomic) _Bool shouldUseAccountLessStreaming; // @synthesize shouldUseAccountLessStreaming=_shouldUseAccountLessStreaming;
@property(readonly, nonatomic) _Bool shouldUseLease; // @synthesize shouldUseLease=_shouldUseLease;
@property(readonly, nonatomic) _Bool requiresCarrierManualVerification; // @synthesize requiresCarrierManualVerification=_requiresCarrierManualVerification;
@property(readonly, nonatomic) _Bool hasPlaybackCapability; // @synthesize hasPlaybackCapability=_hasPlaybackCapability;
@property(readonly, nonatomic, getter=isDefinitiveInformation) _Bool definitiveInformation; // @synthesize definitiveInformation=_definitiveInformation;
- (id)description;	// IMP=0x00000000001a9f88
- (id)initWithICSubscriptionStatus:(id)arg1;	// IMP=0x00000000001a9ea6

@end
