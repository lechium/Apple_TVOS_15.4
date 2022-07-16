//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@class NSData, NSString;

@interface TRIClientTreatmentArtifact : NSObject <NSCopying>
{
    NSData *_encodedTreatmentDefinition;	// 8 = 0x8
    NSString *_encodedTreatmentDefinitionSignature;	// 16 = 0x10
    NSData *_publicCertificate;	// 24 = 0x18
}

+ (id)artifactWithEncodedTreatmentDefinition:(id)arg1 encodedTreatmentDefinitionSignature:(id)arg2 publicCertificate:(id)arg3;	// IMP=0x0000000000007a53
- (void).cxx_destruct;	// IMP=0x0000000000007edf
@property(readonly, nonatomic) NSData *publicCertificate; // @synthesize publicCertificate=_publicCertificate;
@property(readonly, nonatomic) NSString *encodedTreatmentDefinitionSignature; // @synthesize encodedTreatmentDefinitionSignature=_encodedTreatmentDefinitionSignature;
@property(readonly, nonatomic) NSData *encodedTreatmentDefinition; // @synthesize encodedTreatmentDefinition=_encodedTreatmentDefinition;
- (id)init;	// IMP=0x0000000000007ebb
- (id)description;	// IMP=0x0000000000007e73
- (unsigned long long)hash;	// IMP=0x0000000000007e14
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007dac
- (_Bool)isEqualToArtifact:(id)arg1;	// IMP=0x0000000000007beb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007be0
- (id)copyWithReplacementPublicCertificate:(id)arg1;	// IMP=0x0000000000007b8b
- (id)copyWithReplacementEncodedTreatmentDefinitionSignature:(id)arg1;	// IMP=0x0000000000007b36
- (id)copyWithReplacementEncodedTreatmentDefinition:(id)arg1;	// IMP=0x0000000000007ae1
- (id)initWithEncodedTreatmentDefinition:(id)arg1 encodedTreatmentDefinitionSignature:(id)arg2 publicCertificate:(id)arg3;	// IMP=0x000000000000782b
- (_Bool)isValidWithTreatmentId:(id)arg1;	// IMP=0x0000000000050ca2

@end
