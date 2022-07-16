//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNEntityIdentificationModelPrint-Protocol.h>
#import <Vision/VNSerializingInternal-Protocol.h>

@class NSData, NSString, VNRequestSpecifier;

@interface VNAnimalprint <VNEntityIdentificationModelPrint, VNSerializingInternal>
{
    float _confidence;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000170ae1
+ (unsigned long long)confidenceTypeForRevision:(unsigned long long)arg1;	// IMP=0x0000000000170ad9
+ (_Bool)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg1;	// IMP=0x0000000000170acd
+ (unsigned long long)currentSerializationVersion;	// IMP=0x0000000000170ac2
+ (unsigned long long)serializationMagicNumber;	// IMP=0x0000000000170ab7
+ (unsigned int)currentCodingVersion;	// IMP=0x0000000000170aaf
+ (id)currentVersion;	// IMP=0x0000000000170aa2
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;	// IMP=0x0000000000170a95
@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000170955
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000001707b5
@property(readonly, nonatomic) unsigned long long serializedLength;
- (id)initWithState:(id)arg1 byteOffset:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x00000000001705cb
- (id)initWithState:(id)arg1 error:(id *)arg2;	// IMP=0x000000000017059c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000170517
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017045d
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 confidence:(float)arg5 requestRevision:(unsigned long long)arg6;	// IMP=0x0000000000170330
- (_Bool)isEquivalentToVNEntityIdentificationModelPrint:(id)arg1;	// IMP=0x00000000000a9343
@property(readonly) NSData *VNEntityIdentificationModelPrintData;
@property(readonly) unsigned long long VNEntityIdentificationModelPrintByteLength;
@property(readonly) unsigned long long VNEntityIdentificationModelPrintElementType;
@property(readonly) unsigned long long VNEntityIdentificationModelPrintElementCount;
@property(readonly, copy) VNRequestSpecifier *VNEntityIdentificationModelPrintOriginatingRequestSpecifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

