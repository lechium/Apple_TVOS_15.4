//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVHomeSharingKit/TVHKDMAPEntity-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSString, TVHKDMAPEntity;

__attribute__((visibility("hidden")))
@interface TVHKDMAPChangeTrackingEntity : NSObject <TVHKDMAPEntity>
{
    NSMutableDictionary *_mutatedAttributeValues;	// 8 = 0x8
    TVHKDMAPEntity *_entity;	// 16 = 0x10
}

+ (id)new;	// IMP=0x000000000008f4c2
- (void).cxx_destruct;	// IMP=0x00000000000902b5
@property(retain, nonatomic) TVHKDMAPEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) NSMutableDictionary *mutatedAttributeValues; // @synthesize mutatedAttributeValues=_mutatedAttributeValues;
- (id)_mutableAttributeValuesData;	// IMP=0x000000000009019b
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008fee1
@property(readonly) unsigned long long hash;
- (void)prepopulateAttributeValues;	// IMP=0x000000000008fdd5
- (void)setAttributeValue:(id)arg1 forCode:(id)arg2;	// IMP=0x000000000008fcda
- (id)attributeValueForCode:(id)arg1;	// IMP=0x000000000008fb8c
@property(readonly, copy, nonatomic) NSDictionary *attributeValues;
@property(readonly, nonatomic) NSNumber *persistentItemID;
@property(readonly, nonatomic) NSNumber *itemID;
@property(readonly, nonatomic) unsigned long long protocol;
@property(readonly, nonatomic) unsigned long long type;
- (void)commitChanges;	// IMP=0x000000000008f77b
@property(readonly, copy, nonatomic) NSDictionary *commitedAttributeValues;
@property(readonly, copy, nonatomic) NSDictionary *changedAttributeValues;
@property(readonly, nonatomic) _Bool hasChanges;
- (id)initWithEntity:(id)arg1;	// IMP=0x000000000008f560
- (id)init;	// IMP=0x000000000008f4f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

