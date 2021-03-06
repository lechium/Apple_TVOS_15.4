//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCProfile, NSArray, NSDictionary, NSString;

@interface MCPayload : NSObject
{
    MCProfile *_profile;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSString *_payloadDescription;	// 24 = 0x18
    NSString *_displayName;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSString *_organization;	// 48 = 0x30
    NSString *_UUID;	// 56 = 0x38
    long long _version;	// 64 = 0x40
    NSString *_persistentResourceID;	// 72 = 0x48
    _Bool _mustInstallNonInteractively;	// 80 = 0x50
}

+ (id)localizedPluralForm;	// IMP=0x00000000000c555e
+ (id)localizedSingularForm;	// IMP=0x00000000000c554b
+ (id)localizedParenthesizedFormDescriptionForPayloadCount:(unsigned long long)arg1;	// IMP=0x00000000000c549d
+ (id)localizedDescriptionForPayloadCount:(unsigned long long)arg1;	// IMP=0x00000000000c53ef
+ (id)typeStrings;	// IMP=0x00000000000c53e7
+ (id)_minimumWatchVersionRequirementsForPayloads;	// IMP=0x0000000000059f48
+ (id)remoteQueueableWatchPayloadClasses;	// IMP=0x0000000000059c91
+ (id)installableWatchConfigurationPayloadClasses;	// IMP=0x0000000000059bc9
+ (id)_sharedWatchPayloadClasses;	// IMP=0x0000000000059aa5
+ (id)remoteQueueableHomePodPayloadClasses;	// IMP=0x00000000000599cc
+ (id)installableHomePodConfigurationPayloadClasses;	// IMP=0x000000000005994d
+ (id)_sharedHomePodPayloadClasses;	// IMP=0x000000000005989e
+ (id)wrapperPayloadDictionary;	// IMP=0x00000000000c8167
+ (id)conflictingFieldValueErrorWithUnderlyingError:(id)arg1;	// IMP=0x00000000000c762f
+ (id)badFieldValueErrorWithField:(id)arg1 underlyingError:(id)arg2;	// IMP=0x00000000000c7583
+ (id)badFieldValueErrorWithField:(id)arg1;	// IMP=0x00000000000c756f
+ (id)badFieldTypeErrorWithField:(id)arg1;	// IMP=0x00000000000c74eb
+ (id)missingFieldErrorWithField:(id)arg1 underlyingError:(id)arg2;	// IMP=0x00000000000c7467
+ (id)payloadFromDictionary:(id)arg1 isStub:(_Bool)arg2 profile:(id)arg3 outError:(id *)arg4;	// IMP=0x00000000000c6d3d
+ (id)payloadsFromArray:(id)arg1 isStub:(_Bool)arg2 profile:(id)arg3 outError:(id *)arg4;	// IMP=0x00000000000c6a16
+ (id)availablePayloadsForUserEnrollment;	// IMP=0x00000000000c6777
+ (id)unavailableUserPayloadsInEphemeralMultiUser;	// IMP=0x00000000000c64b4
+ (id)unavailableSystemPayloadsInEphemeralMultiUser;	// IMP=0x00000000000c632e
+ (id)supervisedRequiredPayloads;	// IMP=0x00000000000c61a8
+ (id)cellularRequiredPayloads;	// IMP=0x00000000000c60b2
+ (id)mdmAdoptablePayloads;	// IMP=0x00000000000c5f6c
+ (id)hrnRequiredPayloads;	// IMP=0x00000000000c5e89
+ (id)unavailablePayloadsInEphemeralMultiUser;	// IMP=0x00000000000c5d44
+ (id)accountPayloads;	// IMP=0x00000000000c5bf5
- (void).cxx_destruct;	// IMP=0x00000000000c5b8d
@property(nonatomic) _Bool mustInstallNonInteractively; // @synthesize mustInstallNonInteractively=_mustInstallNonInteractively;
@property(retain, nonatomic) NSString *persistentResourceID; // @synthesize persistentResourceID=_persistentResourceID;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly, retain, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, retain, nonatomic) NSString *payloadDescription; // @synthesize payloadDescription=_payloadDescription;
@property(readonly, retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) __weak MCProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) _Bool containsSensitiveUserInformation;
- (id)payloadDescriptionKeyValueSections;	// IMP=0x00000000000c5af4
- (id)subtitle2Description;	// IMP=0x00000000000c5aec
- (id)subtitle2Label;	// IMP=0x00000000000c5ae4
- (id)subtitle1Description;	// IMP=0x00000000000c5adc
- (id)subtitle1Label;	// IMP=0x00000000000c5ad4
- (id)title;	// IMP=0x00000000000c5ac2
@property(readonly, retain, nonatomic) NSArray *installationWarnings;
- (id)serializedDictionary;	// IMP=0x00000000000c58f4
- (id)verboseDescription;	// IMP=0x00000000000c58e2
- (id)description;	// IMP=0x00000000000c575f
@property(readonly, retain, nonatomic) NSString *friendlyName;
@property(readonly, nonatomic) NSDictionary *restrictions;
- (_Bool)isSupportedByWatchVersions:(id)arg1;	// IMP=0x0000000000059d27
- (id)filterForUserEnrollmentOutError:(id *)arg1;	// IMP=0x00000000000c81e7
- (id)stubDictionary;	// IMP=0x00000000000c8042
- (id)malformedPayloadErrorWithError:(id)arg1;	// IMP=0x00000000000c7f31
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x00000000000c775c

@end

