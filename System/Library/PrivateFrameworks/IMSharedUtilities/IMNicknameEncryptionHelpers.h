//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMNicknameEncryptionHelpers : NSObject
{
}

+ (id)_randomBytesWithLength:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000000c8f2
+ (id)_hmacForData:(id)arg1 key:(id)arg2;	// IMP=0x000000000000c835
+ (id)_tagForData:(id)arg1 key:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000c74b
+ (id)_fieldTagForFieldName:(id)arg1 cipherData:(id)arg2 IV:(id)arg3 fieldTaggingKey:(id)arg4 error:(id *)arg5;	// IMP=0x000000000000c683
+ (id)_performOperation:(unsigned int)arg1 onData:(id)arg2 withFieldEncryptionKey:(id)arg3 iv:(id)arg4 error:(id *)arg5;	// IMP=0x000000000000c29b
+ (id)_decryptCipherField:(id)arg1 withFieldEncryptionKey:(id)arg2 fieldTaggingKey:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000c0eb
+ (id)_decryptCipherFields:(id)arg1 withFieldEncryptionKey:(id)arg2 fieldTaggingKey:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000bef9
+ (id)_encryptPlainField:(id)arg1 withFieldEncryptionKey:(id)arg2 fieldTaggingKey:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000bda4
+ (id)_recordTagForCipherFields:(id)arg1 recordTaggingKey:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000bb57
+ (id)_encryptPlainFields:(id)arg1 withFieldEncryptionKey:(id)arg2 fieldTaggingKey:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000b981
+ (id)_decryptAndVerifyCipherFields:(id)arg1 withPreKey:(id)arg2 recordTagToVerify:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000b7ab
+ (id)_encryptAndTagPlainFields:(id)arg1 withPreKey:(id)arg2 returningRecordTag:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000000b704
+ (id)decryptAndVerifyCipherFields:(id)arg1 withPreKey:(id)arg2 recordTagToVerify:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000b300
+ (id)encryptAndTagPlainFields:(id)arg1 withPreKey:(id)arg2 returningRecordTag:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000000afa4

@end

