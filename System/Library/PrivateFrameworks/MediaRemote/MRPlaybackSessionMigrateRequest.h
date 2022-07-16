//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class MRContentItem, MRPlaybackSessionRequest, NSData, NSError, NSString, _MRPlaybackSessionMigrateRequestProtobuf;

@interface MRPlaybackSessionMigrateRequest : NSObject <NSCopying>
{
    _MRPlaybackSessionMigrateRequestProtobuf *_protobuf;	// 8 = 0x8
    NSError *_migrateError;	// 16 = 0x10
    NSError *_fallbackError;	// 24 = 0x18
    NSString *_appBundleIdentifier;	// 32 = 0x20
    NSString *_initiator;	// 40 = 0x28
    unsigned long long _requestType;	// 48 = 0x30
    unsigned long long _fallbackReason;	// 56 = 0x38
    long long _playbackSessionSize;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000bc82c
@property(nonatomic) long long playbackSessionSize; // @synthesize playbackSessionSize=_playbackSessionSize;
@property(nonatomic) unsigned long long fallbackReason; // @synthesize fallbackReason=_fallbackReason;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) NSString *initiator; // @synthesize initiator=_initiator;
@property(retain, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
- (void)merge:(id)arg1;	// IMP=0x00000000000bc548
@property(nonatomic) unsigned int destinationTypes;
@property(nonatomic) unsigned int originatorType;
@property(nonatomic) _Bool allowFadeTransition;
@property(readonly, nonatomic) double duration;
- (void)addDestinationTypesFromDevices:(id)arg1;	// IMP=0x00000000000bc242
- (void)addDestinationType:(unsigned int)arg1;	// IMP=0x00000000000bc21d
- (void)setOriginatorTypeFromDevice:(id)arg1;	// IMP=0x00000000000bc1fb
- (void)finalize;	// IMP=0x00000000000bc094
- (void)endEvent:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000bbd0b
- (void)endEvent:(id)arg1;	// IMP=0x00000000000bbcf7
- (void)startEvent:(id)arg1;	// IMP=0x00000000000bbbab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bbb15
- (id)description;	// IMP=0x00000000000bb92d
@property(readonly, nonatomic) NSString *report;
@property(readonly, nonatomic) NSData *protobufData;
@property(readonly, nonatomic) _MRPlaybackSessionMigrateRequestProtobuf *protobuf;
@property(retain, nonatomic) MRPlaybackSessionRequest *playbackSessionRequest;
@property(retain, nonatomic) MRContentItem *contentItem;
@property(nonatomic) double playbackRate;
@property(nonatomic) double playbackPosition;
@property(nonatomic) unsigned int playbackState;
@property(nonatomic) long long endpointOptions;
@property(nonatomic) long long playerOptions;
@property(retain, nonatomic) NSString *requestID;
- (id)initWithData:(id)arg1;	// IMP=0x00000000000ba2bb
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000000ba229
- (id)init;	// IMP=0x00000000000ba156

@end
