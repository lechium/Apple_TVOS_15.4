//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class ACAccount, AMSProcessInfo, NSString;
@protocol AMSBagProtocol;

@interface AMSNotificationSettingsTask <AMSBagConsumer>
{
    ACAccount *_account;	// 8 = 0x8
    id <AMSBagProtocol> _bag;	// 16 = 0x10
    AMSProcessInfo *_clientInfo;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
}

+ (id)bagKeySet;	// IMP=0x00000000001b3713
+ (id)bagSubProfileVersion;	// IMP=0x00000000001b36c3
+ (id)bagSubProfile;	// IMP=0x00000000001b3673
- (void).cxx_destruct;	// IMP=0x00000000001b37ac
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_generateParametersForItems:(id)arg1;	// IMP=0x00000000001b3473
- (id)updateSettings:(id)arg1;	// IMP=0x00000000001b2962
- (id)fetchSettingsForSections:(id)arg1;	// IMP=0x00000000001b2950
- (id)fetchSettingForIdentifier:(id)arg1;	// IMP=0x00000000001b293e
- (id)fetchAllSettings;	// IMP=0x00000000001b1eb3
- (id)initWithIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3;	// IMP=0x00000000001b1ded

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
