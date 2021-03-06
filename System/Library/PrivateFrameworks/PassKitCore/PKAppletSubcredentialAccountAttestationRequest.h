//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface PKAppletSubcredentialAccountAttestationRequest
{
    NSData *_subCASEResidencyAttestation;	// 8 = 0x8
    NSData *_sharingTokenHash;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003402c7
@property(copy, nonatomic) NSData *sharingTokenHash; // @synthesize sharingTokenHash=_sharingTokenHash;
@property(copy, nonatomic) NSData *subCASEResidencyAttestation; // @synthesize subCASEResidencyAttestation=_subCASEResidencyAttestation;
- (id)initWithRequestData:(id)arg1;	// IMP=0x000000000034027a

@end

