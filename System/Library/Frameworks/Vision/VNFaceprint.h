//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNEntityIdentificationModelPrint-Protocol.h>
#import <Vision/VNSerializingInternal-Protocol.h>

@class NSData, NSString, VNRequestSpecifier;

@interface VNFaceprint <VNEntityIdentificationModelPrint, VNSerializingInternal>
{
    float _confidence;	// 8 = 0x8
}

+ (id)emptyFaceprintDataForRevision:(unsigned long long)arg1;	// IMP=0x00000000000ae7aa
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ae7a2
+ (unsigned long long)confidenceTypeForOriginatingRequestSpecifier:(id)arg1;	// IMP=0x00000000000ae79a
+ (_Bool)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg1;	// IMP=0x00000000000ae78e
+ (_Bool)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)arg1;	// IMP=0x00000000000ae782
+ (unsigned long long)currentSerializationVersion;	// IMP=0x00000000000ae777
+ (unsigned long long)serializationMagicNumber;	// IMP=0x00000000000ae76c
+ (id)codingTypesToCodingKeys;	// IMP=0x00000000000ae73c
+ (unsigned int)currentCodingVersion;	// IMP=0x00000000000ae731
+ (id)currentVersion;	// IMP=0x00000000000ae724
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;	// IMP=0x00000000000ae717
@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ae5d7
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000ae437
@property(readonly, nonatomic) unsigned long long serializedLength;
- (id)initWithState:(id)arg1 byteOffset:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x00000000000ada57
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ad9d2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ad6d6
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 confidence:(float)arg5 originatingRequestSpecifier:(id)arg6;	// IMP=0x00000000000ad5a9
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 confidence:(float)arg5 requestRevision:(unsigned long long)arg6;	// IMP=0x00000000000ad4dd
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 requestRevision:(unsigned long long)arg5;	// IMP=0x00000000000ad4c0
- (_Bool)isEquivalentToVNEntityIdentificationModelPrint:(id)arg1;	// IMP=0x00000000000a8eb6
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

