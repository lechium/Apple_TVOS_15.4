//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, NSPersonNameComponents, NSString, PBSUserProfile;

@interface PBSUserProfileAccountInfo : NSObject
{
    ACAccountStore *_accountStore;	// 8 = 0x8
    PBSUserProfile *_userProfile;	// 16 = 0x10
    ACAccount *_iCloudAccount;	// 24 = 0x18
    ACAccount *_iTunesAccount;	// 32 = 0x20
    ACAccount *_gameCenterAccount;	// 40 = 0x28
}

+ (id)_stringFromPersonNameComponents:(id)arg1 personNameComponentsFormatter:(id)arg2;	// IMP=0x000000000005c110
+ (id)_defaultInitialsFormatter;	// IMP=0x000000000005c020
+ (id)_defaultShortNameFormatter;	// IMP=0x000000000005bf50
+ (id)_defaultFullNameFormatter;	// IMP=0x000000000005be80
+ (id)defaultAccountStore;	// IMP=0x000000000005b720
+ (void)initialize;	// IMP=0x000000000005ab10
- (void).cxx_destruct;	// IMP=0x000000000005c3b0
@property(readonly, nonatomic) ACAccount *gameCenterAccount; // @synthesize gameCenterAccount=_gameCenterAccount;
@property(readonly, nonatomic) ACAccount *iTunesAccount; // @synthesize iTunesAccount=_iTunesAccount;
@property(readonly, nonatomic) ACAccount *iCloudAccount; // @synthesize iCloudAccount=_iCloudAccount;
@property(readonly, nonatomic) PBSUserProfile *userProfile; // @synthesize userProfile=_userProfile;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, nonatomic) NSString *_formattedVocativeName;
@property(readonly, nonatomic) NSString *formattedInitials;
@property(readonly, nonatomic) NSString *formattedShortName;
@property(readonly, nonatomic) NSString *formattedFullName;
@property(readonly, nonatomic) NSPersonNameComponents *personNameComponents;
- (id)initWithUserProfile:(id)arg1;	// IMP=0x000000000005b660
- (id)initWithAccountStore:(id)arg1 userProfile:(id)arg2;	// IMP=0x000000000005acc0

@end

