//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NEIKEv2IKESAPayload, NEIKEv2KeyExchangePayload, NEIKEv2NoncePayload, NEIKEv2NotifyPayload, NSArray;

@interface NEIKEv2IKESAInitPacket
{
    NEIKEv2NotifyPayload *_cookie;	// 88 = 0x58
    NEIKEv2IKESAPayload *_sa;	// 96 = 0x60
    NEIKEv2KeyExchangePayload *_ke;	// 104 = 0x68
    NEIKEv2NoncePayload *_nonce;	// 112 = 0x70
    NSArray *_vendorIDs;	// 120 = 0x78
}

+ (_Bool)encryptPayloads;	// IMP=0x00000000000e80a2
+ (unsigned long long)exchangeType;	// IMP=0x00000000000e8097
+ (id)copyTypeDescription;	// IMP=0x00000000000e808a
+ (id)createIKESAInitResponse:(id)arg1 errorCode:(unsigned long long)arg2 errorData:(id)arg3;	// IMP=0x00000000000cf75b
+ (id)createIKESAInitResponse:(id)arg1 ikeSA:(id)arg2;	// IMP=0x00000000000ce86f
+ (id)createIKESAInitForInitiatorIKESA:(id)arg1;	// IMP=0x00000000000cd548
- (void).cxx_destruct;	// IMP=0x00000000000e8944
@property(retain) NSArray *vendorIDs; // @synthesize vendorIDs=_vendorIDs;
@property(retain) NEIKEv2NoncePayload *nonce; // @synthesize nonce=_nonce;
@property(retain) NEIKEv2KeyExchangePayload *ke; // @synthesize ke=_ke;
@property(retain) NEIKEv2IKESAPayload *sa; // @synthesize sa=_sa;
@property(retain) NEIKEv2NotifyPayload *cookie; // @synthesize cookie=_cookie;
- (void)filloutPayloads;	// IMP=0x00000000000e8308
- (void)gatherPayloads;	// IMP=0x00000000000e80aa
- (_Bool)validateSAInitAsResponder:(id)arg1 sendInvalidKE:(_Bool *)arg2;	// IMP=0x00000000000d0f51
- (_Bool)validateSAInitAsInitiator:(id)arg1;	// IMP=0x00000000000cf89c

@end

