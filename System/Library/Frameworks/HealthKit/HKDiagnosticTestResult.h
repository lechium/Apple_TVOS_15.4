//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKConceptIndexable-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKConcept, HKDiagnosticTestResultType, HKInspectableValueCollection, HKMedicalCoding, HKMedicalCodingCollection, HKMedicalDate, NSArray, NSLocale, NSString, NSUUID;

@interface HKDiagnosticTestResult <HKConceptIndexable, NSSecureCoding, NSCopying>
{
    HKMedicalCodingCollection *_diagnosticTestCodingCollection;	// 8 = 0x8
    HKInspectableValueCollection *_value;	// 16 = 0x10
    NSArray *_referenceRanges;	// 24 = 0x18
    HKMedicalDate *_effectiveStartDate;	// 32 = 0x20
    NSString *_category;	// 40 = 0x28
    NSArray *_categoriesCodingCollections;	// 48 = 0x30
    HKMedicalDate *_issueDate;	// 56 = 0x38
    HKMedicalDate *_effectiveEndDate;	// 64 = 0x40
    HKMedicalCoding *_statusCoding;	// 72 = 0x48
    NSArray *_interpretationCodingCollections;	// 80 = 0x50
    NSString *_comments;	// 88 = 0x58
    HKMedicalCodingCollection *_bodySiteCodingCollection;	// 96 = 0x60
    HKMedicalCodingCollection *_methodCodingCollection;	// 104 = 0x68
    NSArray *_performers;	// 112 = 0x70
    long long _referenceRangeStatus;	// 120 = 0x78
    HKConcept *_diagnosticTest;	// 128 = 0x80
    NSArray *_categories;	// 136 = 0x88
    HKConcept *_status;	// 144 = 0x90
    NSArray *_interpretation;	// 152 = 0x98
    HKConcept *_bodySite;	// 160 = 0xa0
    HKConcept *_method;	// 168 = 0xa8
}

+ (_Bool)_isConcreteObjectClass;	// IMP=0x000000000010962a
+ (_Bool)supportsEquivalence;	// IMP=0x00000000001072c7
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001067cf
+ (id)_newDiagnosticTestResultWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 diagnosticTestCodingCollection:(id)arg13 value:(id)arg14 referenceRanges:(id)arg15 effectiveStartDate:(id)arg16 category:(id)arg17 categoriesCodingCollections:(id)arg18 issueDate:(id)arg19 effectiveEndDate:(id)arg20 statusCoding:(id)arg21 interpretationCodingCollections:(id)arg22 comments:(id)arg23 bodySiteCodingCollection:(id)arg24 methodCodingCollection:(id)arg25 performers:(id)arg26 referenceRangeStatus:(long long)arg27 config:(CDUnknownBlockType)arg28;	// IMP=0x0000000000105dae
+ (id)diagnosticTestResultWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 diagnosticTestCodingCollection:(id)arg13 value:(id)arg14 referenceRanges:(id)arg15 effectiveStartDate:(id)arg16 category:(id)arg17 categoriesCodingCollections:(id)arg18 issueDate:(id)arg19 effectiveEndDate:(id)arg20 statusCoding:(id)arg21 interpretationCodingCollections:(id)arg22 comments:(id)arg23 bodySiteCodingCollection:(id)arg24 methodCodingCollection:(id)arg25 performers:(id)arg26 referenceRangeStatus:(long long)arg27;	// IMP=0x0000000000105cee
+ (id)defaultDisplayString;	// IMP=0x00000000000432e7
+ (id)diagnosticTestResultWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 diagnosticTestCodingCollection:(id)arg12 value:(id)arg13 referenceRanges:(id)arg14 effectiveStartDate:(id)arg15 category:(id)arg16 categoriesCodingCollections:(id)arg17 issueDate:(id)arg18 effectiveEndDate:(id)arg19 statusCoding:(id)arg20 interpretationCodingCollections:(id)arg21 comments:(id)arg22 bodySiteCodingCollection:(id)arg23 methodCodingCollection:(id)arg24 performers:(id)arg25 referenceRangeStatus:(long long)arg26;	// IMP=0x0000000000102c0e
+ (_Bool)groupsByUserDomainConcept;	// IMP=0x000000000015c389
+ (id)cachedConceptRelationshipKeyPaths;	// IMP=0x000000000021571d
+ (id)indexableConceptKeyPaths;	// IMP=0x00000000002155a3
- (void).cxx_destruct;	// IMP=0x0000000000109644
@property(readonly, copy) HKDiagnosticTestResultType *diagnosticTestResultType;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;	// IMP=0x00000000001094b7
- (void)_setMethod:(id)arg1;	// IMP=0x0000000000109483
@property(readonly, copy) HKConcept *method;
- (void)_setBodySite:(id)arg1;	// IMP=0x00000000001093bc
@property(readonly, copy) HKConcept *bodySite;
- (void)_setInterpretation:(id)arg1;	// IMP=0x00000000001092f5
@property(readonly, copy) NSArray *interpretation;
- (void)_setStatus:(id)arg1;	// IMP=0x00000000001091d2
@property(readonly, copy) HKConcept *status;
- (void)_setCategories:(id)arg1;	// IMP=0x00000000001090cf
@property(readonly, copy) NSArray *categories;
- (void)_setDiagnosticTest:(id)arg1;	// IMP=0x0000000000108fbe
@property(readonly, copy) HKConcept *diagnosticTest;
- (void)_setReferenceRangeStatus:(long long)arg1;	// IMP=0x0000000000108f2c
@property(readonly) long long referenceRangeStatus;
- (void)_setPerformers:(id)arg1;	// IMP=0x0000000000108ee7
@property(readonly, copy) NSArray *performers;
- (void)_setMethodCodingCollection:(id)arg1;	// IMP=0x0000000000108e1f
@property(readonly, copy) HKMedicalCodingCollection *methodCodingCollection;
- (void)_setBodySiteCodingCollection:(id)arg1;	// IMP=0x0000000000108d57
@property(readonly, copy) HKMedicalCodingCollection *bodySiteCodingCollection;
- (void)_setComments:(id)arg1;	// IMP=0x0000000000108d0e
@property(readonly, copy) NSString *comments;
- (void)_setInterpretationCodingCollections:(id)arg1;	// IMP=0x0000000000108c2c
@property(readonly, copy) NSArray *interpretationCodingCollections;
- (void)_setStatusCoding:(id)arg1;	// IMP=0x0000000000108b7a
@property(readonly, copy) HKMedicalCoding *statusCoding;
- (void)_setEffectiveEndDate:(id)arg1;	// IMP=0x0000000000108b31
@property(readonly, copy) HKMedicalDate *effectiveEndDate;
- (void)_setIssueDate:(id)arg1;	// IMP=0x0000000000108ae8
@property(readonly, copy) HKMedicalDate *issueDate;
- (void)_setCategoriesCodingCollections:(id)arg1;	// IMP=0x0000000000108a26
@property(readonly, copy) NSArray *categoriesCodingCollections;
- (void)_setCategory:(id)arg1;	// IMP=0x00000000001089dd
@property(readonly, copy) NSString *category;
- (void)_setEffectiveStartDate:(id)arg1;	// IMP=0x0000000000108994
@property(readonly, copy) HKMedicalDate *effectiveStartDate;
- (void)_setReferenceRanges:(id)arg1;	// IMP=0x000000000010894b
@property(readonly, copy) NSArray *referenceRanges;
- (void)_setValue:(id)arg1;	// IMP=0x0000000000108902
@property(readonly, copy) HKInspectableValueCollection *value;
- (void)_setDiagnosticTestCodingCollection:(id)arg1;	// IMP=0x0000000000108850
@property(readonly, copy) HKMedicalCodingCollection *diagnosticTestCodingCollection;
- (id)statusCodingCollection;	// IMP=0x00000000001087d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001087cd
- (_Bool)isEquivalent:(id)arg1;	// IMP=0x00000000001072cf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000106a7b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001067d7
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000010659e
- (id)medicalRecordCodings;	// IMP=0x0000000000043297
@property(readonly, nonatomic) long long recordCategoryType;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000215bd0
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021575b

// Remaining properties
@property(readonly) NSUUID *UUID;
@property(readonly, copy, nonatomic) NSString *country;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSLocale *locale;
@property(readonly) Class superclass;

@end

