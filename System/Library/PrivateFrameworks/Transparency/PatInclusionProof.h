//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Transparency/TransparencyVerifiable-Protocol.h>

@class KTPatInclusionProofVerifier, LogEntry, NSDictionary, TransparencyManagedDataStore;

@interface PatInclusionProof <TransparencyVerifiable>
{
}

+ (id)descriptor;	// IMP=0x00000000000960b6
- (unsigned long long)verifyConfigProof:(id *)arg1;	// IMP=0x000000000009fe46
- (unsigned long long)verifyWithError:(id *)arg1;	// IMP=0x000000000009f90b
@property(readonly) unsigned long long tltLogBeginningMs;
@property(readonly) unsigned long long patLogBeginningMs;
- (int)earliestCurrentTreeVersionWithError:(id *)arg1;	// IMP=0x000000000009f40e
- (unsigned long long)shutdownTimeStamp:(id *)arg1;	// IMP=0x000000000009f095
- (int)earliestNextTreeVersionWithError:(id *)arg1;	// IMP=0x000000000009ed1e
- (id)vrfPublicKeyWithError:(id *)arg1;	// IMP=0x000000000009e875
- (id)patSigningKeyWithError:(id *)arg1;	// IMP=0x000000000009e39d
- (void)setMetadataValue:(id)arg1 key:(id)arg2;	// IMP=0x000000000009e2cc
- (void)setMetadata:(id)arg1;	// IMP=0x000000000009e2b6
@property(readonly) NSDictionary *metadata;
@property(retain) KTPatInclusionProofVerifier *verifier;
@property(retain) TransparencyManagedDataStore *dataStore;

// Remaining properties
@property(nonatomic) _Bool hasPerApplicationTreeEntry; // @dynamic hasPerApplicationTreeEntry;
@property(nonatomic) _Bool hasTopLevelTreeEntry; // @dynamic hasTopLevelTreeEntry;
@property(retain, nonatomic) LogEntry *perApplicationTreeEntry; // @dynamic perApplicationTreeEntry;
@property(retain, nonatomic) LogEntry *topLevelTreeEntry; // @dynamic topLevelTreeEntry;

@end

