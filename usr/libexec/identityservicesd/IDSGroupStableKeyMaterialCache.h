//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSGroupEncryptionKeyMaterial, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface IDSGroupStableKeyMaterialCache : NSObject
{
    IDSGroupEncryptionKeyMaterial *_currentLocalStableKeyMaterial;	// 8 = 0x8
    IDSGroupEncryptionKeyMaterial *_previousLocalStableKeyMaterial;	// 16 = 0x10
    NSMutableDictionary *_pushTokenToSKMsMapping;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSMutableSet *_stableKeyMaterials;	// 40 = 0x28
    NSSet *_stableKeyIdentifiersSentToClient;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000002c12c0
@property(copy, nonatomic) NSSet *stableKeyIdentifiersSentToClient; // @synthesize stableKeyIdentifiersSentToClient=_stableKeyIdentifiersSentToClient;
@property(copy, nonatomic) NSMutableSet *stableKeyMaterials; // @synthesize stableKeyMaterials=_stableKeyMaterials;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableDictionary *pushTokenToSKMsMapping; // @synthesize pushTokenToSKMsMapping=_pushTokenToSKMsMapping;
@property(retain, nonatomic) IDSGroupEncryptionKeyMaterial *previousLocalStableKeyMaterial; // @synthesize previousLocalStableKeyMaterial=_previousLocalStableKeyMaterial;
@property(retain, nonatomic) IDSGroupEncryptionKeyMaterial *currentLocalStableKeyMaterial; // @synthesize currentLocalStableKeyMaterial=_currentLocalStableKeyMaterial;
- (id)debugDescription;	// IMP=0x00100000002c0fd0
- (id)description;	// IMP=0x00100000002c0e80
- (id)cachedStableKeyMaterialCollection;	// IMP=0x00100000002c0ca0
- (id)updateGroupStableKeyMaterialCacheForPushToken:(id)arg1 SKM:(id)arg2;	// IMP=0x00100000002c01d0
- (void)resetRemoteStableKeyMaterialCache;	// IMP=0x00100000002c00b0
- (void)resetSKMCache;	// IMP=0x00100000002bff40
- (id)getStableKeyIdentifiersSentToClient;	// IMP=0x00100000002bff10
- (void)resetSKMSentToClientStatus;	// IMP=0x00100000002bfee0
- (_Bool)hasCachedStableKeyIdentifier:(id)arg1;	// IMP=0x00100000002bfb80
- (_Bool)hasClientReceivedStableKeyIdentifier:(id)arg1;	// IMP=0x00100000002bfab0
- (void)noteClientReceiptOfStableKeyIdentifier:(id)arg1;	// IMP=0x00100000002bfa00
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00100000002bf820

@end
