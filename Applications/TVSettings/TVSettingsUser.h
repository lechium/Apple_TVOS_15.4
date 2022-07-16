//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, AMSBag, NSString, PBSUserProfile, TVSettingsAccountsFacadePasswordSetting;

@interface TVSettingsUser : NSObject
{
    _Bool _isPrimary;	// 8 = 0x8
    _Bool _hasiCloudAccount;	// 9 = 0x9
    _Bool _hasiTunesAccount;	// 10 = 0xa
    _Bool _hasGameCenterAccount;	// 11 = 0xb
    _Bool _canBeRemoved;	// 12 = 0xc
    _Bool _canSignOutOfiTunes;	// 13 = 0xd
    NSString *_identifier;	// 16 = 0x10
    NSString *_shortName;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_iCloudUsername;	// 40 = 0x28
    NSString *_iTunesUsername;	// 48 = 0x30
    NSString *_gameCenterUsername;	// 56 = 0x38
    TVSettingsAccountsFacadePasswordSetting *_passwordSetting;	// 64 = 0x40
    long long _groupRecommendationsConsent;	// 72 = 0x48
    AMSBag *_amsBag;	// 80 = 0x50
    ACAccountStore *_accountStore;	// 88 = 0x58
    long long _profileType;	// 96 = 0x60
    PBSUserProfile *_userProfile;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000000d5520
@property(readonly, nonatomic) PBSUserProfile *userProfile; // @synthesize userProfile=_userProfile;
@property(nonatomic) long long profileType; // @synthesize profileType=_profileType;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) AMSBag *amsBag; // @synthesize amsBag=_amsBag;
@property(nonatomic) long long groupRecommendationsConsent; // @synthesize groupRecommendationsConsent=_groupRecommendationsConsent;
@property(readonly, nonatomic) TVSettingsAccountsFacadePasswordSetting *passwordSetting; // @synthesize passwordSetting=_passwordSetting;
@property(readonly, nonatomic) _Bool canSignOutOfiTunes; // @synthesize canSignOutOfiTunes=_canSignOutOfiTunes;
@property(readonly, nonatomic) _Bool canBeRemoved; // @synthesize canBeRemoved=_canBeRemoved;
@property(readonly, nonatomic) NSString *gameCenterUsername; // @synthesize gameCenterUsername=_gameCenterUsername;
@property(readonly, nonatomic) _Bool hasGameCenterAccount; // @synthesize hasGameCenterAccount=_hasGameCenterAccount;
@property(readonly, nonatomic) NSString *iTunesUsername; // @synthesize iTunesUsername=_iTunesUsername;
@property(readonly, nonatomic) _Bool hasiTunesAccount; // @synthesize hasiTunesAccount=_hasiTunesAccount;
@property(readonly, nonatomic) NSString *iCloudUsername; // @synthesize iCloudUsername=_iCloudUsername;
@property(readonly, nonatomic) _Bool hasiCloudAccount; // @synthesize hasiCloudAccount=_hasiCloudAccount;
@property(readonly, nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_refreshGroupRecommendationsConsent;	// IMP=0x00100000000d51b0
- (long long)_groupRecommendationsConsentFromPBSConsent:(long long)arg1;	// IMP=0x00100000000d5140
- (void)_updateWithUserProfile:(id)arg1 postKVONotifications:(_Bool)arg2;	// IMP=0x00100000000d44b0
- (unsigned long long)hash;	// IMP=0x00100000000d4480
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000d4390
- (id)description;	// IMP=0x00100000000d4300
- (void)setIsUpdatingGroupRecommendationsConsent:(_Bool)arg1;	// IMP=0x00100000000d3ea0
- (void)updateWithUserProfile:(id)arg1;	// IMP=0x00100000000d3b50
- (id)initWithUserProfile:(id)arg1 amsBag:(id)arg2;	// IMP=0x00100000000d39a0

@end

