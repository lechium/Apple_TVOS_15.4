//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface SFSharablePassword : NSObject <NSSecureCoding>
{
    NSString *_username;	// 8 = 0x8
    NSString *_password;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSString *_highLevelDomain;	// 32 = 0x20
    NSURL *_otpAuthURL;	// 40 = 0x28
    NSArray *_protectionSpaces;	// 48 = 0x30
}

+ (id)_decryptedDataForEncryptedData:(id)arg1 encryptionKeyReference:(id)arg2;	// IMP=0x000000000000c243
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000ba9c
+ (id)sharablePasswordFromURL:(id)arg1;	// IMP=0x000000000000b02a
+ (id)sharablePasswordFromData:(id)arg1;	// IMP=0x000000000000af64
+ (id)sharablePasswordFromEncryptedData:(id)arg1 encryptionKeyReference:(id)arg2;	// IMP=0x000000000000af0d
- (void).cxx_destruct;	// IMP=0x000000000000c42c
@property(readonly, copy, nonatomic) NSArray *protectionSpaces; // @synthesize protectionSpaces=_protectionSpaces;
@property(readonly, copy, nonatomic) NSURL *otpAuthURL; // @synthesize otpAuthURL=_otpAuthURL;
@property(readonly, copy, nonatomic) NSString *highLevelDomain; // @synthesize highLevelDomain=_highLevelDomain;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)_encryptionInformationWithNewKey;	// IMP=0x000000000000bdb2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000bcf5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000baa4
- (unsigned long long)hash;	// IMP=0x000000000000ba0d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b7e5
- (id)urlRepresentationForAirDrop;	// IMP=0x000000000000b5fb
@property(readonly, nonatomic) NSURL *passwordManagerURL;
- (id)initWithSavedPassword:(id)arg1;	// IMP=0x000000000000ad24
- (id)initWithUsername:(id)arg1 password:(id)arg2 displayName:(id)arg3 highLevelDomain:(id)arg4 protectionSpaces:(id)arg5;	// IMP=0x000000000000abe2

@end

