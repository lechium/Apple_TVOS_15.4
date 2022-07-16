//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString, SDActivityEncryptionKey;

__attribute__((visibility("hidden")))
@interface SDActivityEncryptionManager : NSObject
{
    NSMutableDictionary *_deviceIdentifierToDecryptionKey;	// 8 = 0x8
    SDActivityEncryptionKey *_encryptionKey;	// 16 = 0x10
    NSData *_wrappingKey;	// 24 = 0x18
    _Bool _shouldRefreshWrappingKey;	// 32 = 0x20
}

+ (id)sharedEncryptionManager;	// IMP=0x00400000000f798c
- (void).cxx_destruct;	// IMP=0x00200000000fa2b5
- (id)baseDictDecryptionKeyForDeviceIdentifier:(id)arg1;	// IMP=0x00100000000fa15e
- (id)baseDictEncryptionKey;	// IMP=0x00100000000fa07b
- (id)baseDictWrappingKey;	// IMP=0x00100000000f9f98
- (id)baseDict;	// IMP=0x00100000000f9f28
- (_Bool)saveDecryptionKeyDataRepresentation:(id)arg1 forDeviceIdentifier:(id)arg2;	// IMP=0x00100000000f9ea8
- (id)loadDecryptionKeyDataRepresentationForDeviceIdentifier:(id)arg1;	// IMP=0x00100000000f9e49
- (_Bool)saveEncryptionKeyDataRepresentation:(id)arg1;	// IMP=0x00100000000f9dda
- (id)loadEncryptionKeyDataRepresentation;	// IMP=0x00100000000f9d7b
- (_Bool)saveKeyDataRepresentation:(id)arg1 withBaseDict:(id)arg2;	// IMP=0x00100000000f9ab7
- (id)loadKeyDataRepresentationWithBaseDict:(id)arg1;	// IMP=0x00100000000f9a08
- (void)testWrappingKeychainItem;	// IMP=0x00100000000f9a02
- (id)loadWrappingKeyData;	// IMP=0x00100000000f98a2
- (id)allKeys;	// IMP=0x00100000000f93b7
- (_Bool)deleteAllEncryptionAndDecryptionKeys;	// IMP=0x00100000000f9263
- (id)newDecryptionKeyFromDataRepresentation:(id)arg1;	// IMP=0x00100000000f8df5
- (id)unwrappedDataRepresentationForKey:(id)arg1;	// IMP=0x00100000000f8ced
@property(readonly, nonatomic) NSData *dataRepresentationForCurrentEncryptionKey;
- (id)cachedDecryptionKeyForDeviceIdentifier:(id)arg1;	// IMP=0x00100000000f8901
- (id)decryptionKeyForDeviceIdentifier:(id)arg1;	// IMP=0x00100000000f8810
- (void)setDecryptionKey:(id)arg1 forDeviceIdentifier:(id)arg2;	// IMP=0x00100000000f8610
- (void)getTagAndCounterWhileEncryptingBytesInPlace:(unsigned char [10])arg1 forAdvertisementWithVersion:(unsigned char)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f838e
- (void)bumpEncryptionKeyCounterValue;	// IMP=0x00100000000f81cb
@property(readonly, nonatomic) SDActivityEncryptionKey *encryptionKey;
- (void)generateNewEncryptionKey;	// IMP=0x00100000000f7df0
- (void)resetStateRequested:(id)arg1;	// IMP=0x00100000000f7dde
- (void)removeObservers;	// IMP=0x00100000000f7d8b
- (void)addObservers;	// IMP=0x00100000000f7d24
@property(readonly) NSString *state;
- (void)dealloc;	// IMP=0x00100000000f7a97
- (id)init;	// IMP=0x00100000000f7a2d

@end
