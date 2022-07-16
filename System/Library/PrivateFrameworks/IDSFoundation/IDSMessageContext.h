//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCertifiedDeliveryContext, IDSPseudonym, NSData, NSDate, NSDictionary, NSError, NSNumber, NSString;
@protocol OS_os_transaction;

@interface IDSMessageContext : NSObject
{
    id _boostContext;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
    IDSCertifiedDeliveryContext *_certifiedDeliveryContext;	// 24 = 0x18
    NSString *_storageGuid;	// 32 = 0x20
    NSString *_outgoingResponseIdentifier;	// 40 = 0x28
    NSString *_incomingResponseIdentifier;	// 48 = 0x30
    NSString *_serviceIdentifier;	// 56 = 0x38
    NSString *_fromID;	// 64 = 0x40
    NSString *_toID;	// 72 = 0x48
    NSString *_originalDestinationDevice;	// 80 = 0x50
    NSString *_originalGUID;	// 88 = 0x58
    NSData *_engramGroupID;	// 96 = 0x60
    NSNumber *_originalCommand;	// 104 = 0x68
    NSNumber *_serverTimestamp;	// 112 = 0x70
    NSNumber *_originalTimestamp;	// 120 = 0x78
    NSNumber *_publicIntentAction;	// 128 = 0x80
    NSError *_wpConnectionError;	// 136 = 0x88
    NSString *_senderCorrelationIdentifier;	// 144 = 0x90
    NSString *_destinationCorrelationIdentifier;	// 152 = 0x98
    NSString *_resourceTransferURLString;	// 160 = 0xa0
    NSString *_resourceTransferSandboxExtension;	// 168 = 0xa8
    NSDictionary *_resourceTransferMetadata;	// 176 = 0xb0
    NSNumber *_broadcastTime;	// 184 = 0xb8
    NSNumber *_priority;	// 192 = 0xc0
    NSNumber *_messageSequenceNumber;	// 200 = 0xc8
    NSNumber *_bytesSent;	// 208 = 0xd0
    NSNumber *_totalBytes;	// 216 = 0xd8
    NSDictionary *_targettedPseudonymDict;	// 224 = 0xe0
    double _averageLocalRTT;	// 232 = 0xe8
    long long _broadcastID;	// 240 = 0xf0
    long long _connectionType;	// 248 = 0xf8
    long long _localMessageState;	// 256 = 0x100
    long long _endpointState;	// 264 = 0x108
    struct os_unfair_lock_s _lock;	// 272 = 0x110
    _Bool _expectsPeerResponse;	// 276 = 0x114
    _Bool _wantsManualAck;	// 277 = 0x115
    _Bool _fromServerStorage;	// 278 = 0x116
    _Bool _deviceBlackedOut;	// 279 = 0x117
    _Bool _wantsAppAck;	// 280 = 0x118
    _Bool _isDirectMessage;	// 281 = 0x119
    _Bool _usedEngram;	// 282 = 0x11a
    _Bool _messageHadEncryptedData;	// 283 = 0x11b
}

- (void).cxx_destruct;	// IMP=0x0000000000085b1e
@property(readonly, nonatomic) IDSCertifiedDeliveryContext *certifiedDeliveryContext; // @synthesize certifiedDeliveryContext=_certifiedDeliveryContext;
@property(readonly, nonatomic) long long endpointState; // @synthesize endpointState=_endpointState;
@property(readonly, copy, nonatomic) NSNumber *messageSequenceNumber; // @synthesize messageSequenceNumber=_messageSequenceNumber;
@property(retain, nonatomic) id boostContext; // @synthesize boostContext=_boostContext;
@property(readonly, nonatomic) _Bool deviceBlackedOut; // @synthesize deviceBlackedOut=_deviceBlackedOut;
@property(readonly, nonatomic) long long localMessageState; // @synthesize localMessageState=_localMessageState;
@property(readonly, nonatomic) double averageLocalRTT; // @synthesize averageLocalRTT=_averageLocalRTT;
@property(nonatomic) _Bool messageHadEncryptedData; // @synthesize messageHadEncryptedData=_messageHadEncryptedData;
@property(copy, nonatomic) NSString *originalGUID; // @synthesize originalGUID=_originalGUID;
@property(readonly, nonatomic) IDSPseudonym *targettedPseudonym;
@property(nonatomic) _Bool usedEngram;
@property(nonatomic) long long connectionType;
@property(nonatomic) _Bool fromServerStorage;
@property(nonatomic) _Bool wantsManualAck;
@property(nonatomic) long long broadcastID;
@property(nonatomic) _Bool isDirectMessage;
@property(nonatomic) _Bool wantsAppAck;
@property(nonatomic) _Bool expectsPeerResponse;
@property(copy, nonatomic) NSString *resourceTransferSandboxExtension;
@property(copy, nonatomic) NSDictionary *resourceTransferMetadata;
@property(copy, nonatomic) NSString *resourceTransferURLString;
@property(readonly, copy, nonatomic) NSNumber *totalBytes;
- (void)setTotalBytes:(id)arg1;	// IMP=0x00000000000854e8
@property(readonly, copy, nonatomic) NSNumber *bytesSent;
- (void)setBytesSent:(id)arg1;	// IMP=0x000000000008545d
@property(readonly, nonatomic) NSError *wpConnectionError;
- (void)setWPConnectionError:(id)arg1;	// IMP=0x00000000000853d2
@property(copy, nonatomic) NSNumber *publicIntentAction;
@property(copy, nonatomic) NSString *destinationCorrelationIdentifier;
@property(copy, nonatomic) NSString *senderCorrelationIdentifier;
@property(copy, nonatomic) NSNumber *originalTimestamp;
@property(copy, nonatomic) NSNumber *serverTimestamp;
@property(retain, nonatomic) NSNumber *priority;
@property(retain, nonatomic) NSNumber *broadcastTime;
@property(copy, nonatomic) NSNumber *originalCommand;
@property(copy, nonatomic) NSData *engramGroupID;
- (void)setOriginalGuid:(id)arg1;	// IMP=0x0000000000084e91
@property(copy, nonatomic) NSString *originalDestinationDevice;
@property(copy, nonatomic) NSString *toID;
@property(copy, nonatomic) NSString *fromID;
@property(copy, nonatomic) NSString *storageGuid;
@property(copy, nonatomic) NSString *serviceIdentifier;
@property(copy, nonatomic) NSString *incomingResponseIdentifier;
@property(copy, nonatomic) NSString *outgoingResponseIdentifier;
@property(readonly, nonatomic) NSDate *serverReceivedTime;
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000084a16
- (id)initWithDictionary:(id)arg1 boostContext:(id)arg2;	// IMP=0x0000000000083dc6

@end

