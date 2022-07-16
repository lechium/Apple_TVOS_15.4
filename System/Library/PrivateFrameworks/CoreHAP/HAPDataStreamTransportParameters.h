//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, NSString;

@interface HAPDataStreamTransportParameters : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPTLVUnsignedNumberValue *_tcpListeningPort;	// 8 = 0x8
    HAPTLVUnsignedNumberValue *_sessionIdentifier;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008e549
- (void).cxx_destruct;	// IMP=0x000000000008e521
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *tcpListeningPort; // @synthesize tcpListeningPort=_tcpListeningPort;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008e233
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008e1a5
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000008ded5
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008db91
- (id)initWithTcpListeningPort:(id)arg1 sessionIdentifier:(id)arg2;	// IMP=0x000000000008daf8
- (id)init;	// IMP=0x000000000008dac9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

