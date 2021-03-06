//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSExpression, NSPredicate;

@interface NSDerivedAttributeDescription
{
    NSExpression *_derivationExpression;	// 8 = 0x8
    NSPredicate *_filteringPredicate;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000213759
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;	// IMP=0x0000000000214b6b
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;	// IMP=0x0000000000214841
- (void)_createCachesAndOptimizeState;	// IMP=0x0000000000213e90
- (void)setRenamingIdentifier:(id)arg1;	// IMP=0x0000000000213dc7
- (void)setDefaultValue:(id)arg1;	// IMP=0x0000000000213d54
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000213cc0
- (_Bool)_isSchemaEqual:(id)arg1;	// IMP=0x0000000000213c1b
@property(retain) NSExpression *derivationExpression;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000213940
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002138bc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000213795
- (void)setReadOnly:(_Bool)arg1;	// IMP=0x0000000000213783
- (_Bool)isReadOnly;	// IMP=0x000000000021377b
- (void)setTransient:(_Bool)arg1;	// IMP=0x0000000000213769
- (_Bool)isTransient;	// IMP=0x0000000000213761
- (id)description;	// IMP=0x000000000021367f
- (unsigned long long)_propertyType;	// IMP=0x0000000000213674
- (void)dealloc;	// IMP=0x0000000000213609

@end

