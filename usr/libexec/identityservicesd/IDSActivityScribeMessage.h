//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class MISSING_TYPE, NSArray, NSData, NSString;

@interface IDSActivityScribeMessage : FTIDSMessage
{
    unsigned char _pushPriority;	// 232 = 0xe8
    unsigned char _activityPolicy;	// 233 = 0xe9
    int _version;	// 236 = 0xec
    int _responseStatus;	// 240 = 0xf0
    NSArray *_tokens;	// 248 = 0xf8
    NSString *_activityTopic;	// 256 = 0x100
    NSString *_subActivity;	// 264 = 0x108
    NSData *_metadataBlob;	// 272 = 0x110
    MISSING_TYPE *_messageID;	// 280 = 0x118
    long long _ttl;	// 288 = 0x120
    NSString *_responsePresenceTopic;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x0020000000157560
@property(nonatomic) int responseStatus; // @synthesize responseStatus=_responseStatus;
@property(retain, nonatomic) NSString *responsePresenceTopic; // @synthesize responsePresenceTopic=_responsePresenceTopic;
@property(nonatomic) long long ttl; // @synthesize ttl=_ttl;
@property(retain, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(nonatomic) int version; // @synthesize version=_version;
@property(nonatomic) unsigned char activityPolicy; // @synthesize activityPolicy=_activityPolicy;
@property(nonatomic) unsigned char pushPriority; // @synthesize pushPriority=_pushPriority;
@property(retain, nonatomic) NSData *metadataBlob; // @synthesize metadataBlob=_metadataBlob;
@property(retain, nonatomic) NSString *subActivity; // @synthesize subActivity=_subActivity;
@property(retain, nonatomic) NSString *activityTopic; // @synthesize activityTopic=_activityTopic;
@property(retain, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
- (void)handleResponseHeaders:(id)arg1;	// IMP=0x0010000000156fb0
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0010000000156ed0
- (id)messageBody;	// IMP=0x00100000001567c0
- (id)additionalMessageHeadersForOutgoingPush;	// IMP=0x0010000000156720
- (id)topic;	// IMP=0x0010000000156700
- (_Bool)wantsIntegerUniqueIDs;	// IMP=0x00100000001566e0
- (_Bool)wantsResponse;	// IMP=0x00100000001566c0
- (_Bool)isIDSMessage;	// IMP=0x00100000001566a0
- (_Bool)highPriority;	// IMP=0x0010000000156680
- (_Bool)wantsAPSRetries;	// IMP=0x0010000000156660
- (_Bool)wantsIDSProtocolVersion;	// IMP=0x0010000000156640
- (_Bool)isWebTunnelMessage;	// IMP=0x0010000000156620
- (_Bool)wantsCompressedBody;	// IMP=0x0010000000156600
- (_Bool)wantsBinaryPush;	// IMP=0x00100000001565e0
- (long long)responseCommand;	// IMP=0x00100000001565c0
- (long long)command;	// IMP=0x00100000001565a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000156370

@end

