//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IMAccount, NSArray, NSData, NSDictionary, NSString;

@interface IMServiceImpl
{
    NSString *_name;	// 8 = 0x8
    NSString *_localizedName;	// 16 = 0x10
    NSString *_localizedShortName;	// 24 = 0x18
    NSString *_countryCode;	// 32 = 0x20
    IMAccount *_bestAccount;	// 40 = 0x28
    NSDictionary *_serviceDefaults;	// 48 = 0x30
    NSDictionary *_defaultSettings;	// 56 = 0x38
    NSData *_imageData;	// 64 = 0x40
    NSArray *_emailDomains;	// 72 = 0x48
    NSArray *_siblingServiceNames;	// 80 = 0x50
    unsigned int _screenNameSensitivity;	// 88 = 0x58
    _Bool _hasLoadedServiceProperties;	// 92 = 0x5c
    _Bool _handlesChatInvites;	// 93 = 0x5d
    _Bool _supportsSMS;	// 94 = 0x5e
    _Bool _supportsPhoneNumberMapping;	// 95 = 0x5f
    _Bool _supportsGroupAttachments;	// 96 = 0x60
    _Bool _supportsMutatingGroupMembers;	// 97 = 0x61
    _Bool _supportsOneSessionForAllAccounts;	// 98 = 0x62
    _Bool _supportsAuthorization;	// 99 = 0x63
    _Bool _supportsRegistration;	// 100 = 0x64
    _Bool _supportsAdding;	// 101 = 0x65
    _Bool _supportsPresence;	// 102 = 0x66
    _Bool _supportsIDStatusLookup;	// 103 = 0x67
    _Bool _supportsDatabaseStorage;	// 104 = 0x68
    _Bool _supportsAudioMessages;	// 105 = 0x69
    _Bool _shouldInternationalizeNumbers;	// 106 = 0x6a
    _Bool _supportsOfflineTransfers;	// 107 = 0x6b
    _Bool _shouldDisableDeactivation;	// 108 = 0x6c
    _Bool _ignoresNetworkConnectivity;	// 109 = 0x6d
    _Bool _isPersistent;	// 110 = 0x6e
    _Bool _isPlugInService;	// 111 = 0x6f
    _Bool _allowsMultipleConnections;	// 112 = 0x70
    NSArray *_abProperties;	// 120 = 0x78
    NSDictionary *_serviceProps;	// 128 = 0x80
    NSArray *_addressBookProperties;	// 136 = 0x88
    NSString *_addressBookProperty;	// 144 = 0x90
}

+ (_Bool)systemSupportsSendingAttachmentsOfTypes:(id)arg1 error:(long long *)arg2;	// IMP=0x0000000000017c97
+ (_Bool)systemSupportsSMSSending;	// IMP=0x0000000000017c8f
+ (id)supportedCountryCodes;	// IMP=0x0000000000017c6f
+ (_Bool)iMessageEnabled;	// IMP=0x00000000000172d6
+ (_Bool)mmsEnabled;	// IMP=0x0000000000017188
+ (_Bool)_readMMSUserOverride;	// IMP=0x000000000001717e
+ (_Bool)_deviceIsAltAccount;	// IMP=0x0000000000017174
+ (_Bool)smsEnabled;	// IMP=0x0000000000017082
+ (_Bool)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 previousService:(id)arg3;	// IMP=0x0000000000016fe4
+ (_Bool)_iMessageEnabledForMultipleSubscriptionsForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 previousService:(id)arg3;	// IMP=0x0000000000016cdb
+ (_Bool)_shouldCheckIfLastAddressedHandleIsInSubscriptionsAnymoreButiMessageIsEnabledForAlias:(id)arg1 previousService:(id)arg2;	// IMP=0x0000000000016c68
+ (_Bool)_isLastAddressedHandleSubscriptionActive:(id)arg1;	// IMP=0x0000000000016c60
+ (_Bool)_isiMessageEnabledIfLastAddressedHandleIsNotActiveAnymore:(id)arg1;	// IMP=0x0000000000016c58
+ (_Bool)_isSIMIdIDSRegisteredSIM:(id)arg1;	// IMP=0x0000000000016c50
+ (id)_phoneNumberOnSubscriptionWithSIMID:(id)arg1;	// IMP=0x0000000000016c48
+ (_Bool)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2;	// IMP=0x0000000000016c2c
+ (_Bool)hasAlias:(id)arg1 onAccountForService:(id)arg2;	// IMP=0x00000000000168ea
+ (_Bool)mmsEnabledforPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x00000000000168d1
+ (id)operationalServicesWithCapability:(unsigned long long)arg1;	// IMP=0x0000000000014b87
+ (id)connectedServicesWithCapability:(unsigned long long)arg1;	// IMP=0x000000000001494b
+ (id)servicesWithCapability:(unsigned long long)arg1;	// IMP=0x000000000001470f
+ (id)connectedServices;	// IMP=0x00000000000144c2
+ (id)activeServices;	// IMP=0x0000000000014275
+ (id)serviceWithInternalName:(id)arg1;	// IMP=0x0000000000013fd5
+ (id)serviceWithName:(id)arg1;	// IMP=0x0000000000013ed6
+ (id)allServicesNonBlocking;	// IMP=0x0000000000013e25
+ (id)allServices;	// IMP=0x0000000000013d76
+ (void)setServiceClass:(Class)arg1;	// IMP=0x0000000000013d69
+ (Class)serviceClass;	// IMP=0x0000000000013d34
- (void).cxx_destruct;	// IMP=0x0000000000017e83
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) NSString *addressBookProperty; // @synthesize addressBookProperty=_addressBookProperty;
@property(readonly, nonatomic) NSArray *addressBookProperties; // @synthesize addressBookProperties=_addressBookProperties;
@property(readonly, nonatomic) NSString *shortName; // @synthesize shortName=_localizedShortName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *emailDomains; // @synthesize emailDomains=_emailDomains;
@property(readonly, nonatomic) unsigned int IDSensitivity; // @synthesize IDSensitivity=_screenNameSensitivity;
@property(readonly, nonatomic) _Bool shouldDisableDeactivation; // @synthesize shouldDisableDeactivation=_shouldDisableDeactivation;
@property(readonly, nonatomic) _Bool allowsMultipleConnections; // @synthesize allowsMultipleConnections=_allowsMultipleConnections;
@property(readonly, nonatomic) _Bool isPlugInService; // @synthesize isPlugInService=_isPlugInService;
@property(readonly, nonatomic) _Bool supportsAdding; // @synthesize supportsAdding=_supportsAdding;
@property(readonly, nonatomic) _Bool supportsGroupAttachments; // @synthesize supportsGroupAttachments=_supportsGroupAttachments;
@property(readonly, nonatomic) _Bool supportsOneSessionForAllAccounts; // @synthesize supportsOneSessionForAllAccounts=_supportsOneSessionForAllAccounts;
@property(readonly, nonatomic) _Bool supportsMutatingGroupMembers; // @synthesize supportsMutatingGroupMembers=_supportsMutatingGroupMembers;
@property(readonly, nonatomic) _Bool supportsPresence; // @synthesize supportsPresence=_supportsPresence;
@property(readonly, nonatomic) _Bool supportsOfflineTransfers; // @synthesize supportsOfflineTransfers=_supportsOfflineTransfers;
@property(readonly, nonatomic) _Bool ignoresNetworkConnectivity; // @synthesize ignoresNetworkConnectivity=_ignoresNetworkConnectivity;
@property(readonly, nonatomic) _Bool supportsRegistration; // @synthesize supportsRegistration=_supportsRegistration;
@property(readonly, nonatomic) _Bool handlesChatInvites; // @synthesize handlesChatInvites=_handlesChatInvites;
@property(readonly, nonatomic) _Bool isPersistent; // @synthesize isPersistent=_isPersistent;
@property(readonly, nonatomic) _Bool supportsAuthorization; // @synthesize supportsAuthorization=_supportsAuthorization;
@property(readonly, nonatomic) _Bool supportsPhoneNumberMapping; // @synthesize supportsPhoneNumberMapping=_supportsPhoneNumberMapping;
@property(readonly, nonatomic) _Bool supportsAudioMessages; // @synthesize supportsAudioMessages=_supportsAudioMessages;
@property(readonly, nonatomic) _Bool supportsIDStatusLookup; // @synthesize supportsIDStatusLookup=_supportsIDStatusLookup;
@property(retain, nonatomic) NSDictionary *defaultAccountSettings; // @synthesize defaultAccountSettings=_defaultSettings;
@property(retain, nonatomic) NSDictionary *serviceDefaults; // @synthesize serviceDefaults=_serviceDefaults;
@property(readonly, nonatomic) Class accountClass;
- (void)activeAccountsChanged:(id)arg1;	// IMP=0x0000000000017bfa
- (void)defaultsChanged:(id)arg1;	// IMP=0x0000000000017b5d
- (id)description;	// IMP=0x0000000000017ad5
@property(readonly, nonatomic) NSArray *accountIDs;
@property(readonly, nonatomic) long long buddyNotesMaxByteLength;
@property(readonly, nonatomic) NSString *internalName;
@property(readonly, nonatomic) NSArray *siblingServices;
- (id)localizedShortName;	// IMP=0x0000000000017807
- (id)localizedName;	// IMP=0x00000000000177f2
@property(readonly, nonatomic) _Bool _wantsInternationizedNumbers;
@property(readonly, nonatomic) _Bool _supportsDatabaseStorage;
- (_Bool)isEnabled;	// IMP=0x00000000000177b5
@property(readonly, nonatomic) long long maxAttachmentSize;
- (long long)maxChatParticipantsForHandle:(id)arg1 simID:(id)arg2;	// IMP=0x00000000000175e2
@property(readonly, nonatomic) NSData *serviceImageData;
- (id)subtypeInformationForAccount:(id)arg1;	// IMP=0x00000000000168c9
@property(retain, nonatomic) NSDictionary *serviceProperties;
- (void)_loadPropertiesIfNeeded;	// IMP=0x00000000000160b6
- (id)myScreenNames;	// IMP=0x0000000000015ea6
- (id)infoForPreferredScreenNames;	// IMP=0x0000000000015e9e
- (id)infoForAllScreenNames;	// IMP=0x0000000000015bff
- (id)infoForScreenName:(id)arg1;	// IMP=0x00000000000159e0
- (unsigned long long)status;	// IMP=0x00000000000159b7
- (void)_blockUntilInitialSyncPerformed;	// IMP=0x00000000000156f0
- (long long)compareNames:(id)arg1;	// IMP=0x000000000001565f
- (id)canonicalFormOfID:(id)arg1;	// IMP=0x0000000000015639
- (id)normalizedFormOfID:(id)arg1;	// IMP=0x0000000000015623
- (_Bool)equalID:(id)arg1 andID:(id)arg2;	// IMP=0x000000000001555a
- (void)statusChangedForAccount:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x000000000001549a
- (void)disconnect;	// IMP=0x0000000000015234
- (void)doneSetup;	// IMP=0x00000000000151be
- (_Bool)initialSyncPerformed;	// IMP=0x0000000000015015
- (void)_calculateBestAccount;	// IMP=0x0000000000014f22
- (void)_syncWithRemoteBuddies;	// IMP=0x0000000000014f1c
- (void)dealloc;	// IMP=0x0000000000014ea2
- (id)initWithName:(id)arg1;	// IMP=0x0000000000014dc3
@property(readonly, nonatomic, getter=isDiscontinued) _Bool discontinued;

@end
