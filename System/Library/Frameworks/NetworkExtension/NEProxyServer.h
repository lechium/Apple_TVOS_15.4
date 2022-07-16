//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSString;

@interface NEProxyServer : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    _Bool _authenticationRequired;	// 8 = 0x8
    NSString *_address;	// 16 = 0x10
    long long _port;	// 24 = 0x18
    NSString *_username;	// 32 = 0x20
    NSString *_password;	// 40 = 0x28
    long long _type;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018064a
- (void).cxx_destruct;	// IMP=0x0000000000181359
@property long long type; // @synthesize type=_type;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *username; // @synthesize username=_username;
@property _Bool authenticationRequired; // @synthesize authenticationRequired=_authenticationRequired;
@property(readonly) long long port; // @synthesize port=_port;
@property(readonly) NSString *address; // @synthesize address=_address;
- (id)copyPassword;	// IMP=0x000000000018121e
- (void)removeFromKeychain;	// IMP=0x0000000000181154
- (_Bool)needToUpdateKeychain;	// IMP=0x00000000001810d4
- (void)syncWithKeychain;	// IMP=0x0000000000180e8b
- (id)copyProtectionSpace;	// IMP=0x0000000000180d54
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000180b2d
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x0000000000180aba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001809a8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000180857
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001806f8
- (id)initWithType:(long long)arg1 address:(id)arg2 port:(long long)arg3;	// IMP=0x000000000018066f
- (id)initWithAddress:(id)arg1 port:(long long)arg2;	// IMP=0x0000000000180652

@end
