//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPhoneUser, NSData;

@interface IDSServerAuthenticatePhoneRequest : NSObject
{
    IDSPhoneUser *_user;	// 8 = 0x8
    NSData *_phoneSignature;	// 16 = 0x10
    NSData *_certificateSigningRequest;	// 24 = 0x18
    NSData *_pushToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002bc20
@property(readonly, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(readonly, nonatomic) NSData *certificateSigningRequest; // @synthesize certificateSigningRequest=_certificateSigningRequest;
@property(readonly, nonatomic) NSData *phoneSignature; // @synthesize phoneSignature=_phoneSignature;
@property(readonly, nonatomic) IDSPhoneUser *user; // @synthesize user=_user;
- (id)initWithUser:(id)arg1 phoneSignature:(id)arg2 certificateSigningRequest:(id)arg3 pushToken:(id)arg4;	// IMP=0x001000000002ba40

@end

