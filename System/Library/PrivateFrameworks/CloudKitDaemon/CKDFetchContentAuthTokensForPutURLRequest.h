//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDAssetTokenRequest, NSDictionary, NSMapTable;

@interface CKDFetchContentAuthTokensForPutURLRequest
{
    _Bool _useEncryption;	// 8 = 0x8
    CKDAssetTokenRequest *_assetTokenRequest;	// 16 = 0x10
    NSMapTable *_transactionStateByRequestIDs;	// 24 = 0x18
    NSDictionary *_headers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000c2765
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSMapTable *transactionStateByRequestIDs; // @synthesize transactionStateByRequestIDs=_transactionStateByRequestIDs;
@property(retain, nonatomic) CKDAssetTokenRequest *assetTokenRequest; // @synthesize assetTokenRequest=_assetTokenRequest;
@property(nonatomic) _Bool useEncryption; // @synthesize useEncryption=_useEncryption;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x00000000000c1fc3
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000000c0608
- (id)generateRequestOperations;	// IMP=0x00000000000bf2a3
- (_Bool)allowsAnonymousAccount;	// IMP=0x00000000000bf289
- (id)requestOperationClasses;	// IMP=0x00000000000bf21d
- (id)initWithOperation:(id)arg1 assetTokenRequest:(id)arg2 headers:(id)arg3;	// IMP=0x00000000000bf173

@end
