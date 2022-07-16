//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary;

@interface CKDPAnonymousShareAddURLRequest
{
    CDUnknownBlockType _anonymousShareSavedBlock;	// 8 = 0x8
    NSDictionary *_encryptedAnonymousSharesToAdd;	// 16 = 0x10
    NSMutableDictionary *_encryptedAnonymousShareHashToAddByRequestID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002a03a1
@property(retain, nonatomic) NSMutableDictionary *encryptedAnonymousShareHashToAddByRequestID; // @synthesize encryptedAnonymousShareHashToAddByRequestID=_encryptedAnonymousShareHashToAddByRequestID;
@property(retain, nonatomic) NSDictionary *encryptedAnonymousSharesToAdd; // @synthesize encryptedAnonymousSharesToAdd=_encryptedAnonymousSharesToAdd;
@property(copy, nonatomic) CDUnknownBlockType anonymousShareSavedBlock; // @synthesize anonymousShareSavedBlock=_anonymousShareSavedBlock;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000002a01f7
- (id)generateRequestOperations;	// IMP=0x000000000029fdf8
- (id)requestOperationClasses;	// IMP=0x000000000029fd8c
- (id)initWithOperation:(id)arg1 encryptedAnonymousSharesToAdd:(id)arg2;	// IMP=0x000000000029fcf3
- (_Bool)requiresCKAnonymousUserIDs;	// IMP=0x000000000029fceb

@end

