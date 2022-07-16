//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class ACAccount, AMSDeviceOfferEligibilityTask, AMSDeviceOfferRegistrationPrivacyValidator, AMSProcessInfo, AMSURLSession, NSArray, NSSet, NSString;
@protocol AMSBagProtocol, AMSDeviceOffersTracking;

@interface AMSDeviceOfferRegistrationTask <AMSBagConsumer>
{
    _Bool _ignoreRegistrationBlacklist;	// 8 = 0x8
    _Bool _lightweightCheckOnly;	// 9 = 0x9
    ACAccount *_account;	// 16 = 0x10
    id <AMSBagProtocol> _bag;	// 24 = 0x18
    AMSProcessInfo *_clientInfo;	// 32 = 0x20
    NSSet *_offerIdentifiers;	// 40 = 0x28
    NSArray *_registrationGroups;	// 48 = 0x30
    AMSDeviceOfferEligibilityTask *_eligibilityTask;	// 56 = 0x38
    NSString *_deviceGUID;	// 64 = 0x40
    NSString *_masterSerialNumber;	// 72 = 0x48
    id <AMSDeviceOffersTracking> _deviceOffersStore;	// 80 = 0x50
    AMSDeviceOfferRegistrationPrivacyValidator *_privacyValidator;	// 88 = 0x58
    AMSURLSession *_urlSession;	// 96 = 0x60
}

+ (id)bagKeySet;	// IMP=0x00000000001082ce
+ (id)createBagForSubProfile;	// IMP=0x0000000000108234
+ (id)bagSubProfileVersion;	// IMP=0x00000000001081e4
+ (id)bagSubProfile;	// IMP=0x0000000000108194
- (void).cxx_destruct;	// IMP=0x000000000010845a
@property(nonatomic) _Bool lightweightCheckOnly; // @synthesize lightweightCheckOnly=_lightweightCheckOnly;
@property(nonatomic) _Bool ignoreRegistrationBlacklist; // @synthesize ignoreRegistrationBlacklist=_ignoreRegistrationBlacklist;
@property(retain, nonatomic) AMSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) AMSDeviceOfferRegistrationPrivacyValidator *privacyValidator; // @synthesize privacyValidator=_privacyValidator;
@property(readonly, nonatomic) id <AMSDeviceOffersTracking> deviceOffersStore; // @synthesize deviceOffersStore=_deviceOffersStore;
@property(readonly, nonatomic) NSString *masterSerialNumber; // @synthesize masterSerialNumber=_masterSerialNumber;
@property(readonly, nonatomic) NSString *deviceGUID; // @synthesize deviceGUID=_deviceGUID;
@property(readonly, nonatomic) AMSDeviceOfferEligibilityTask *eligibilityTask; // @synthesize eligibilityTask=_eligibilityTask;
@property(retain, nonatomic) NSArray *registrationGroups; // @synthesize registrationGroups=_registrationGroups;
@property(retain, nonatomic) NSSet *offerIdentifiers; // @synthesize offerIdentifiers=_offerIdentifiers;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_registrationRequestEncoderWithAccount:(id)arg1;	// IMP=0x0000000000108035
- (id)_urlRequestWithBagURL:(id)arg1;	// IMP=0x0000000000107ecd
- (id)_deviceOffersURL;	// IMP=0x0000000000107e76
- (id)_lightweightDeviceOffersURL;	// IMP=0x0000000000107e1f
- (_Bool)_isDeviceGroupRegistrationAllowed;	// IMP=0x0000000000107c3d
- (_Bool)_isEligibilityCallsAllowed;	// IMP=0x0000000000107bb3
- (_Bool)_isRegistrationAllowed;	// IMP=0x0000000000107b07
- (void)_updateWithDeviceOffers:(id)arg1;	// IMP=0x0000000000107986
- (id)_sanitizedResultPromise:(id)arg1;	// IMP=0x00000000001077b6
- (id)_offersDecodedFromResult:(id)arg1;	// IMP=0x0000000000107521
- (id)_latestOffersWithFetchedDeviceOffers:(id)arg1 offersStore:(id)arg2;	// IMP=0x00000000001070d4
- (id)_handleRegistrationResult:(id)arg1;	// IMP=0x0000000000106986
- (id)_bucketedOffers:(id)arg1;	// IMP=0x00000000001066f9
- (id)_latestDeviceGroups;	// IMP=0x0000000000106475
- (id)_registrationGroupsFrom:(id)arg1 matching:(id)arg2;	// IMP=0x00000000001062b8
- (id)_eligibilityQualifiedRegistrationGroupsWithAccount:(id)arg1 pendingRegistrationGroups:(id)arg2;	// IMP=0x0000000000105b6a
- (id)_serialNumberBlacklist;	// IMP=0x0000000000105b62
- (id)_companionSerialNumbers;	// IMP=0x0000000000105b12
- (id)_filteredRegistrationGroups:(id)arg1;	// IMP=0x00000000001055f6
- (id)_accountEligibleSerialsFromDeviceOffers:(id)arg1 accountOffers:(id)arg2;	// IMP=0x0000000000105104
- (id)_registrationEndpointPOSTParametersWithRegistrationGroups:(id)arg1 companionSerialNumbers:(id)arg2;	// IMP=0x0000000000104c8b
- (id)_registrationEndpointPOSTDeviceGroupsBody:(id)arg1;	// IMP=0x0000000000104a2c
- (id)_registrationEndpointPOSTCompanionBodyWithDeviceGroups:(id)arg1 companionSerialNumbers:(id)arg2;	// IMP=0x00000000001048b0
- (id)_performRegistrationRequestWithAccount:(id)arg1;	// IMP=0x0000000000104021
- (id)_performLightweightRequestWithAccount:(id)arg1;	// IMP=0x0000000000103c71
- (id)perform;	// IMP=0x00000000001036d6
- (id)initWithAccount:(id)arg1 bag:(id)arg2 deviceGUID:(id)arg3 deviceOffersStore:(id)arg4 eligibilityTask:(id)arg5 masterSerialNumber:(id)arg6 privacyValidator:(id)arg7 urlSession:(id)arg8;	// IMP=0x000000000010353f
- (id)initWithAccount:(id)arg1 bag:(id)arg2;	// IMP=0x000000000010339c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

