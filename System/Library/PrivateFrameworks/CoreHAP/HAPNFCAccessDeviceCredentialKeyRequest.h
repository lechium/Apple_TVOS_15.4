//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPNFCAccessKeyStateWrapper, HAPNFCAccessKeyTypeWrapper, NSData, NSString;

@interface HAPNFCAccessDeviceCredentialKeyRequest : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPNFCAccessKeyTypeWrapper *_type;	// 8 = 0x8
    NSData *_key;	// 16 = 0x10
    NSData *_issuerKeyIdentifier;	// 24 = 0x18
    HAPNFCAccessKeyStateWrapper *_state;	// 32 = 0x20
    NSData *_identifier;	// 40 = 0x28
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000013b8f3
- (void).cxx_destruct;	// IMP=0x000000000013b8aa
@property(retain, nonatomic) NSData *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) HAPNFCAccessKeyStateWrapper *state; // @synthesize state=_state;
@property(retain, nonatomic) NSData *issuerKeyIdentifier; // @synthesize issuerKeyIdentifier=_issuerKeyIdentifier;
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
@property(retain, nonatomic) HAPNFCAccessKeyTypeWrapper *type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013b260
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013b151
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000013aae0
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000013a47a
- (id)initWithType:(id)arg1 key:(id)arg2 issuerKeyIdentifier:(id)arg3 state:(id)arg4 identifier:(id)arg5;	// IMP=0x000000000013a378
- (id)init;	// IMP=0x000000000013a349

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
