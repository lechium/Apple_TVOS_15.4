//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, NSURL, PKAccountVirtualCardEncryptionFields;

@interface PKAccountWebServiceVirtualCardManageRequest <NSSecureCoding>
{
    PKAccountVirtualCardEncryptionFields *_encryptionFields;	// 8 = 0x8
    long long _action;	// 16 = 0x10
    NSString *_accountIdentifier;	// 24 = 0x18
    NSURL *_baseURL;	// 32 = 0x20
    NSString *_virtualCardIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000091afc
@property(copy, nonatomic) NSString *virtualCardIdentifier; // @synthesize virtualCardIdentifier=_virtualCardIdentifier;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void)setAction:(long long)arg1 withQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000091914
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;	// IMP=0x00000000000913ca

@end

