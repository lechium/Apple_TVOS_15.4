//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary;

@interface CKDAcceptSharesURLRequest
{
    CDUnknownBlockType _shareAcceptedBlock;	// 8 = 0x8
    NSArray *_shareMetadatasToAccept;	// 16 = 0x10
    NSMutableDictionary *_shareMetadataByRequestID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000255e38
@property(retain, nonatomic) NSMutableDictionary *shareMetadataByRequestID; // @synthesize shareMetadataByRequestID=_shareMetadataByRequestID;
@property(retain, nonatomic) NSArray *shareMetadatasToAccept; // @synthesize shareMetadatasToAccept=_shareMetadatasToAccept;
@property(copy, nonatomic) CDUnknownBlockType shareAcceptedBlock; // @synthesize shareAcceptedBlock=_shareAcceptedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x0000000000255c5d
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000002556a0
- (void)addSignatureForRequestOperation:(id)arg1;	// IMP=0x00000000002552d5
- (id)generateRequestOperations;	// IMP=0x00000000002547ed
- (_Bool)requiresCKAnonymousUserIDs;	// IMP=0x0000000000254758
- (_Bool)handlesAnonymousCKUserIDPropagation;	// IMP=0x0000000000254750
- (id)requestOperationClasses;	// IMP=0x00000000002546e4
- (id)zoneIDsToLock;	// IMP=0x00000000002544cb
- (id)initWithOperation:(id)arg1 shareMetadatasToAccept:(id)arg2;	// IMP=0x0000000000254432

@end

