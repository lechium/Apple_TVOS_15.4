//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSSet, NSString, NSURL, PKEnteredValueActionItem, PKTransitCommutePlan;

@interface PKPaymentPassAction : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_rawDictionary;	// 8 = 0x8
    NSDictionary *_localizations;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    _Bool _hasRemoteContent;	// 32 = 0x20
    _Bool _remoteContentRequiresAppletData;	// 33 = 0x21
    _Bool _reverseButtonTitleForLegacySuica;	// 34 = 0x22
    _Bool _featured;	// 35 = 0x23
    NSString *_identifier;	// 40 = 0x28
    unsigned long long _type;	// 48 = 0x30
    NSString *_actionDescription;	// 56 = 0x38
    NSString *_confirmationTitle;	// 64 = 0x40
    NSString *_relevantPropertyIdentifier;	// 72 = 0x48
    NSString *_associatedEnteredValueIdentifier;	// 80 = 0x50
    NSString *_associatedPlanIdentifier;	// 88 = 0x58
    PKTransitCommutePlan *_associatedPlan;	// 96 = 0x60
    NSDate *_availableFrom;	// 104 = 0x68
    double _availableFromOffsetFromUTC;	// 112 = 0x70
    NSDate *_availableUntil;	// 120 = 0x78
    NSString *_unavailableBeforeReason;	// 128 = 0x80
    NSString *_unavailableAfterReason;	// 136 = 0x88
    NSString *_serviceProviderIdentifier;	// 144 = 0x90
    NSString *_serviceProviderCountryCode;	// 152 = 0x98
    NSArray *_serviceProviderAcceptedNetworks;	// 160 = 0xa0
    NSSet *_serviceProviderSupportedCountries;	// 168 = 0xa8
    unsigned long long _serviceProviderCapabilities;	// 176 = 0xb0
    NSArray *_purchaseNewActionItems;	// 184 = 0xb8
    NSDictionary *_vehicleFunctionActions;	// 192 = 0xc0
    NSURL *_externalURL;	// 200 = 0xc8
    NSString *_headerText;	// 208 = 0xd0
    NSString *_footerText;	// 216 = 0xd8
    NSArray *_selectedActionItems;	// 224 = 0xe0
    PKEnteredValueActionItem *_enteredValueItem;	// 232 = 0xe8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000016792b
- (void).cxx_destruct;	// IMP=0x0000000000168e2b
@property(readonly, nonatomic) PKEnteredValueActionItem *enteredValueItem; // @synthesize enteredValueItem=_enteredValueItem;
@property(readonly, copy, nonatomic) NSArray *selectedActionItems; // @synthesize selectedActionItems=_selectedActionItems;
@property(readonly, copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(readonly, copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *externalURL; // @synthesize externalURL=_externalURL;
@property(readonly, nonatomic) NSDictionary *vehicleFunctionActions; // @synthesize vehicleFunctionActions=_vehicleFunctionActions;
@property(readonly, copy, nonatomic) NSArray *purchaseNewActionItems; // @synthesize purchaseNewActionItems=_purchaseNewActionItems;
@property(nonatomic) unsigned long long serviceProviderCapabilities; // @synthesize serviceProviderCapabilities=_serviceProviderCapabilities;
@property(copy, nonatomic) NSSet *serviceProviderSupportedCountries; // @synthesize serviceProviderSupportedCountries=_serviceProviderSupportedCountries;
@property(copy, nonatomic) NSArray *serviceProviderAcceptedNetworks; // @synthesize serviceProviderAcceptedNetworks=_serviceProviderAcceptedNetworks;
@property(copy, nonatomic) NSString *serviceProviderCountryCode; // @synthesize serviceProviderCountryCode=_serviceProviderCountryCode;
@property(copy, nonatomic) NSString *serviceProviderIdentifier; // @synthesize serviceProviderIdentifier=_serviceProviderIdentifier;
@property(readonly, copy, nonatomic) NSString *unavailableAfterReason; // @synthesize unavailableAfterReason=_unavailableAfterReason;
@property(readonly, copy, nonatomic) NSString *unavailableBeforeReason; // @synthesize unavailableBeforeReason=_unavailableBeforeReason;
@property(readonly, copy, nonatomic) NSDate *availableUntil; // @synthesize availableUntil=_availableUntil;
@property(readonly, nonatomic) double availableFromOffsetFromUTC; // @synthesize availableFromOffsetFromUTC=_availableFromOffsetFromUTC;
@property(readonly, copy, nonatomic) NSDate *availableFrom; // @synthesize availableFrom=_availableFrom;
@property(copy, nonatomic) PKTransitCommutePlan *associatedPlan; // @synthesize associatedPlan=_associatedPlan;
@property(copy, nonatomic) NSString *associatedPlanIdentifier; // @synthesize associatedPlanIdentifier=_associatedPlanIdentifier;
@property(copy, nonatomic) NSString *associatedEnteredValueIdentifier; // @synthesize associatedEnteredValueIdentifier=_associatedEnteredValueIdentifier;
@property(readonly, copy, nonatomic) NSString *relevantPropertyIdentifier; // @synthesize relevantPropertyIdentifier=_relevantPropertyIdentifier;
@property(readonly, nonatomic) _Bool featured; // @synthesize featured=_featured;
@property(nonatomic) _Bool reverseButtonTitleForLegacySuica; // @synthesize reverseButtonTitleForLegacySuica=_reverseButtonTitleForLegacySuica;
@property(copy, nonatomic) NSString *confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;
@property(copy, nonatomic) NSString *actionDescription; // @synthesize actionDescription=_actionDescription;
@property(readonly, nonatomic) _Bool remoteContentRequiresAppletData; // @synthesize remoteContentRequiresAppletData=_remoteContentRequiresAppletData;
@property(readonly, nonatomic) _Bool hasRemoteContent; // @synthesize hasRemoteContent=_hasRemoteContent;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *serviceProviderSupportedNetworks;
- (id)description;	// IMP=0x0000000000168acf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000168714
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001683b6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000167933
@property(readonly, nonatomic) _Bool isActionAvailable;
- (id)actionUpdatedWithDictionary:(id)arg1;	// IMP=0x000000000016764d
- (void)_processLocalizableStrings:(CDUnknownBlockType)arg1;	// IMP=0x000000000016735f
- (id)_localizableKeys;	// IMP=0x0000000000167335
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000167199
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000166353

@end

