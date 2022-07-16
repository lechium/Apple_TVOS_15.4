//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKConceptIndexable-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKConcept, HKMedicalCoding, HKMedicalDate, HKVaccinationRecordType, NSArray, NSLocale, NSString, NSUUID;

@interface HKVaccinationRecord <HKConceptIndexable, NSSecureCoding, NSCopying>
{
    NSArray *_vaccinationCodings;	// 8 = 0x8
    HKMedicalDate *_expirationDate;	// 16 = 0x10
    NSString *_doseNumber;	// 24 = 0x18
    NSString *_doseQuantity;	// 32 = 0x20
    NSString *_lotNumber;	// 40 = 0x28
    NSString *_performer;	// 48 = 0x30
    NSArray *_bodySiteCodings;	// 56 = 0x38
    NSString *_reaction;	// 64 = 0x40
    _Bool _notGiven;	// 72 = 0x48
    HKMedicalDate *_administrationDate;	// 80 = 0x50
    HKMedicalCoding *_statusCoding;	// 88 = 0x58
    _Bool _patientReported;	// 96 = 0x60
    NSArray *_routeCodings;	// 104 = 0x68
    NSArray *_reasonsCodings;	// 112 = 0x70
    NSArray *_reasonsNotGivenCodings;	// 120 = 0x78
    HKConcept *_vaccination;	// 128 = 0x80
    HKConcept *_bodySite;	// 136 = 0x88
    HKConcept *_status;	// 144 = 0x90
    HKConcept *_route;	// 152 = 0x98
    NSArray *_reasons;	// 160 = 0xa0
    NSArray *_reasonsNotGiven;	// 168 = 0xa8
}

+ (_Bool)_isConcreteObjectClass;	// IMP=0x00000000002030d5
+ (_Bool)supportsEquivalence;	// IMP=0x0000000000200c99
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000020013e
+ (id)_newVaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 vaccinationCodings:(id)arg13 expirationDate:(id)arg14 doseNumber:(id)arg15 doseQuantity:(id)arg16 lotNumber:(id)arg17 performer:(id)arg18 bodySiteCodings:(id)arg19 reaction:(id)arg20 notGiven:(_Bool)arg21 administrationDate:(id)arg22 statusCoding:(id)arg23 patientReported:(_Bool)arg24 routeCodings:(id)arg25 reasonsCodings:(id)arg26 reasonsNotGivenCodings:(id)arg27 config:(CDUnknownBlockType)arg28;	// IMP=0x00000000001ff786
+ (id)vaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 vaccinationCodings:(id)arg13 expirationDate:(id)arg14 doseNumber:(id)arg15 doseQuantity:(id)arg16 lotNumber:(id)arg17 performer:(id)arg18 bodySiteCodings:(id)arg19 reaction:(id)arg20 notGiven:(_Bool)arg21 administrationDate:(id)arg22 statusCoding:(id)arg23 patientReported:(_Bool)arg24 routeCodings:(id)arg25 reasonsCodings:(id)arg26 reasonsNotGivenCodings:(id)arg27;	// IMP=0x00000000001ff6b3
+ (id)defaultDisplayString;	// IMP=0x00000000000434ad
+ (id)cachedConceptRelationshipKeyPaths;	// IMP=0x000000000007ea62
+ (id)indexableConceptKeyPaths;	// IMP=0x000000000007e8e8
+ (_Bool)groupsByUserDomainConcept;	// IMP=0x00000000001c00aa
+ (id)vaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 vaccinationCodings:(id)arg12 expirationDate:(id)arg13 doseNumber:(id)arg14 doseQuantity:(id)arg15 lotNumber:(id)arg16 performer:(id)arg17 bodySiteCodings:(id)arg18 reaction:(id)arg19 notGiven:(_Bool)arg20 administrationDate:(id)arg21 statusCoding:(id)arg22 patientReported:(_Bool)arg23 routeCodings:(id)arg24 reasonsCodings:(id)arg25 reasonsNotGivenCodings:(id)arg26;	// IMP=0x00000000001c3b79
- (void).cxx_destruct;	// IMP=0x00000000002030ef
@property(readonly, copy) HKVaccinationRecordType *vaccinationRecordType;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;	// IMP=0x0000000000202fd9
- (void)_setReasonsNotGiven:(id)arg1;	// IMP=0x0000000000202fa5
@property(readonly, copy) NSArray *reasonsNotGiven;
- (void)_setReasons:(id)arg1;	// IMP=0x0000000000202ed0
@property(readonly, copy) NSArray *reasons;
- (void)_setRoute:(id)arg1;	// IMP=0x0000000000202dfb
@property(readonly, copy) HKConcept *route;
- (void)_setStatus:(id)arg1;	// IMP=0x0000000000202d34
@property(readonly, copy) HKConcept *status;
- (void)_setBodySite:(id)arg1;	// IMP=0x0000000000202c6d
@property(readonly, copy) HKConcept *bodySite;
- (void)_setVaccination:(id)arg1;	// IMP=0x0000000000202b58
@property(readonly, copy) HKConcept *vaccination;
- (void)_setReasonsNotGivenCodings:(id)arg1;	// IMP=0x0000000000202a0a
@property(readonly, copy) NSArray *reasonsNotGivenCodings;
- (void)_setReasonsCodings:(id)arg1;	// IMP=0x0000000000202928
@property(readonly, copy) NSArray *reasonsCodings;
- (void)_setRouteCodings:(id)arg1;	// IMP=0x0000000000202860
@property(readonly, copy) NSArray *routeCodings;
- (void)_setPatientReported:(_Bool)arg1;	// IMP=0x000000000020283b
@property(readonly) _Bool patientReported;
- (void)_setStatusCoding:(id)arg1;	// IMP=0x0000000000202778
@property(readonly, copy) HKMedicalCoding *statusCoding;
- (void)_setAdministrationDate:(id)arg1;	// IMP=0x000000000020272f
@property(readonly, copy) HKMedicalDate *administrationDate;
- (void)_setNotGiven:(_Bool)arg1;	// IMP=0x000000000020270a
@property(readonly) _Bool notGiven;
- (void)_setReaction:(id)arg1;	// IMP=0x00000000002026c6
@property(readonly, copy) NSString *reaction;
- (void)_setBodySiteCodings:(id)arg1;	// IMP=0x00000000002025fe
@property(readonly, copy) NSArray *bodySiteCodings;
- (void)_setPerformer:(id)arg1;	// IMP=0x00000000002025b5
@property(readonly, copy) NSString *performer;
- (void)_setLotNumber:(id)arg1;	// IMP=0x000000000020256c
@property(readonly, copy) NSString *lotNumber;
- (void)_setDoseQuantity:(id)arg1;	// IMP=0x0000000000202523
@property(readonly, copy) NSString *doseQuantity;
- (void)_setDoseNumber:(id)arg1;	// IMP=0x00000000002024da
@property(readonly, copy) NSString *doseNumber;
- (void)_setExpirationDate:(id)arg1;	// IMP=0x0000000000202491
@property(readonly, copy) HKMedicalDate *expirationDate;
- (void)_setVaccinationCodings:(id)arg1;	// IMP=0x00000000002023df
@property(readonly, copy) NSArray *vaccinationCodings;
- (id)reasonsNotGivenCodingsCollections;	// IMP=0x0000000000202321
- (id)reasonsCodingsCollections;	// IMP=0x0000000000202278
- (id)routeCodingsCollection;	// IMP=0x00000000002021e7
- (id)statusCodingCollection;	// IMP=0x0000000000202156
- (id)bodySiteCodingsCollection;	// IMP=0x00000000002020c5
- (id)vaccinationCodingsCollection;	// IMP=0x0000000000202062
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000202057
- (_Bool)isEquivalent:(id)arg1;	// IMP=0x0000000000200ca1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002003f3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000200146
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00000000001fff1c
- (id)medicalRecordCodings;	// IMP=0x000000000004349b
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007efc2
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007eaa0
@property(readonly, nonatomic) long long recordCategoryType;

// Remaining properties
@property(readonly) NSUUID *UUID;
@property(readonly, copy, nonatomic) NSString *country;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSLocale *locale;
@property(readonly) Class superclass;

@end

