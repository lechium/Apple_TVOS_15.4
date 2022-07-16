//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUFeatureFlags-Protocol.h>

@class NSString;

@interface TUFeatureFlags : NSObject <TUFeatureFlags>
{
}

@property(readonly, nonatomic) _Bool mochiEnabled;
@property(readonly, nonatomic) _Bool requestA2DPOverIncomingCalls;
@property(readonly, nonatomic) _Bool uPlusNDowngrade;
@property(readonly, nonatomic) _Bool gftDowngradeToOneToOne;
@property(readonly, nonatomic) _Bool suggestionsReloadForSelectedRecipients;
@property(readonly, nonatomic) _Bool TTRBannerEnabled;
@property(readonly, nonatomic) _Bool kettleFeatureComplete;
@property(readonly, nonatomic) _Bool expanseBTSwitchingEnabled;
@property(readonly, nonatomic) _Bool qrPluginEncryptionEnabled;
@property(readonly, nonatomic) _Bool qrPluginEnabled;
@property(readonly, nonatomic) _Bool individualAudioVideoToggleEnabled;
@property(readonly, nonatomic) _Bool FTUserScore;
@property(readonly, nonatomic) _Bool livePhotoXPCServiceEnabled;
@property(readonly, nonatomic) _Bool supportsScreenSharing;
@property(readonly, nonatomic) _Bool nonInterruptingCalls;
@property(readonly, nonatomic) _Bool gondolaEnforceDelegationIntent;
@property(readonly, nonatomic) _Bool gondolaShareLinkInAdvance;
@property(readonly, nonatomic) _Bool gondolaNotifications;
@property(readonly, nonatomic) _Bool gondolaOpenLinksInFaceTime;
@property(readonly, nonatomic) _Bool gondolaCreateCallUI;
@property(readonly, nonatomic) _Bool gondolaBoat;
@property(readonly, nonatomic) _Bool gondolaOar;
@property(readonly, nonatomic) _Bool ftvSpatialAudioEnabled;
@property(readonly, nonatomic) _Bool aTVHandoff;
- (_Bool)expanseEnabledForMusic;	// IMP=0x000000000005d41c
- (_Bool)expanseEnabledForTV;	// IMP=0x000000000005d404
@property(readonly, nonatomic) _Bool sharePlayDisabled;
@property(readonly, nonatomic) _Bool expanseEnabled;
@property(readonly, nonatomic) _Bool conversationOneToOneModeEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

