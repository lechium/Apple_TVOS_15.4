//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNFaceprint, VNTorsoprint;

@interface VNFaceTorsoprint
{
    VNFaceprint *_faceprint;	// 8 = 0x8
    VNTorsoprint *_torsoprint;	// 16 = 0x10
    unsigned long long _personId;	// 24 = 0x18
}

+ (_Bool)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg1;	// IMP=0x000000000009af4d
+ (_Bool)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)arg1;	// IMP=0x000000000009af41
+ (unsigned long long)currentSerializationVersion;	// IMP=0x000000000009af36
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009af2e
+ (id)codingTypesToCodingKeys;	// IMP=0x000000000009aefe
+ (unsigned int)currentCodingVersion;	// IMP=0x000000000009aef3
+ (id)currentVersion;	// IMP=0x000000000009aee6
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;	// IMP=0x000000000009aebe
- (void).cxx_destruct;	// IMP=0x000000000009ae8d
@property(nonatomic) unsigned long long personId; // @synthesize personId=_personId;
@property(readonly, nonatomic) VNTorsoprint *torsoprint; // @synthesize torsoprint=_torsoprint;
@property(readonly, nonatomic) VNFaceprint *faceprint; // @synthesize faceprint=_faceprint;
- (unsigned long long)serializedLength;	// IMP=0x000000000009adf8
- (id)serializeStateAndReturnError:(id *)arg1;	// IMP=0x000000000009ad5c
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000009aa54
- (id)initWithState:(id)arg1 byteOffset:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x000000000009a523
@property(readonly, nonatomic, getter=isValidTorsoprint) _Bool validTorsoprint;
@property(readonly, nonatomic, getter=isValidFaceprint) _Bool validFaceprint;
- (id)computeDistance:(id)arg1 withDistanceFunction:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000009a149
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009a07c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000099ead
- (id)initWithFaceprint:(id)arg1 torsoPrint:(id)arg2 originatingRequestSpecifier:(id)arg3;	// IMP=0x0000000000099a80
- (id)initWithFaceprint:(id)arg1 torsoPrint:(id)arg2 requestRevision:(unsigned long long)arg3;	// IMP=0x000000000009998c
- (id)initWithFaceprint:(id)arg1 torsoprint:(id)arg2;	// IMP=0x0000000000099899
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 faceprintConfidence:(float)arg5 torsoprintConfidence:(float)arg6 originatingRequestSpecifier:(id)arg7;	// IMP=0x00000000000995fe
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 faceprintConfidence:(float)arg5 torsoprintConfidence:(float)arg6;	// IMP=0x0000000000099527

@end

