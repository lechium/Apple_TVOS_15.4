//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface GKAuthenticateResponse
{
    _Bool _loginDisabled;	// 8 = 0x8
    _Bool _passwordChangeRequired;	// 9 = 0x9
    _Bool _shouldShowLinkAccountsUI;	// 10 = 0xa
    _Bool _useNewDashboardUI;	// 11 = 0xb
    _Bool _accessPointIsOnAutomatically;	// 12 = 0xc
    _Bool _accessPointShowHighlights;	// 13 = 0xd
    NSString *_playerID;	// 16 = 0x10
    NSURL *_passwordChangeURL;	// 24 = 0x18
    NSString *_alertTitle;	// 32 = 0x20
    NSString *_alertMessage;	// 40 = 0x28
    NSString *_lastPersonalizationVersionDisplayed;	// 48 = 0x30
    unsigned long long _lastPrivacyNoticeVersionDisplayed;	// 56 = 0x38
    NSString *_lastProfilePrivacyVersionDisplayed;	// 64 = 0x40
    long long _accessPointLocation;	// 72 = 0x48
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0040000000070825
- (void).cxx_destruct;	// IMP=0x0020000000070bf0
@property(nonatomic) long long accessPointLocation; // @synthesize accessPointLocation=_accessPointLocation;
@property(nonatomic) _Bool accessPointShowHighlights; // @synthesize accessPointShowHighlights=_accessPointShowHighlights;
@property(nonatomic) _Bool accessPointIsOnAutomatically; // @synthesize accessPointIsOnAutomatically=_accessPointIsOnAutomatically;
@property(nonatomic) _Bool useNewDashboardUI; // @synthesize useNewDashboardUI=_useNewDashboardUI;
@property(retain, nonatomic) NSString *lastProfilePrivacyVersionDisplayed; // @synthesize lastProfilePrivacyVersionDisplayed=_lastProfilePrivacyVersionDisplayed;
@property(nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed; // @synthesize lastPrivacyNoticeVersionDisplayed=_lastPrivacyNoticeVersionDisplayed;
@property(retain, nonatomic) NSString *lastPersonalizationVersionDisplayed; // @synthesize lastPersonalizationVersionDisplayed=_lastPersonalizationVersionDisplayed;
@property(retain, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(retain, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(nonatomic) _Bool shouldShowLinkAccountsUI; // @synthesize shouldShowLinkAccountsUI=_shouldShowLinkAccountsUI;
@property(retain, nonatomic) NSURL *passwordChangeURL; // @synthesize passwordChangeURL=_passwordChangeURL;
@property(nonatomic) _Bool passwordChangeRequired; // @synthesize passwordChangeRequired=_passwordChangeRequired;
@property(nonatomic) _Bool loginDisabled; // @synthesize loginDisabled=_loginDisabled;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
- (id)init;	// IMP=0x00100000000706d4

@end
