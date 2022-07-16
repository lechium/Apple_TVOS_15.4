//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>
#import <BiomeStreams/BMStreamValidating-Protocol.h>
#import <BiomeStreams/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString, NSURL;

@interface BMCommunicationSafetyResultEvent : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>
{
    unsigned int _contentCount;	// 8 = 0x8
    double _absoluteTimestamp;	// 16 = 0x10
    NSString *_childID;	// 24 = 0x18
    NSString *_deviceID;	// 32 = 0x20
    NSString *_sourceBundleID;	// 40 = 0x28
    unsigned long long _eventDirection;	// 48 = 0x30
    unsigned long long _eventType;	// 56 = 0x38
    unsigned long long _contentType;	// 64 = 0x40
    NSArray *_contactHandles;	// 72 = 0x48
    NSString *_contentID;	// 80 = 0x50
    NSString *_conversationID;	// 88 = 0x58
    NSString *_senderHandle;	// 96 = 0x60
    NSURL *_contentURL;	// 104 = 0x68
    NSURL *_conversationURL;	// 112 = 0x70
    NSData *_imageData;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008a9de
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000008a599
- (void).cxx_destruct;	// IMP=0x000000000008bfea
@property(readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, copy, nonatomic) NSURL *conversationURL; // @synthesize conversationURL=_conversationURL;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(readonly, copy, nonatomic) NSString *senderHandle; // @synthesize senderHandle=_senderHandle;
@property(readonly, copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(readonly, copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(readonly, copy, nonatomic) NSArray *contactHandles; // @synthesize contactHandles=_contactHandles;
@property(nonatomic) unsigned int contentCount; // @synthesize contentCount=_contentCount;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(nonatomic) unsigned long long eventDirection; // @synthesize eventDirection=_eventDirection;
@property(readonly, copy, nonatomic) NSString *sourceBundleID; // @synthesize sourceBundleID=_sourceBundleID;
@property(readonly, copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, copy, nonatomic) NSString *childID; // @synthesize childID=_childID;
@property(readonly, nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
- (_Bool)isValidWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008bf25
- (_Bool)isCompleteWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008bf1d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008b653
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x000000000008b0ac
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000008b010
- (id)initWithProto:(id)arg1;	// IMP=0x000000000008ab75
- (id)encodeAsProto;	// IMP=0x000000000008ab25
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008aa5f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008a9e6
- (id)json;	// IMP=0x000000000008a909
- (id)jsonDict;	// IMP=0x000000000008a647
- (id)serialize;	// IMP=0x000000000008a635
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithChildID:(id)arg1 deviceID:(id)arg2 sourceBundleID:(id)arg3 absoluteTimeStamp:(double)arg4 eventDirection:(unsigned long long)arg5 eventType:(unsigned long long)arg6 contentType:(unsigned long long)arg7 contactHandles:(id)arg8 contentID:(id)arg9 conversationID:(id)arg10 imageData:(id)arg11 senderHandle:(id)arg12 contentURL:(id)arg13 conversationURL:(id)arg14;	// IMP=0x000000000008a36e
- (id)initWithChildID:(id)arg1 deviceID:(id)arg2 sourceBundleID:(id)arg3 absoluteTimeStamp:(double)arg4 eventDirection:(unsigned long long)arg5 eventType:(unsigned long long)arg6 contentType:(unsigned long long)arg7 contactHandles:(id)arg8 contentID:(id)arg9 conversationID:(id)arg10 imageData:(id)arg11;	// IMP=0x000000000008a328

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

