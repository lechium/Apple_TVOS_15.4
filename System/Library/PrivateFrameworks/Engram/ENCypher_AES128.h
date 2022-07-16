//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Engram/ENCypher-Protocol.h>

@class NSData, NSString;

@interface ENCypher_AES128 : NSObject <ENCypher>
{
    NSData *_key;	// 8 = 0x8
}

+ (id)_decryptData:(id)arg1 withKey:(id)arg2;	// IMP=0x0000000000010c11
+ (id)_encryptData:(id)arg1 withKey:(id)arg2;	// IMP=0x0000000000010a8b
+ (id)_randomDataWithLength:(long long)arg1;	// IMP=0x0000000000010a05
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000010511
- (void).cxx_destruct;	// IMP=0x0000000000010db5
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
- (id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000010893
- (id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000001062c
@property(readonly, nonatomic) NSString *identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000105a6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010519
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000010420
- (id)initWithKey:(id)arg1;	// IMP=0x00000000000103b5
- (id)initWithRandomKey;	// IMP=0x0000000000010355

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
