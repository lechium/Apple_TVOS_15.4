//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Transparency/TransparencyVerifiable-Protocol.h>

@class NSData, NSDictionary, NSMutableArray, SignedObject, TransparencyLogEntryVerifier, TransparencyManagedDataStore;

@interface LogEntry <TransparencyVerifiable>
{
}

+ (id)descriptor;	// IMP=0x0000000000095bee
- (unsigned long long)verifyTLTEntryForPerApplicationLogHead:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000056123
- (unsigned long long)setInclusionResult:(unsigned long long)arg1 signedLogHead:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000055a4d
- (unsigned long long)verifyWithError:(id *)arg1;	// IMP=0x0000000000055637
- (void)setMetadataValue:(id)arg1 key:(id)arg2;	// IMP=0x0000000000055566
- (void)setMetadata:(id)arg1;	// IMP=0x0000000000055550
@property(readonly) NSDictionary *metadata;
@property(retain) TransparencyManagedDataStore *dataStore;
@property(retain) TransparencyLogEntryVerifier *verifier;

// Remaining properties
@property(nonatomic) _Bool hasSlh; // @dynamic hasSlh;
@property(retain, nonatomic) NSMutableArray *hashesOfPeersInPathToRootArray; // @dynamic hashesOfPeersInPathToRootArray;
@property(readonly, nonatomic) unsigned long long hashesOfPeersInPathToRootArray_Count; // @dynamic hashesOfPeersInPathToRootArray_Count;
@property(nonatomic) int logType; // @dynamic logType;
@property(copy, nonatomic) NSData *nodeBytes; // @dynamic nodeBytes;
@property(nonatomic) unsigned long long nodePosition; // @dynamic nodePosition;
@property(nonatomic) int nodeType; // @dynamic nodeType;
@property(retain, nonatomic) SignedObject *slh; // @dynamic slh;

@end
