//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class INCodable, INCodableDescription;

@interface INCustomObject
{
    INCodable *_backingStore;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018587a
- (void).cxx_destruct;	// IMP=0x0000000000185867
@property(retain, nonatomic, setter=_setBackingStore:) INCodable *_backingStore; // @synthesize _backingStore;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001857c5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018572a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018562a
- (unsigned long long)hash;	// IMP=0x00000000001855d4
- (_Bool)_isValidKey:(id)arg1;	// IMP=0x00000000001855b7
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x000000000018559a
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x000000000018557d
@property(readonly, nonatomic) INCodableDescription *codableDescription;
- (id)initWithIntent:(id)arg1 parameterName:(id)arg2 reference:(id)arg3;	// IMP=0x0000000000185416
- (id)initWithObject:(id)arg1 codableDescription:(id)arg2;	// IMP=0x0000000000185288
- (id)_initWithCodableDescription:(id)arg1;	// IMP=0x00000000001851f4

@end

