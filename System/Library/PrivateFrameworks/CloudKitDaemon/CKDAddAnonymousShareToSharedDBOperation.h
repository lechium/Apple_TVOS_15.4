//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface CKDAddAnonymousShareToSharedDBOperation
{
    NSDictionary *_encryptedAnonymousSharesToAdd;	// 8 = 0x8
    CDUnknownBlockType _anonymousShareSavedBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002f196b
@property(copy, nonatomic) CDUnknownBlockType anonymousShareSavedBlock; // @synthesize anonymousShareSavedBlock=_anonymousShareSavedBlock;
@property(retain, nonatomic) NSDictionary *encryptedAnonymousSharesToAdd; // @synthesize encryptedAnonymousSharesToAdd=_encryptedAnonymousSharesToAdd;
- (void)main;	// IMP=0x00000000002f1910
- (void)_addAnonymousSharesToSharedDB;	// IMP=0x00000000002f1426
- (int)operationType;	// IMP=0x00000000002f141b
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x00000000002f13cb
- (_Bool)makeStateTransition;	// IMP=0x00000000002f1326
- (id)activityCreate;	// IMP=0x00000000002f12fd
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000002f1229

// Remaining properties
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

