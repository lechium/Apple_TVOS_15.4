//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@interface NEIKEv2AuthenticationProtocol : NSObject <NSCopying>
{
    unsigned long long _method;	// 8 = 0x8
    unsigned long long _digitalSignatureAlgorithm;	// 16 = 0x10
}

@property(nonatomic) unsigned long long digitalSignatureAlgorithm; // @synthesize digitalSignatureAlgorithm=_digitalSignatureAlgorithm;
@property(nonatomic) unsigned long long method; // @synthesize method=_method;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008b4c7
- (unsigned long long)hash;	// IMP=0x000000000008b481
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008b3af
@property(readonly, nonatomic) _Bool isDigitalSignature;
@property(readonly, nonatomic) _Bool isCertificate;
- (id)description;	// IMP=0x000000000008b2cb
- (id)initWithDigitalSignature:(unsigned long long)arg1;	// IMP=0x000000000008b213
- (id)initWithMethod:(unsigned long long)arg1;	// IMP=0x000000000008b125

@end
