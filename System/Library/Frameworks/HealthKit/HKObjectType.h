//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface HKObjectType : NSObject <NSSecureCoding, NSCopying>
{
    short _code;	// 8 = 0x8
    HKObjectType *_parentType;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005603
+ (id)handwashingEventType;	// IMP=0x0000000000112e68
+ (id)lowCardioFitnessEventType;	// IMP=0x0000000000112e4a
+ (id)sleepScheduleType;	// IMP=0x0000000000112e2c
+ (id)sleepDurationGoalType;	// IMP=0x0000000000112e0e
+ (id)pregnancyType;	// IMP=0x0000000000112df0
+ (id)lactationType;	// IMP=0x0000000000112dd2
+ (id)contraceptiveType;	// IMP=0x0000000000112db4
+ (id)menstrualFlowType;	// IMP=0x0000000000112d96
+ (id)activityMoveModeChangeType;	// IMP=0x0000000000112d78
+ (id)headphoneAudioExposureEventType;	// IMP=0x0000000000112d5a
+ (id)environmentalAudioExposureEventType;	// IMP=0x0000000000112d3c
+ (id)fitnessFriendWorkoutType;	// IMP=0x0000000000010656
+ (id)fitnessFriendAchievementType;	// IMP=0x00000000000100a8
+ (id)fitnessFriendActivitySnapshotType;	// IMP=0x000000000000f7f6
+ (id)atrialFibrillationEventType;	// IMP=0x0000000000112d1c
+ (id)irregularlyIrregularPulseType;	// IMP=0x0000000000112d0a
+ (id)heartStudyEventType;	// IMP=0x0000000000112cec
+ (id)bradycardiaType;	// IMP=0x0000000000112cce
+ (id)tachycardiaType;	// IMP=0x0000000000112cb0
+ (id)heartRateType;	// IMP=0x0000000000112c92
+ (id)watchActivationType;	// IMP=0x000000000001df7c
+ (id)deepBreathingSessionType;	// IMP=0x000000000001df5e
+ (id)coachingEventType;	// IMP=0x0000000000112c74
+ (id)activityCacheType;	// IMP=0x00000000000044c6
+ (id)briskMinuteDataType;	// IMP=0x0000000000009a5c
+ (id)standGoal;	// IMP=0x0000000000112c56
+ (id)exerciseGoal;	// IMP=0x0000000000112c38
+ (id)moveMinuteGoal;	// IMP=0x0000000000112c1a
+ (id)calorieGoal;	// IMP=0x0000000000004508
+ (id)_nonClinicalTypesFromTypes:(id)arg1;	// IMP=0x0000000000112be4
+ (id)_clinicalTypesFromTypes:(id)arg1;	// IMP=0x0000000000112bb3
+ (id)_objectTypesFromIdentifierArray:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000112836
+ (id)_typeWithIdentifier:(id)arg1 expectedClass:(Class)arg2;	// IMP=0x00000000001127e6
+ (long long)_typeCodeForIdentifier:(id)arg1;	// IMP=0x00000000001126e3
+ (id)_typeWithIdentifier:(id)arg1;	// IMP=0x00000000001126cf
+ (id)electrocardiogramType;	// IMP=0x00000000001126b1
+ (id)audiogramSampleType;	// IMP=0x0000000000112693
+ (id)activitySummaryType;	// IMP=0x0000000000112675
+ (id)workoutType;	// IMP=0x00000000000044e7
+ (id)seriesTypeForIdentifier:(id)arg1;	// IMP=0x0000000000004544
+ (id)documentTypeForIdentifier:(id)arg1;	// IMP=0x000000000011260d
+ (id)correlationTypeForIdentifier:(id)arg1;	// IMP=0x00000000001125a6
+ (id)characteristicTypeForIdentifier:(id)arg1;	// IMP=0x000000000001015b
+ (id)categoryTypeForIdentifier:(id)arg1;	// IMP=0x000000000000c430
+ (id)quantityTypeForIdentifier:(id)arg1;	// IMP=0x0000000000009795
+ (id)dataTypeWithNumber:(id)arg1;	// IMP=0x0000000000112571
+ (id)_dataTypeWithCode:(long long)arg1 expectedClass:(Class)arg2;	// IMP=0x000000000011232a
+ (id)dataTypeWithCode:(long long)arg1;	// IMP=0x000000000000293e
+ (id)_typesIncludingParentTypes:(id)arg1;	// IMP=0x0000000000112129
+ (id)_allBinarySampleTypes;	// IMP=0x0000000000111fe2
+ (id)_allTypesOfClass:(Class)arg1;	// IMP=0x0000000000111eb7
+ (id)_allDataTypeIdentifiers;	// IMP=0x0000000000111d04
+ (void)_enumerateObjectTypesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000111c88
+ (void)_enumerateDataTypeCodesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000111bd0
+ (id)unknownRecordTypeForIdentifier:(id)arg1;	// IMP=0x0000000000056e1e
+ (id)medicationOrderTypeForIdentifier:(id)arg1;	// IMP=0x0000000000059303
+ (id)allergyRecordTypeForIdentifier:(id)arg1;	// IMP=0x000000000005c731
+ (id)accountOwnerTypeForIdentifier:(id)arg1;	// IMP=0x000000000006e087
+ (id)objectTypeForWorkoutMetric:(unsigned long long)arg1;	// IMP=0x000000000008cd84
+ (id)signedClinicalDataRecordTypeForIdentifier:(id)arg1;	// IMP=0x00000000000b919a
+ (id)procedureRecordTypeForIdentifier:(id)arg1;	// IMP=0x00000000000c0c35
+ (id)diagnosticTestResultTypeForIdentifier:(id)arg1;	// IMP=0x00000000000c1dd3
+ (id)conditionRecordTypeForIdentifier:(id)arg1;	// IMP=0x00000000000e2560
+ (id)medicationDispenseRecordTypeForIdentifier:(id)arg1;	// IMP=0x00000000000fe778
+ (id)diagnosticTestReportTypeForIdentifier:(id)arg1;	// IMP=0x000000000010017a
+ (id)coverageRecordTypeForIdentifier:(id)arg1;	// IMP=0x0000000000103c00
+ (id)medicalTypeForIdentifier:(id)arg1;	// IMP=0x0000000000121260
+ (_Bool)_allowAuthorizationForSharing:(_Bool)arg1 types:(id)arg2 entitlements:(id)arg3 disallowedTypes:(id)arg4;	// IMP=0x0000000000139c0e
+ (_Bool)_allowAuthorizationForReadingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3;	// IMP=0x0000000000139bf1
+ (_Bool)_allowAuthorizationForSharingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3;	// IMP=0x0000000000139bd1
+ (id)clinicalTypeForIdentifier:(id)arg1;	// IMP=0x00000000001aae92
+ (id)vaccinationRecordTypeForIdentifier:(id)arg1;	// IMP=0x00000000001b7e97
+ (id)verifiableClinicalRecordTypeForIdentifier:(id)arg1;	// IMP=0x00000000001e1b4e
+ (id)medicationRecordTypeForIdentifier:(id)arg1;	// IMP=0x00000000001fa8bc
- (void).cxx_destruct;	// IMP=0x0000000000002953
@property(retain, nonatomic) HKObjectType *parentType; // @synthesize parentType=_parentType;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000028b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000056e3
- (id)_predicateForSDKVersion:(unsigned int)arg1;	// IMP=0x0000000000112f57
- (_Bool)_requiresPerObjectAuthorization;	// IMP=0x0000000000112f4f
- (_Bool)_requiresAuthorization;	// IMP=0x0000000000112f47
@property(readonly, nonatomic) _Bool supportsExport;
@property(readonly, nonatomic) _Bool isClinicalType;
@property(readonly, nonatomic) Class dataObjectClass;
@property(readonly, nonatomic) long long code;
@property(readonly) NSString *identifier;
@property(readonly, nonatomic, getter=_definition) CDStruct_0970132e *definition;
- (unsigned long long)hash;	// IMP=0x0000000000005621
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000005691
- (id)description;	// IMP=0x0000000000002e9f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005684
- (id)_initWithCode:(long long)arg1;	// IMP=0x0000000000112ecf
- (_Bool)isHealthRecordsType;	// IMP=0x0000000000112e86
- (id)init;	// IMP=0x0000000000111b56
- (id)hk_localizedNameForAuthSheet;	// IMP=0x000000000002fc32
- (id)hk_localizedNameForLocale:(id)arg1;	// IMP=0x000000000002fae1
- (id)hk_localizedName;	// IMP=0x000000000002f868
- (id)_hk_localizedNameKey;	// IMP=0x000000000002ec54
@property(readonly, nonatomic) _Bool readingAuthorizationAllowed;
@property(readonly, nonatomic) _Bool sharingAuthorizationAllowed;

@end
