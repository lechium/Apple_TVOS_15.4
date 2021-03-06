//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMEventAppAssociating-Protocol.h>
#import <BiomeStreams/BMIdentifiable-Protocol.h>
#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMPublicStreamEvent-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>
#import <BiomeStreams/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface BMIntentEvent <BMEventAppAssociating, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMIdentifiable, BMPublicStreamEvent>
{
    _Bool _donatedBySiri;	// 8 = 0x8
    double _absoluteTimestamp;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    NSString *_sourceId;	// 32 = 0x20
    NSString *_intentClass;	// 40 = 0x28
    NSString *_intentVerb;	// 48 = 0x30
    long long _intentType;	// 56 = 0x38
    long long _intentHandlingStatus;	// 64 = 0x40
    NSData *_interaction;	// 72 = 0x48
    NSString *_itemID;	// 80 = 0x50
    long long _interactionDirection;	// 88 = 0x58
}

+ (long long)stream;	// IMP=0x0000000000032d22
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000031b4e
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x00000000000319e6
+ (id)eventWithDKEvent:(id)arg1;	// IMP=0x000000000003101c
- (void).cxx_destruct;	// IMP=0x000000000003368e
@property(nonatomic) long long interactionDirection; // @synthesize interactionDirection=_interactionDirection;
@property(nonatomic) _Bool donatedBySiri; // @synthesize donatedBySiri=_donatedBySiri;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSData *interaction; // @synthesize interaction=_interaction;
@property(nonatomic) long long intentHandlingStatus; // @synthesize intentHandlingStatus=_intentHandlingStatus;
@property(nonatomic) long long intentType; // @synthesize intentType=_intentType;
@property(copy, nonatomic) NSString *intentVerb; // @synthesize intentVerb=_intentVerb;
@property(copy, nonatomic) NSString *intentClass; // @synthesize intentClass=_intentClass;
@property(copy, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
- (id)proto;	// IMP=0x0000000000033177
- (id)initWithProtoData:(id)arg1;	// IMP=0x00000000000330db
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000032d7d
- (id)encodeAsProto;	// IMP=0x0000000000032d2d
@property(readonly, nonatomic) NSString *identifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000032674
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000032109
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000032090
- (_Bool)checkAndReportDecodingFailureIfNeededForuint32_t:(unsigned int)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;	// IMP=0x0000000000031ed5
- (_Bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;	// IMP=0x0000000000031d1a
- (_Bool)checkAndReportDecodingFailureIfNeededForCFAbsoluteTime:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;	// IMP=0x0000000000031b56
- (id)serialize;	// IMP=0x0000000000031b3c
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithAbsoluteTime:(double)arg1 bundleId:(id)arg2 sourceId:(id)arg3 intentClass:(id)arg4 intentVerb:(id)arg5 intentType:(long long)arg6 intentHandlingStatus:(long long)arg7 interaction:(id)arg8;	// IMP=0x00000000000319a6
- (id)initWithAbsoluteTime:(double)arg1 bundleId:(id)arg2 sourceId:(id)arg3 intentClass:(id)arg4 intentVerb:(id)arg5 intentType:(long long)arg6 intentHandlingStatus:(long long)arg7 interaction:(id)arg8 itemID:(id)arg9 donatedBySiri:(_Bool)arg10 interactionDirection:(long long)arg11;	// IMP=0x000000000003179c
- (id)initWithAbsoluteTime:(double)arg1 bundleId:(id)arg2 sourceId:(id)arg3 intentClass:(id)arg4 intentVerb:(id)arg5 intentType:(long long)arg6 intentHandlingStatus:(long long)arg7 interaction:(id)arg8 itemID:(id)arg9;	// IMP=0x000000000003175f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

