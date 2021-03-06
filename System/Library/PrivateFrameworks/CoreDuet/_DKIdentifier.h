//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDuet/_DKHasComparableValue-Protocol.h>
#import <CoreDuet/_DKHasObjectType-Protocol.h>
#import <CoreDuet/_DKHasPrimaryValue-Protocol.h>

@class NSString, _DKIdentifierType;

@interface _DKIdentifier <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>
{
    NSString *_stringValue;	// 8 = 0x8
    _DKIdentifierType *_identifierType;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002822e
+ (id)identifierWithString:(id)arg1 type:(id)arg2;	// IMP=0x000000000002811c
+ (id)fromPBCodable:(id)arg1;	// IMP=0x00000000000b331d
+ (id)_identifierFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 cache:(id)arg3;	// IMP=0x0000000000110361
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4;	// IMP=0x0000000000110130
+ (id)entityName;	// IMP=0x00000000001100df
- (void).cxx_destruct;	// IMP=0x0000000000028950
@property(retain) _DKIdentifierType *identifierType; // @synthesize identifierType=_identifierType;
@property(retain) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000286c9
- (long long)integerValue;	// IMP=0x0000000000028685
- (double)doubleValue;	// IMP=0x000000000002861d
- (id)primaryValue;	// IMP=0x0000000000028608
- (long long)compareValue:(id)arg1;	// IMP=0x00000000000284bf
- (id)objectType;	// IMP=0x00000000000284aa
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028338
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000028236
- (id)initWithString:(id)arg1 type:(id)arg2;	// IMP=0x000000000002818c
- (id)toPBCodable;	// IMP=0x00000000000b3208
- (_Bool)copyToManagedObject:(id)arg1;	// IMP=0x0000000000110587
- (long long)typeCode;	// IMP=0x00000000001100ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

