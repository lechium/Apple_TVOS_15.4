//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@protocol AKCredential, AKCredentialRequestProtocol;

@interface AKAuthorization : NSObject <NSSecureCoding>
{
    id <AKCredentialRequestProtocol> _authorizedRequest;	// 8 = 0x8
    id <AKCredential> _credential;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000475cc
- (void).cxx_destruct;	// IMP=0x0000000000047988
@property(retain, nonatomic) id <AKCredential> credential; // @synthesize credential=_credential;
@property(retain, nonatomic) id <AKCredentialRequestProtocol> authorizedRequest; // @synthesize authorizedRequest=_authorizedRequest;
- (id)description;	// IMP=0x00000000000478e6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000047682
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000475d4

@end

