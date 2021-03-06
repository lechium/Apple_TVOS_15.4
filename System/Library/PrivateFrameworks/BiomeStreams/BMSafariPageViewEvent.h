//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMIdentifiableContentEvent-Protocol.h>
#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>
#import <BiomeStreams/BMStreamValidating-Protocol.h>
#import <BiomeStreams/BMStringContentContentEvent-Protocol.h>
#import <BiomeStreams/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface BMSafariPageViewEvent : NSObject <BMIdentifiableContentEvent, BMStringContentContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>
{
    _Bool _contentIsReaderText;	// 8 = 0x8
    NSString *_uniqueId;	// 16 = 0x10
    NSString *_domainId;	// 24 = 0x18
    double _absoluteTimestamp;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSString *_content;	// 48 = 0x30
    NSURL *_url;	// 56 = 0x38
    NSString *_contentProtection;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003ee73
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000003ea7e
- (void).cxx_destruct;	// IMP=0x000000000003fb54
@property(readonly, nonatomic) NSString *contentProtection; // @synthesize contentProtection=_contentProtection;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) _Bool contentIsReaderText; // @synthesize contentIsReaderText=_contentIsReaderText;
@property(readonly, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(readonly, nonatomic) NSString *domainId; // @synthesize domainId=_domainId;
@property(readonly, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (_Bool)isValidWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003faf2
- (_Bool)isCompleteWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003fa65
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003f5e0
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x000000000003f3e6
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000003f34a
- (id)initWithProto:(id)arg1;	// IMP=0x000000000003f00a
- (id)encodeAsProto;	// IMP=0x000000000003efba
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003eef4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003ee7b
- (id)json;	// IMP=0x000000000003ed9e
- (id)jsonDict;	// IMP=0x000000000003eb2c
- (id)serialize;	// IMP=0x000000000003eb1a
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 absoluteTimestamp:(double)arg3 title:(id)arg4 content:(id)arg5 contentIsReaderText:(_Bool)arg6 url:(id)arg7;	// IMP=0x000000000003ea4c
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 absoluteTimestamp:(double)arg3 title:(id)arg4 content:(id)arg5 contentIsReaderText:(_Bool)arg6 url:(id)arg7 contentProtection:(id)arg8;	// IMP=0x000000000003e7b0
- (id)init;	// IMP=0x000000000003e7aa

// Remaining properties
@property(readonly, nonatomic) NSString *bundleId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

