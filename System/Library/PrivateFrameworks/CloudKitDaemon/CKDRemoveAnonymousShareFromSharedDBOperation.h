//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface CKDRemoveAnonymousShareFromSharedDBOperation
{
    NSDictionary *_encryptedAnonymousSharesToRemove;	// 8 = 0x8
    CDUnknownBlockType _anonymousShareRemovedBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000011b761
@property(copy, nonatomic) CDUnknownBlockType anonymousShareRemovedBlock; // @synthesize anonymousShareRemovedBlock=_anonymousShareRemovedBlock;
@property(retain, nonatomic) NSDictionary *encryptedAnonymousSharesToRemove; // @synthesize encryptedAnonymousSharesToRemove=_encryptedAnonymousSharesToRemove;
- (void)main;	// IMP=0x000000000011b706
- (void)_removeAnonymousShareFromSharedDB;	// IMP=0x000000000011b21c
- (int)operationType;	// IMP=0x000000000011b211
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x000000000011b1c1
- (_Bool)makeStateTransition;	// IMP=0x000000000011b11c
- (id)activityCreate;	// IMP=0x000000000011b0f3
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000011b01f

// Remaining properties
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

