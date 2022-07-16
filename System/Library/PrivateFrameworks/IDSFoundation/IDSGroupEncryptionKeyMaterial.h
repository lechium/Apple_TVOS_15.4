//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>

@class NSData, NSDate, NSMutableSet, NSString, NSUUID;

@interface IDSGroupEncryptionKeyMaterial : NSObject <NSCopying>
{
    NSUUID *_keyIndex;	// 8 = 0x8
    NSData *_keySalt;	// 16 = 0x10
    NSData *_keyMaterial;	// 24 = 0x18
    NSDate *_createdAt;	// 32 = 0x20
    _Bool _isSentToClient;	// 40 = 0x28
    _Bool _isGeneratedLocally;	// 41 = 0x29
    NSMutableSet *_devicesToBeSent;	// 48 = 0x30
    NSString *_groupID;	// 56 = 0x38
    unsigned int _generationCounter;	// 64 = 0x40
}

+ (void)setLocallyGeneratedKeysCounter:(unsigned int)arg1;	// IMP=0x000000000007c4cd
+ (unsigned int)locallyGeneratedKeysCounter;	// IMP=0x000000000007c4c1
- (void).cxx_destruct;	// IMP=0x000000000007ca32
@property(readonly, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(nonatomic) unsigned int generationCounter; // @synthesize generationCounter=_generationCounter;
@property(readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, nonatomic) NSData *keyMaterial; // @synthesize keyMaterial=_keyMaterial;
@property(readonly, nonatomic) NSData *keySalt; // @synthesize keySalt=_keySalt;
@property(readonly, nonatomic) NSUUID *keyIndex; // @synthesize keyIndex=_keyIndex;
@property(nonatomic) _Bool isGeneratedLocally; // @synthesize isGeneratedLocally=_isGeneratedLocally;
@property(nonatomic) _Bool isSentToClient; // @synthesize isSentToClient=_isSentToClient;
- (id)dictionaryRepresentation;	// IMP=0x000000000007c870
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007c820
- (id)debugDescription;	// IMP=0x000000000007c6d0
- (id)description;	// IMP=0x000000000007c5f4
- (unsigned long long)hash;	// IMP=0x000000000007c5b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007c557
- (_Bool)isEqualToRealTimeEncryptionKeyMaterial:(id)arg1;	// IMP=0x000000000007c4d9
- (void)removeDeviceFromSentToDevice:(id)arg1;	// IMP=0x000000000007c4ab
- (void)sentToDevice:(id)arg1;	// IMP=0x000000000007c495
- (void)changeCreatedAt:(id)arg1;	// IMP=0x000000000007c334
- (id)initWithKeyMaterial:(id)arg1 keySalt:(id)arg2 keyIndex:(id)arg3 groupID:(id)arg4 isGeneratedLocally:(_Bool)arg5 createdAt:(id)arg6 generationCounter:(unsigned int)arg7;	// IMP=0x000000000007c1f7
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000007c05f
- (id)initWithKeyMaterial:(id)arg1 keySalt:(id)arg2 keyIndex:(id)arg3 groupID:(id)arg4 generationCounter:(unsigned int)arg5;	// IMP=0x000000000007bf74
- (id)initWithKeyMaterial:(id)arg1 keySalt:(id)arg2 keyIndex:(id)arg3 groupID:(id)arg4;	// IMP=0x000000000007be89
- (id)initWithIndex:(id)arg1 groupID:(id)arg2;	// IMP=0x000000000007ba35

@end
