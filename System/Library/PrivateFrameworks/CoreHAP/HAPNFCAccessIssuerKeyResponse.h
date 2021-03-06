//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPNFCAccessResponseStatusWrapper, NSData, NSString;

@interface HAPNFCAccessIssuerKeyResponse : NSObject <NSCopying, HAPTLVProtocol>
{
    NSData *_identifier;	// 8 = 0x8
    HAPNFCAccessResponseStatusWrapper *_statusCode;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000013c4f7
- (void).cxx_destruct;	// IMP=0x000000000013c4cf
@property(retain, nonatomic) HAPNFCAccessResponseStatusWrapper *statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSData *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013c1e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013c153
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000013be39
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000013ba66
- (id)initWithIdentifier:(id)arg1 statusCode:(id)arg2;	// IMP=0x000000000013b9cd
- (id)init;	// IMP=0x000000000013b99e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

