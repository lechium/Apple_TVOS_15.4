//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NEIKEv2SPI, NSData;

@interface NEIKEv2NotifyPayload
{
    unsigned long long _notifyType;	// 24 = 0x18
    NSData *_data;	// 32 = 0x20
    NEIKEv2SPI *_spi;	// 40 = 0x28
}

+ (id)createNotifyPayloadType:(unsigned long long)arg1 spi:(id)arg2;	// IMP=0x00000000000dedc3
+ (id)createNotifyPayloadType:(unsigned long long)arg1 data:(id)arg2;	// IMP=0x00000000000ded5b
+ (id)createNotifyPayloadType:(unsigned long long)arg1;	// IMP=0x00000000000ded27
+ (id)copyTypeDescription;	// IMP=0x00000000000ded1a
- (void).cxx_destruct;	// IMP=0x00000000000e0671
@property(retain) NEIKEv2SPI *spi; // @synthesize spi=_spi;
@property(retain) NSData *data; // @synthesize data=_data;
@property unsigned long long notifyType; // @synthesize notifyType=_notifyType;
- (id)copyAdditionalAddress;	// IMP=0x00000000000e03fe
- (id)copyServerRedirectEndpoint;	// IMP=0x00000000000e008b
- (id)copyServerRedirectNonce;	// IMP=0x00000000000dfe41
- (_Bool)parsePayloadData;	// IMP=0x00000000000df8c5
- (_Bool)generatePayloadData;	// IMP=0x00000000000df5fa
- (id)copyError;	// IMP=0x00000000000df4e7
@property(readonly) _Bool isPrivateError;
@property(readonly) _Bool isError;
- (_Bool)hasRequiredFields;	// IMP=0x00000000000df451
- (id)description;	// IMP=0x00000000000df438
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000df2c0
- (id)copyTypeDescription;	// IMP=0x00000000000dee70
- (unsigned long long)type;	// IMP=0x00000000000dee65

@end
