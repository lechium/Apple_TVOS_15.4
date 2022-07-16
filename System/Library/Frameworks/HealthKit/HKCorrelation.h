//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKCorrelationType, NSMutableDictionary, NSSet, NSUUID;

@interface HKCorrelation
{
    NSMutableDictionary *_objects;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001cd0d8
+ (_Bool)_allowEmptyCorrelations;	// IMP=0x00000000001cd0d0
+ (_Bool)_isConcreteObjectClass;	// IMP=0x00000000001cbe26
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 device:(id)arg5 metadata:(id)arg6;	// IMP=0x00000000001cbc98
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 metadata:(id)arg5;	// IMP=0x00000000001cbc7c
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4;	// IMP=0x00000000001cbc5a
- (void).cxx_destruct;	// IMP=0x00000000001cd281
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001cd204
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001cd0e0
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;	// IMP=0x00000000001cca9b
- (id)_allTypes;	// IMP=0x00000000001cca7e
- (void)_removeAllCorrelatedObjects;	// IMP=0x00000000001cca3e
- (_Bool)_containsObjects;	// IMP=0x00000000001cc95d
- (_Bool)_correlatedObjectsMatchFilterDictionary:(id)arg1;	// IMP=0x00000000001cc693
- (void)_filterCorrelatedObjectsWithFilterDictionary:(id)arg1;	// IMP=0x00000000001cc355
- (id)objectsForType:(id)arg1;	// IMP=0x00000000001cc2f3
- (void)_addCorrelatedObjects:(id)arg1;	// IMP=0x00000000001cc1c9
- (void)_addCorrelatedObject:(id)arg1;	// IMP=0x00000000001cc0f2
@property(readonly) HKCorrelationType *correlationType;
- (id)description;	// IMP=0x00000000001cc015
@property(readonly, getter=_UUID) NSUUID *UUID;
@property(readonly, copy) NSSet *objects;
- (id)_init;	// IMP=0x00000000001cbe2e

@end
