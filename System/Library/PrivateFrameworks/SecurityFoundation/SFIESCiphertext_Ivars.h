//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, _SFECPublicKey;

@interface SFIESCiphertext_Ivars : NSObject
{
    _SFECPublicKey *ephemeralSenderPublicKey;	// 8 = 0x8
    NSData *authenticationCode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000105b9

@end

