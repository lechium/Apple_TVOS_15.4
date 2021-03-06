//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKVerifiableClinicalRecordSubject, HKVerifiableClinicalRecordType, NSArray, NSData, NSDate, NSString, NSUUID;

@interface HKVerifiableClinicalRecord
{
    NSArray *_recordTypes;	// 8 = 0x8
    NSString *_issuerIdentifier;	// 16 = 0x10
    HKVerifiableClinicalRecordSubject *_subject;	// 24 = 0x18
    NSDate *_issuedDate;	// 32 = 0x20
    NSDate *_relevantDate;	// 40 = 0x28
    NSDate *_expirationDate;	// 48 = 0x30
    NSArray *_itemNames;	// 56 = 0x38
    NSString *_sourceType;	// 64 = 0x40
    NSData *_dataRepresentation;	// 72 = 0x48
    NSData *_JWSRepresentation;	// 80 = 0x50
    NSUUID *_originIdentifier;	// 88 = 0x58
}

+ (id)sourceTypeForInternalType:(long long)arg1;	// IMP=0x000000000019a8a2
+ (long long)_privateSourceTypeForExternalType:(id)arg1;	// IMP=0x000000000019a839
+ (_Bool)_isConcreteObjectClass;	// IMP=0x000000000019a81f
+ (_Bool)supportsEquivalence;	// IMP=0x0000000000198f00
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000019893d
+ (id)verifiableClinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 recordTypes:(id)arg6 issuedDate:(id)arg7 relevantDate:(id)arg8 expirationDate:(id)arg9 issuerIdentifier:(id)arg10 subject:(id)arg11 itemNames:(id)arg12 dataRepresentation:(id)arg13 originIdentifier:(id)arg14 sourceType:(long long)arg15;	// IMP=0x0000000000198261
- (void).cxx_destruct;	// IMP=0x000000000019a9b5
@property(readonly, copy, nonatomic) NSUUID *originIdentifier; // @synthesize originIdentifier=_originIdentifier;
@property(readonly, copy) NSData *JWSRepresentation; // @synthesize JWSRepresentation=_JWSRepresentation;
@property(readonly, copy) NSData *dataRepresentation; // @synthesize dataRepresentation=_dataRepresentation;
@property(readonly, copy) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, copy) NSArray *itemNames; // @synthesize itemNames=_itemNames;
@property(readonly, copy) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy) NSDate *relevantDate; // @synthesize relevantDate=_relevantDate;
@property(readonly, copy) NSDate *issuedDate; // @synthesize issuedDate=_issuedDate;
@property(readonly, copy) HKVerifiableClinicalRecordSubject *subject; // @synthesize subject=_subject;
@property(readonly, copy) NSString *issuerIdentifier; // @synthesize issuerIdentifier=_issuerIdentifier;
@property(readonly, copy) NSArray *recordTypes; // @synthesize recordTypes=_recordTypes;
@property(readonly, copy, nonatomic) HKVerifiableClinicalRecordType *verifiableClinicalRecordType;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;	// IMP=0x000000000019a587
- (void)_setSubject:(id)arg1;	// IMP=0x000000000019a553
- (void)_setSourceType:(long long)arg1;	// IMP=0x000000000019a4e5
- (void)_setRelevantDate:(id)arg1;	// IMP=0x000000000019a4b1
- (void)_setRecordTypes:(id)arg1;	// IMP=0x000000000019a47d
- (void)_setOriginIdentifier:(id)arg1;	// IMP=0x000000000019a449
- (void)_setDataRepresentation:(id)arg1;	// IMP=0x000000000019a3c8
- (void)_setItemNames:(id)arg1;	// IMP=0x000000000019a394
- (void)_setIssuerIdentifier:(id)arg1;	// IMP=0x000000000019a360
- (void)_setExpirationDate:(id)arg1;	// IMP=0x000000000019a32c
- (void)_setIssuedDate:(id)arg1;	// IMP=0x000000000019a2f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019a2ed
- (_Bool)isEquivalent:(id)arg1;	// IMP=0x0000000000198f08
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000198abc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000198945
- (id)description;	// IMP=0x0000000000198809
- (id)init;	// IMP=0x000000000019878f
@property(readonly, copy, nonatomic) NSString *recordIssuerDisplayName;
@property(readonly, copy, nonatomic) NSString *recordItemsDisplayName;
@property(readonly, copy, nonatomic) NSString *recordTypeDisplayName;

@end

