//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSMutableString;

@interface __CFN_SocksHandshakev5
{
    _Bool _done;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    int _numberOfAuthVersionSupported;	// 24 = 0x18
    NSMutableSet *_authMethods;	// 32 = 0x20
    unsigned char _addressType;	// 40 = 0x28
    int _destinationLen;	// 44 = 0x2c
    NSMutableString *_domainName;	// 48 = 0x30
    unsigned char ipaddr[16];	// 56 = 0x38
    int _portLen;	// 72 = 0x48
    unsigned short _destPort;	// 76 = 0x4c
    int _usernameLen;	// 80 = 0x50
    NSMutableString *_username;	// 88 = 0x58
    int _passwordLen;	// 96 = 0x60
    NSMutableString *_password;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000015c0b0
- (id)finish:(int)arg1;	// IMP=0x000000000015bee8
- (_Bool)parse:(const char *)arg1 len:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000015b560

@end

