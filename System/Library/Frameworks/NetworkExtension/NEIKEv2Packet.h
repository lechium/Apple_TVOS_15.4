//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>

@class NEIKEv2EncryptedPayload, NEIKEv2IKESPI, NSArray;

@interface NEIKEv2Packet : NSObject <NEPrettyDescription>
{
    _Bool _isFragmented;	// 8 = 0x8
    _Bool _isResponse;	// 9 = 0x9
    _Bool _isInitiator;	// 10 = 0xa
    _Bool _decrypted;	// 11 = 0xb
    _Bool _isInbound;	// 12 = 0xc
    unsigned int _fragmentNumber;	// 16 = 0x10
    unsigned int _totalFragments;	// 20 = 0x14
    int _messageID;	// 24 = 0x18
    NEIKEv2IKESPI *_initiatorSPI;	// 32 = 0x20
    NEIKEv2IKESPI *_responderSPI;	// 40 = 0x28
    NEIKEv2EncryptedPayload *_encryptedPayload;	// 48 = 0x30
    NSArray *_customPayloads;	// 56 = 0x38
    NSArray *_notifications;	// 64 = 0x40
    NSArray *_packetDatagrams;	// 72 = 0x48
    NSArray *_rawPayloads;	// 80 = 0x50
}

+ (id)createPacketFromReceivedFragments:(id)arg1 ikeSA:(id)arg2;	// IMP=0x00000000000e6c80
+ (id)createPacketFromReceivedData:(id)arg1 ikeSA:(id)arg2;	// IMP=0x00000000000e60e6
+ (unsigned long long)exchangeType;	// IMP=0x00000000000e3a3d
+ (_Bool)encryptPayloads;	// IMP=0x00000000000e3a35
+ (id)copyTypeDescription;	// IMP=0x00000000000e3a28
- (void).cxx_destruct;	// IMP=0x00000000000e802b
@property(retain) NSArray *rawPayloads; // @synthesize rawPayloads=_rawPayloads;
@property(retain) NSArray *packetDatagrams; // @synthesize packetDatagrams=_packetDatagrams;
@property _Bool isInbound; // @synthesize isInbound=_isInbound;
@property _Bool decrypted; // @synthesize decrypted=_decrypted;
@property(retain) NSArray *notifications; // @synthesize notifications=_notifications;
@property(retain) NSArray *customPayloads; // @synthesize customPayloads=_customPayloads;
@property(retain) NEIKEv2EncryptedPayload *encryptedPayload; // @synthesize encryptedPayload=_encryptedPayload;
@property _Bool isInitiator; // @synthesize isInitiator=_isInitiator;
@property _Bool isResponse; // @synthesize isResponse=_isResponse;
@property(retain) NEIKEv2IKESPI *responderSPI; // @synthesize responderSPI=_responderSPI;
@property(retain) NEIKEv2IKESPI *initiatorSPI; // @synthesize initiatorSPI=_initiatorSPI;
@property int messageID; // @synthesize messageID=_messageID;
@property unsigned int totalFragments; // @synthesize totalFragments=_totalFragments;
@property unsigned int fragmentNumber; // @synthesize fragmentNumber=_fragmentNumber;
@property _Bool isFragmented; // @synthesize isFragmented=_isFragmented;
- (void)addNotification:(unsigned long long)arg1 fromArray:(id)arg2 toPayloads:(id)arg3;	// IMP=0x00000000000e7cd4
- (_Bool)addNotification:(unsigned long long)arg1;	// IMP=0x00000000000e7cc0
- (_Bool)addNotification:(unsigned long long)arg1 data:(id)arg2;	// IMP=0x00000000000e7c6e
- (_Bool)addNotifyPayload:(id)arg1;	// IMP=0x00000000000e7b08
@property(readonly) _Bool hasErrors;
- (_Bool)hasNotification:(unsigned long long)arg1;	// IMP=0x00000000000e7883
- (id)copyNotification:(unsigned long long)arg1;	// IMP=0x00000000000e7728
- (id)copyReceivedPacketForIKESA:(id)arg1;	// IMP=0x00000000000e7667
- (id)copyPacketDatagramsForIKESA:(id)arg1;	// IMP=0x00000000000e4e6c
- (id)createPacketDatagramWithPayloadData:(id)arg1 nextPayloadType:(unsigned long long)arg2 ikeSA:(id)arg3 needsChecksum:(_Bool)arg4;	// IMP=0x00000000000e4aea
- (id)copyUnifiedData;	// IMP=0x00000000000e4a50
- (id)copyAdditionalAuthenticationDataForNextPayloadType:(unsigned long long)arg1 plainTextLen:(unsigned int)arg2 fragmentNumber:(unsigned short)arg3 totalFragments:(unsigned short)arg4 encryption:(id)arg5;	// IMP=0x00000000000e4789
- (unsigned int)encryptedFragmentSizeForIKESA:(id)arg1;	// IMP=0x00000000000e4548
- (_Bool)shouldFragmentForEncryptedPayloadSize:(unsigned int)arg1 addressFamily:(unsigned char)arg2 nonESPMarker:(_Bool)arg3;	// IMP=0x00000000000e4506
- (unsigned int)headerSizeForAddressFamily:(unsigned char)arg1 fragment:(_Bool)arg2 nonESPMarker:(_Bool)arg3;	// IMP=0x00000000000e44df
- (id)copyShortDescription;	// IMP=0x00000000000e43b5
- (id)description;	// IMP=0x00000000000e439c
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000e41b0
- (id)initResponse:(id)arg1;	// IMP=0x00000000000e3ff7
- (id)initOutbound;	// IMP=0x00000000000e3f18
- (void)filloutPayloads;	// IMP=0x00000000000e3b8d
- (void)gatherPayloads;	// IMP=0x00000000000e3add
@property(readonly) NEIKEv2IKESPI *receiverSPI;
@property(readonly) NEIKEv2IKESPI *senderSPI;

@end

