//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKConceptIndexable-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKConcept, HKMedicalCoding, HKMedicalCodingCollection, HKMedicalDate, HKMedicationOrderType, NSArray, NSLocale, NSString, NSUUID;

@interface HKMedicationOrder <HKConceptIndexable, NSSecureCoding, NSCopying>
{
    HKMedicalCodingCollection *_medicationCodingCollection;	// 8 = 0x8
    NSString *_prescriber;	// 16 = 0x10
    long long _numberOfFills;	// 24 = 0x18
    NSArray *_dosages;	// 32 = 0x20
    HKMedicalDate *_earliestDosageDate;	// 40 = 0x28
    HKMedicalDate *_writtenDate;	// 48 = 0x30
    HKMedicalDate *_endedDate;	// 56 = 0x38
    HKMedicalCoding *_statusCoding;	// 64 = 0x40
    NSArray *_reasonCodingCollections;	// 72 = 0x48
    HKMedicalCodingCollection *_reasonEndedCodingCollection;	// 80 = 0x50
    HKMedicalCodingCollection *_statusReasonCodingCollection;	// 88 = 0x58
    HKConcept *_medication;	// 96 = 0x60
    HKConcept *_status;	// 104 = 0x68
    NSArray *_reason;	// 112 = 0x70
    HKConcept *_reasonEnded;	// 120 = 0x78
    HKConcept *_statusReason;	// 128 = 0x80
}

+ (_Bool)_isConcreteObjectClass;	// IMP=0x0000000000036f88
+ (_Bool)supportsEquivalence;	// IMP=0x00000000000353ea
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000034bfc
+ (id)_newMedicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodingCollection:(id)arg13 prescriber:(id)arg14 numberOfFills:(long long)arg15 dosages:(id)arg16 earliestDosageDate:(id)arg17 writtenDate:(id)arg18 endedDate:(id)arg19 statusCoding:(id)arg20 reasonCodingCollections:(id)arg21 reasonEndedCodingCollection:(id)arg22 statusReasonCodingCollection:(id)arg23 config:(CDUnknownBlockType)arg24;	// IMP=0x00000000000343ba
+ (id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodingCollection:(id)arg13 prescriber:(id)arg14 numberOfFills:(long long)arg15 dosages:(id)arg16 earliestDosageDate:(id)arg17 writtenDate:(id)arg18 endedDate:(id)arg19 statusCoding:(id)arg20 reasonCodingCollections:(id)arg21 reasonEndedCodingCollection:(id)arg22 statusReasonCodingCollection:(id)arg23;	// IMP=0x000000000003431c
+ (_Bool)groupsByUserDomainConcept;	// IMP=0x00000000000406ff
+ (id)defaultDisplayString;	// IMP=0x0000000000043075
+ (id)cachedConceptRelationshipKeyPaths;	// IMP=0x00000000000c02e6
+ (id)indexableConceptKeyPaths;	// IMP=0x00000000000c017f
+ (id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 medicationCodingCollection:(id)arg12 prescriber:(id)arg13 numberOfFills:(long long)arg14 dosages:(id)arg15 earliestDosageDate:(id)arg16 writtenDate:(id)arg17 endedDate:(id)arg18 statusCoding:(id)arg19 reasonCodingCollections:(id)arg20 reasonEndedCodingCollection:(id)arg21 statusReasonCodingCollection:(id)arg22;	// IMP=0x00000000000d6315
- (void).cxx_destruct;	// IMP=0x0000000000036fa2
@property(readonly, copy) HKMedicationOrderType *medicationOrderType;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;	// IMP=0x0000000000036e8c
- (void)_setStatusReason:(id)arg1;	// IMP=0x0000000000036e58
@property(readonly, copy) HKConcept *statusReason;
- (void)_setReasonEnded:(id)arg1;	// IMP=0x0000000000036d91
@property(readonly, copy) HKConcept *reasonEnded;
- (void)_setReason:(id)arg1;	// IMP=0x0000000000036cca
@property(readonly, copy) NSArray *reason;
- (void)_setStatus:(id)arg1;	// IMP=0x0000000000036ba7
@property(readonly, copy) HKConcept *status;
- (void)_setMedication:(id)arg1;	// IMP=0x0000000000036aa4
@property(readonly, copy) HKConcept *medication;
- (void)_setStatusReasonCodingCollection:(id)arg1;	// IMP=0x0000000000036970
@property(readonly, copy) HKMedicalCodingCollection *statusReasonCodingCollection;
- (void)_setReasonEndedCodingCollection:(id)arg1;	// IMP=0x00000000000368a8
@property(readonly, copy) HKMedicalCodingCollection *reasonEndedCodingCollection;
- (void)_setReasonCodingCollections:(id)arg1;	// IMP=0x00000000000367c6
@property(readonly, copy) NSArray *reasonCodingCollections;
- (void)_setStatusCoding:(id)arg1;	// IMP=0x0000000000036714
@property(readonly, copy) HKMedicalCoding *statusCoding;
- (void)_setEndedDate:(id)arg1;	// IMP=0x00000000000366cb
@property(readonly, copy) HKMedicalDate *endedDate;
- (void)_setWrittenDate:(id)arg1;	// IMP=0x0000000000036682
@property(readonly, copy) HKMedicalDate *writtenDate;
- (void)_setEarliestDosageDate:(id)arg1;	// IMP=0x0000000000036639
@property(readonly, copy) HKMedicalDate *earliestDosageDate;
- (void)_setDosages:(id)arg1;	// IMP=0x00000000000365f0
@property(readonly, copy) NSArray *dosages;
- (void)_setNumberOfFills:(long long)arg1;	// IMP=0x00000000000365ca
@property(readonly) long long numberOfFills;
- (void)_setPrescriber:(id)arg1;	// IMP=0x0000000000036585
@property(readonly, copy) NSString *prescriber;
- (void)_setMedicationCodingCollection:(id)arg1;	// IMP=0x00000000000364d3
@property(readonly, copy) HKMedicalCodingCollection *medicationCodingCollection;
- (id)statusCodingCollection;	// IMP=0x000000000003645b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000036450
- (_Bool)isEquivalent:(id)arg1;	// IMP=0x00000000000353f2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000034e21
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000034c04
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000000034a03
- (id)medicalRecordCodings;	// IMP=0x0000000000043025
@property(readonly, nonatomic) long long recordCategoryType;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000c077a
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c0324

// Remaining properties
@property(readonly) NSUUID *UUID;
@property(readonly, copy, nonatomic) NSString *country;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSLocale *locale;
@property(readonly) Class superclass;

@end
