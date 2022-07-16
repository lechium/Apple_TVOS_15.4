//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString, NSURL;
@protocol IDSBaseMessageSigningSession;

@interface IDSBaseMessage : NSObject <NSCopying>
{
    NSDictionary *_cachedBody;	// 8 = 0x8
    NSString *_topic;	// 16 = 0x10
    NSDictionary *_userInfo;	// 24 = 0x18
    NSData *_serviceData;	// 32 = 0x20
    NSDictionary *_clientInfo;	// 40 = 0x28
    NSDate *_creationDate;	// 48 = 0x30
    NSDictionary *_responseAlert;	// 56 = 0x38
    NSString *_dsAuthID;	// 64 = 0x40
    NSString *_dataUsageBundleIdentifier;	// 72 = 0x48
    id _context;	// 80 = 0x50
    int _timeoutRetries;	// 88 = 0x58
    _Bool _usingOutgoingPush;	// 92 = 0x5c
    _Bool _wantsResponse;	// 93 = 0x5d
    _Bool _wantsMultipleResponses;	// 94 = 0x5e
    _Bool _wantsIntegerUniqueIDs;	// 95 = 0x5f
    _Bool _wantsBinaryPush;	// 96 = 0x60
    _Bool _forceCellular;	// 97 = 0x61
    _Bool _highPriority;	// 98 = 0x62
    _Bool _hasReceivedPushAck;	// 99 = 0x63
    _Bool _hasAttemptedAPSDelivery;	// 100 = 0x64
    _Bool _httpDoNotDecodeData;	// 101 = 0x65
    _Bool _ignoreMaxRetryCount;	// 102 = 0x66
    CDUnknownBlockType _completionBlock;	// 104 = 0x68
    CDUnknownBlockType _deliveryAcknowledgementBlock;	// 112 = 0x70
    double _timeout;	// 120 = 0x78
    double _timeSent;	// 128 = 0x80
    unsigned long long _uniqueID;	// 136 = 0x88
    NSNumber *_retryCount;	// 144 = 0x90
    long long _importanceLevel;	// 152 = 0x98
    long long _deliveryMechanism;	// 160 = 0xa0
    id <IDSBaseMessageSigningSession> _signingSession;	// 168 = 0xa8
    NSString *_service;	// 176 = 0xb0
    NSString *_subService;	// 184 = 0xb8
    NSString *_underlyingService;	// 192 = 0xc0
    NSURL *_URLOverride;	// 200 = 0xc8
    unsigned long long _sentByteCount;	// 208 = 0xd0
    unsigned long long _receivedByteCount;	// 216 = 0xd8
    NSNumber *_pushAckTimestamp;	// 224 = 0xe0
    _Bool _isMultipleAuthCertCapable;	// 232 = 0xe8
    NSDictionary *_responseAlertInfo;	// 240 = 0xf0
    NSNumber *_originalTimestamp;	// 248 = 0xf8
    NSDate *_requestStart;	// 256 = 0x100
    NSDate *_requestEnd;	// 264 = 0x108
    NSDate *_responseReceived;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00000000000f2e42
@property(retain, nonatomic) NSDate *responseReceived; // @synthesize responseReceived=_responseReceived;
@property(retain, nonatomic) NSDate *requestEnd; // @synthesize requestEnd=_requestEnd;
@property(retain, nonatomic) NSDate *requestStart; // @synthesize requestStart=_requestStart;
@property(nonatomic) unsigned long long receivedByteCount; // @synthesize receivedByteCount=_receivedByteCount;
@property(nonatomic) unsigned long long sentByteCount; // @synthesize sentByteCount=_sentByteCount;
@property(retain) id context; // @synthesize context=_context;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSNumber *originalTimestamp; // @synthesize originalTimestamp=_originalTimestamp;
@property(copy) NSURL *URLOverride; // @synthesize URLOverride=_URLOverride;
@property(copy, nonatomic) NSNumber *retryCount; // @synthesize retryCount=_retryCount;
@property(copy) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(copy) NSData *serviceData; // @synthesize serviceData=_serviceData;
@property(copy, nonatomic, setter=setDSAuthID:) NSString *dsAuthID; // @synthesize dsAuthID=_dsAuthID;
@property(retain, nonatomic) id <IDSBaseMessageSigningSession> signingSession; // @synthesize signingSession=_signingSession;
@property(nonatomic) _Bool isMultipleAuthCertCapable; // @synthesize isMultipleAuthCertCapable=_isMultipleAuthCertCapable;
@property _Bool ignoreMaxRetryCount; // @synthesize ignoreMaxRetryCount=_ignoreMaxRetryCount;
@property(copy) NSDictionary *responseAlertInfo; // @synthesize responseAlertInfo=_responseAlertInfo;
@property int timeoutRetries; // @synthesize timeoutRetries=_timeoutRetries;
@property _Bool httpDoNotDecodeData; // @synthesize httpDoNotDecodeData=_httpDoNotDecodeData;
@property _Bool wantsMultipleResponses; // @synthesize wantsMultipleResponses=_wantsMultipleResponses;
@property _Bool wantsResponse; // @synthesize wantsResponse=_wantsResponse;
@property _Bool wantsIntegerUniqueIDs; // @synthesize wantsIntegerUniqueIDs=_wantsIntegerUniqueIDs;
@property _Bool wantsBinaryPush; // @synthesize wantsBinaryPush=_wantsBinaryPush;
@property _Bool highPriority; // @synthesize highPriority=_highPriority;
@property _Bool forceCellular; // @synthesize forceCellular=_forceCellular;
@property(copy) NSString *underlyingService; // @synthesize underlyingService=_underlyingService;
@property(copy) NSString *subService; // @synthesize subService=_subService;
@property(copy) NSString *service; // @synthesize service=_service;
@property long long deliveryMechanism; // @synthesize deliveryMechanism=_deliveryMechanism;
@property long long importanceLevel; // @synthesize importanceLevel=_importanceLevel;
@property(retain) NSNumber *pushAckTimestamp; // @synthesize pushAckTimestamp=_pushAckTimestamp;
@property _Bool hasAttemptedAPSDelivery; // @synthesize hasAttemptedAPSDelivery=_hasAttemptedAPSDelivery;
@property _Bool hasReceivedPushAck; // @synthesize hasReceivedPushAck=_hasReceivedPushAck;
@property(retain) NSString *topic; // @synthesize topic=_topic;
@property(copy) CDUnknownBlockType deliveryAcknowledgementBlock; // @synthesize deliveryAcknowledgementBlock=_deliveryAcknowledgementBlock;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property double timeSent; // @synthesize timeSent=_timeSent;
@property double timeout; // @synthesize timeout=_timeout;
@property unsigned long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, setter=_setCachedBody:) NSDictionary *_cachedBody; // @synthesize _cachedBody;
@property(setter=_setUsingOutgoingPush:) _Bool _usingOutgoingPush; // @synthesize _usingOutgoingPush;
- (void)logFailureInfo;	// IMP=0x00000000000f29bb
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00000000000f2962
- (void)handleResponseStatus:(unsigned long long)arg1;	// IMP=0x00000000000f295c
- (void)handleResponseBody:(id)arg1;	// IMP=0x00000000000f2956
- (void)handleResponseHeaders:(id)arg1;	// IMP=0x00000000000f2950
@property(readonly) NSDictionary *messageBody;
@property(readonly) NSDictionary *additionalInternalHeaders;
@property(readonly) NSDictionary *nonStandardMessageHeadersForOutgoingPush;
@property(readonly) NSDictionary *additionalMessageHeadersForOutgoingPush;
@property(readonly) NSDictionary *additionalQueryStringParameters;
@property(readonly) NSDictionary *additionalMessageHeaders;
@property(readonly) NSString *retryCountKey;
@property(readonly) NSString *bagKey;
@property(readonly) long long responseCommand;
@property(readonly) long long command;
@property(readonly) NSString *userAgentHeaderString;
@property(readonly) _Bool wantsUserAgentInHeaders;
@property(readonly) _Bool requiresPushTokenKeys;
@property(readonly) NSArray *requiredKeys;
- (_Bool)hasRequiredKeys:(id *)arg1;	// IMP=0x00000000000f2281
@property(readonly, nonatomic) _Bool ignorePushSigHeaders;
@property(readonly, nonatomic) _Bool wantsBodySigningOnly;
- (_Bool)wantsUDID;	// IMP=0x00000000000f2269
- (_Bool)wantsClientInfo;	// IMP=0x00000000000f2261
- (_Bool)wantsGZip;	// IMP=0x00000000000f2259
- (id)parsedIDSMessageResult;	// IMP=0x00000000000f2251
- (id)overrideContentType;	// IMP=0x00000000000f2249
@property(copy, nonatomic) NSNumber *serverTimestampReceivedDate;
@property(copy, nonatomic) NSNumber *serverTimestamp;
@property(readonly, copy, nonatomic) NSData *IDCertificate;
@property(readonly, nonatomic) struct __SecKey *identityPublicKey;
@property(readonly, nonatomic) struct __SecKey *identityPrivateKey;
@property(copy, nonatomic) NSMutableArray *userIDArray;
@property(copy, nonatomic) NSMutableArray *privateKeyArray;
@property(copy, nonatomic) NSMutableArray *publicKeyArray;
@property(copy, nonatomic) NSMutableArray *certDataArray;
@property(copy, nonatomic) NSData *pushToken;
@property(copy, nonatomic) NSData *pushCertificate;
@property(nonatomic) struct __SecKey *pushPublicKey;
@property(nonatomic) struct __SecKey *pushPrivateKey;
- (void)_clearCache;	// IMP=0x00000000000f212a
- (void)_cacheBody;	// IMP=0x00000000000f20ea
@property(readonly) NSDictionary *messageBodyUsingCache;
@property(readonly) _Bool isValidMessage;
@property(readonly) _Bool payloadCanBeLogged;
@property(readonly) _Bool wantsStatusCodeBasedRetries;
- (_Bool)isIDSMessage;	// IMP=0x00000000000f207d
- (id)messageBodyDataOverride;	// IMP=0x00000000000f2075
@property(readonly) NSString *dataUsageBundleIdentifier;
@property(readonly) double customRetryInterval;
@property(readonly) _Bool wantsCustomRetryInterval;
@property(readonly) _Bool wantsIDSSignatures;
@property(readonly) _Bool wantsBodySignature;
@property(readonly) _Bool isWebTunnelMessage;
@property(readonly) _Bool wantsSignature;
@property(readonly) _Bool ignoresNetworkConnectivity;
@property(readonly) _Bool allowsServerProvidedLenientAnisetteTimeout;
@property(readonly) double anisetteHeadersTimeout;
@property(readonly) _Bool wantsAPSRetries;
@property(readonly) _Bool wantsManagedRetries;
@property(readonly) _Bool wantsExtraTimeoutRetry;
@property(readonly) int maxTimeoutRetries;
@property(readonly) _Bool wantsCFNetworkTimeout;
@property(readonly) _Bool wantsBagKey;
@property(readonly) _Bool allowDualDelivery;
@property(readonly) _Bool wantsHTTPGet;
@property(readonly) _Bool wantsHTTPHeaders;
@property(readonly) _Bool wantsJSONBody;
@property(readonly) _Bool wantsCompressedBody;
@property(readonly) _Bool wantsIDSServer;
@property(readonly) NSString *uniqueIDString;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f1a37
- (id)init;	// IMP=0x00000000000f1982

@end

