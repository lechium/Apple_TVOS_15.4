//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface INGeographicalFeature : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_geographicalFeatureType;	// 8 = 0x8
    NSArray *_geographicalFeatureDescriptors;	// 16 = 0x10
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x000000000035b8b1
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000035b8a9
- (void).cxx_destruct;	// IMP=0x000000000035b881
@property(readonly, copy, nonatomic) NSArray *geographicalFeatureDescriptors; // @synthesize geographicalFeatureDescriptors=_geographicalFeatureDescriptors;
@property(readonly, copy, nonatomic) NSString *geographicalFeatureType; // @synthesize geographicalFeatureType=_geographicalFeatureType;
- (id)_dictionaryRepresentation;	// IMP=0x000000000035b75f
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x000000000035b683
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x000000000035b58b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000035b51d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000035b3be
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000035b3b3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000035b305
@property(readonly) unsigned long long hash;
- (id)initWithGeographicalFeatureType:(id)arg1 geographicalFeatureDescriptors:(id)arg2;	// IMP=0x000000000035b20d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

