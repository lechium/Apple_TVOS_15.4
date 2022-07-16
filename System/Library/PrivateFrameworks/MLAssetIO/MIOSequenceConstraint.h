//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MLAssetIO/MIOFeatureValueConstraint-Protocol.h>

@class MIOFeatureDescription, NSString;

@interface MIOSequenceConstraint : NSObject <MIOFeatureValueConstraint>
{
    struct SequenceFeatureType _sequenceFeatureTypeParams;	// 8 = 0x8
    MIOFeatureDescription *_valueDescription;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x000000000001afc8
- (void).cxx_destruct;	// IMP=0x000000000001afa2
@property(readonly, nonatomic) MIOFeatureDescription *valueDescription; // @synthesize valueDescription=_valueDescription;
@property(readonly, nonatomic) struct _MIORange countRange;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001af5d
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ad7e
@property(readonly, copy) NSString *description;
- (const void *)sequenceFeatureTypeSpecification;	// IMP=0x000000000001acce
- (id)initWithSpecification:(const void *)arg1;	// IMP=0x000000000001a9f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
