//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, SecDbKeychainMetadata, SecDbKeychainSecretData;

__attribute__((visibility("hidden")))
@interface SecDbKeychainItemV7 : NSObject
{
    SecDbKeychainSecretData *_encryptedSecretData;	// 8 = 0x8
    SecDbKeychainMetadata *_encryptedMetadata;	// 16 = 0x10
    NSDictionary *_secretAttributes;	// 24 = 0x18
    NSDictionary *_metadataAttributes;	// 32 = 0x20
    NSString *_tamperCheck;	// 40 = 0x28
    int _keyclass;	// 48 = 0x30
    int _keybag;	// 52 = 0x34
    NSData *_backupUUID;	// 56 = 0x38
}

+ (id)decryptionOperation;	// IMP=0x0040000000107b85
+ (id)encryptionOperation;	// IMP=0x0010000000107b22
+ (id)keySpecifier;	// IMP=0x0010000000107af2
- (void).cxx_destruct;	// IMP=0x0020000000107a4c
@property(retain, nonatomic) NSData *backupUUID; // @synthesize backupUUID=_backupUUID;
@property(readonly, nonatomic) int keyclass; // @synthesize keyclass=_keyclass;
- (id)unwrapFromAKS:(id)arg1 accessControl:(struct __SecAccessControl *)arg2 acmContext:(id)arg3 callerAccessGroups:(id)arg4 delete:(_Bool)arg5 keyDiversify:(_Bool)arg6 error:(id *)arg7;	// IMP=0x0010000000106f31
- (id)wrapToAKS:(id)arg1 withKeybag:(int)arg2 accessControl:(struct __SecAccessControl *)arg3 acmContext:(id)arg4 error:(id *)arg5;	// IMP=0x00100000001066f0
- (id)metadataClassKeyWithKeybag:(int)arg1 allowWrites:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000010663a
- (_Bool)encryptSecretDataWithKeybag:(int)arg1 accessControl:(struct __SecAccessControl *)arg2 acmContext:(id)arg3 error:(id *)arg4;	// IMP=0x001000000010618f
- (_Bool)encryptMetadataWithKeybag:(int)arg1 error:(id *)arg2;	// IMP=0x0010000000105e81
- (id)encryptedSecretDataBlob;	// IMP=0x0010000000105e6b
- (id)encryptedMetadataBlob;	// IMP=0x0010000000105e55
- (id)encryptedBlobWithKeybag:(int)arg1 accessControl:(struct __SecAccessControl *)arg2 acmContext:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000105c70
- (_Bool)deleteWithAcmContext:(id)arg1 accessControl:(struct __SecAccessControl *)arg2 callerAccessGroups:(id)arg3 keyDiversify:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0010000000105ade
- (id)secretAttributesWithAcmContext:(id)arg1 accessControl:(struct __SecAccessControl *)arg2 callerAccessGroups:(id)arg3 keyDiversify:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0010000000105678
- (id)metadataAttributesWithError:(id *)arg1;	// IMP=0x00100000001050a1
- (id)initWithSecretAttributes:(id)arg1 metadataAttributes:(id)arg2 tamperCheck:(id)arg3 keyclass:(int)arg4;	// IMP=0x0010000000104eca
- (id)initWithData:(id)arg1 decryptionKeybag:(int)arg2 error:(id *)arg3;	// IMP=0x0010000000104b95

@end

