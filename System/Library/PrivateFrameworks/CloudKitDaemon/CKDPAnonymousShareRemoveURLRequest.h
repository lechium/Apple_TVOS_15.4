//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary;

@interface CKDPAnonymousShareRemoveURLRequest
{
    CDUnknownBlockType _anonymousShareRemovedBlock;	// 8 = 0x8
    NSDictionary *_encryptedAnonymousSharesToRemove;	// 16 = 0x10
    NSMutableDictionary *_encryptedAnonymousShareHashToRemoveByRequestID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001ec8af
@property(retain, nonatomic) NSMutableDictionary *encryptedAnonymousShareHashToRemoveByRequestID; // @synthesize encryptedAnonymousShareHashToRemoveByRequestID=_encryptedAnonymousShareHashToRemoveByRequestID;
@property(retain, nonatomic) NSDictionary *encryptedAnonymousSharesToRemove; // @synthesize encryptedAnonymousSharesToRemove=_encryptedAnonymousSharesToRemove;
@property(copy, nonatomic) CDUnknownBlockType anonymousShareRemovedBlock; // @synthesize anonymousShareRemovedBlock=_anonymousShareRemovedBlock;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000001ec705
- (id)generateRequestOperations;	// IMP=0x00000000001ec306
- (id)requestOperationClasses;	// IMP=0x00000000001ec29a
- (id)initWithOperation:(id)arg1 encryptedAnonymousSharesToRemove:(id)arg2;	// IMP=0x00000000001ec201
- (_Bool)requiresCKAnonymousUserIDs;	// IMP=0x00000000001ec1f9

@end

