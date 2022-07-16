//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCoding-Protocol.h>
#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSEntityDescription, NSMutableDictionary, NSString;

@interface NSPropertyDescription : NSObject <NSSecureCoding, NSCoding, NSCopying>
{
    NSString *_versionHashModifier;	// 8 = 0x8
    NSData *_versionHash;	// 16 = 0x10
    NSEntityDescription *_entity;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSArray *_validationPredicates;	// 40 = 0x28
    NSArray *_validationWarnings;	// 48 = 0x30
    struct _NSExtraPropertyIVars *_extraIvars;	// 56 = 0x38
    NSMutableDictionary *_userInfo;	// 64 = 0x40
    struct __propertyDescriptionFlags {
        unsigned int _isReadOnly:1;
        unsigned int _isTransient:1;
        unsigned int _isOptional:1;
        unsigned int _isIndexed:1;
        unsigned int _skipValidation:1;
        unsigned int _isIndexedBySpotlight:1;
        unsigned int _isStoredInExternalRecord:1;
        unsigned int _extraIvarsAreInDataBlob:1;
        unsigned int _isOrdered:1;
        unsigned int _hasMaxValueInExtraIvars:1;
        unsigned int _hasMinValueInExtraIvars:1;
        unsigned int _storeBinaryDataExternally:1;
        unsigned int _preserveValueOnDelete:1;
        unsigned int _isTriggerBacked:1;
        unsigned int _isFileBackedFuture:1;
        unsigned int _allowsCloudEncryption:1;
    } _propertyDescriptionFlags;	// 72 = 0x48
    short _entitysReferenceIDForProperty;	// 76 = 0x4c
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000130ba0
+ (void)initialize;	// IMP=0x000000000013071c
@property(copy) NSString *renamingIdentifier;
@property(getter=isStoredInExternalRecord) _Bool storedInExternalRecord;
@property(getter=isIndexedBySpotlight) _Bool indexedBySpotlight;
@property(copy) NSString *versionHashModifier;
@property(readonly, copy) NSData *versionHash;
@property(retain, nonatomic) NSDictionary *userInfo;
- (void)setValidationPredicates:(id)arg1 withValidationWarnings:(id)arg2;	// IMP=0x00000000001317ef
@property(copy, nonatomic) NSString *name;
@property(getter=isTransient) _Bool transient;
@property(getter=isOptional) _Bool optional;
@property(readonly) NSArray *validationWarnings;
@property(readonly) NSArray *validationPredicates;
@property(readonly, nonatomic) NSEntityDescription *entity;
@property(getter=isIndexed) _Bool indexed;
- (id)description;	// IMP=0x0000000000131488
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000131474
- (unsigned long long)hash;	// IMP=0x0000000000131449
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001312c3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000130ba8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013082a
- (int)_encodedPropertyFlagsForFlags:(int)arg1;	// IMP=0x0000000000130822
- (void)dealloc;	// IMP=0x000000000013074d
- (id)init;	// IMP=0x0000000000130739
- (void)_appendPropertyFieldsToData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6;	// IMP=0x0000000000132f4c
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;	// IMP=0x0000000000132420
- (_Bool)_skipValidation;	// IMP=0x0000000000132412
- (void)_restoreValidation;	// IMP=0x0000000000132408
- (void)_stripForMigration;	// IMP=0x00000000001323fe
- (_Bool)_comparePredicatesAndWarnings:(id)arg1;	// IMP=0x0000000000132375
- (_Bool)_nonPredicateValidateValue:(id *)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001322d4
- (id)_rawValidationWarnings;	// IMP=0x00000000001322c2
- (id)_rawValidationPredicates;	// IMP=0x00000000001322b0
- (void)_setOrdered:(_Bool)arg1;	// IMP=0x0000000000132299
- (_Bool)_isOrdered;	// IMP=0x000000000013228e
- (void)setReadOnly:(_Bool)arg1;	// IMP=0x0000000000132262
- (_Bool)isReadOnly;	// IMP=0x0000000000132257
- (void)_throwIfNotEditable;	// IMP=0x0000000000132241
- (_Bool)_isEditable;	// IMP=0x0000000000132222
- (long long)_entitysReferenceID;	// IMP=0x0000000000132217
- (void)_setEntitysReferenceID:(long long)arg1;	// IMP=0x00000000001321fb
- (void)_setEntityAndMaintainIndices:(id)arg1;	// IMP=0x000000000013218a
- (void)_setEntity:(id)arg1;	// IMP=0x0000000000132167
- (id)_initWithName:(id)arg1;	// IMP=0x00000000001320f4
- (_Bool)_isToManyRelationship;	// IMP=0x00000000001320ec
- (_Bool)_isRelationship;	// IMP=0x00000000001320e4
- (_Bool)_isEqual:(id)arg1 skipIndexCheck:(_Bool)arg2;	// IMP=0x0000000000131e84
- (_Bool)_isEqualWithoutIndex:(id)arg1;	// IMP=0x0000000000131e6d
- (unsigned long long)_propertyType;	// IMP=0x0000000000131e65
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;	// IMP=0x0000000000131d3c
- (void)_createCachesAndOptimizeState;	// IMP=0x0000000000131d36
- (void)_replaceValidationPredicates:(id)arg1 andWarnings:(id)arg2;	// IMP=0x0000000000131cfc
- (struct _NSExtraPropertyIVars *)_extraIVars;	// IMP=0x0000000000131cd2
- (void)_initializeExtraIVars;	// IMP=0x0000000000131c65
- (_Bool)_isSchemaEqual:(id)arg1;	// IMP=0x0000000000131bfa
- (_Bool)_epsilonEquals:(id)arg1 rhs:(id)arg2 withFlags:(int)arg3;	// IMP=0x0000000000131bd9
- (_Bool)_allowsCloudEncryption;	// IMP=0x0000000000131bcc
- (_Bool)_isFileBackedFuture;	// IMP=0x0000000000131bbe
- (_Bool)_isTriggerBacked;	// IMP=0x0000000000131bb0
- (_Bool)_preserveValueOnDelete;	// IMP=0x0000000000131ba2
- (_Bool)_storeBinaryDataExternally;	// IMP=0x0000000000131b94
- (_Bool)_hasMinValueInExtraIvars;	// IMP=0x0000000000131b86
- (_Bool)_hasMaxValueInExtraIvars;	// IMP=0x0000000000131b79
- (id)_underlyingProperty;	// IMP=0x0000000000131b70
- (void)setStoredInTruth:(_Bool)arg1;	// IMP=0x0000000000133209
- (_Bool)isStoredInTruth;	// IMP=0x00000000001331f7
- (void)setStoredInTruthFile:(_Bool)arg1;	// IMP=0x00000000001331e5
- (_Bool)isStoredInTruthFile;	// IMP=0x00000000001331d3
- (void)setSpotlightIndexed:(_Bool)arg1;	// IMP=0x00000000001331c1
- (_Bool)isSpotlightIndexed;	// IMP=0x00000000001331af
- (id)elementID;	// IMP=0x000000000013319d
- (void)setElementID:(id)arg1;	// IMP=0x000000000013318b

@end
