//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSArray, NSString;

@interface BMInferredModeEvent : NSObject <BMStoreData, BMProtoBufWrapper>
{
    _Bool _isAutomationEnabled;	// 8 = 0x8
    _Bool _isStart;	// 9 = 0x9
    _Bool _shouldSuggestTriggers;	// 10 = 0xa
    double _absoluteTimestamp;	// 16 = 0x10
    NSString *_modeUUID;	// 24 = 0x18
    NSString *_suggestionUUID;	// 32 = 0x20
    long long _origin;	// 40 = 0x28
    NSString *_originBundleId;	// 48 = 0x30
    unsigned long long _uiLocation;	// 56 = 0x38
    double _confidenceScore;	// 64 = 0x40
    NSString *_originAnchorType;	// 72 = 0x48
    NSArray *_serializedTriggers;	// 80 = 0x50
    unsigned long long _modeType;	// 88 = 0x58
    NSString *_userModeName;	// 96 = 0x60
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x00000000000ac1ff
- (void).cxx_destruct;	// IMP=0x00000000000ad3f2
@property(readonly, nonatomic) NSString *userModeName; // @synthesize userModeName=_userModeName;
@property(readonly, nonatomic) unsigned long long modeType; // @synthesize modeType=_modeType;
@property(readonly, nonatomic) NSArray *serializedTriggers; // @synthesize serializedTriggers=_serializedTriggers;
@property(readonly, nonatomic) NSString *originAnchorType; // @synthesize originAnchorType=_originAnchorType;
@property(readonly, nonatomic) double confidenceScore; // @synthesize confidenceScore=_confidenceScore;
@property(readonly, nonatomic) unsigned long long uiLocation; // @synthesize uiLocation=_uiLocation;
@property(readonly, nonatomic) _Bool shouldSuggestTriggers; // @synthesize shouldSuggestTriggers=_shouldSuggestTriggers;
@property(readonly, nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
@property(readonly, nonatomic) _Bool isAutomationEnabled; // @synthesize isAutomationEnabled=_isAutomationEnabled;
@property(readonly, nonatomic) NSString *originBundleId; // @synthesize originBundleId=_originBundleId;
@property(readonly, nonatomic) long long origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) NSString *suggestionUUID; // @synthesize suggestionUUID=_suggestionUUID;
@property(readonly, nonatomic) NSString *modeUUID; // @synthesize modeUUID=_modeUUID;
@property(readonly, nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ace50
- (id)proto;	// IMP=0x00000000000acb3f
- (id)initWithProtoData:(id)arg1;	// IMP=0x00000000000acaa3
- (id)initWithProto:(id)arg1;	// IMP=0x00000000000ac72c
- (id)encodeAsProto;	// IMP=0x00000000000ac6dc
- (id)json;	// IMP=0x00000000000ac61c
- (id)jsonDict;	// IMP=0x00000000000ac2c9
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) NSString *modeIdentifier;
- (id)serialize;	// IMP=0x00000000000ac29b
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithAbsoluteTimestamp:(double)arg1 modeUUID:(id)arg2 origin:(long long)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 isAutomationEnabled:(_Bool)arg6 uiLocation:(unsigned long long)arg7 isStart:(_Bool)arg8 confidenceScore:(double)arg9 suggestionUUID:(id)arg10 serializedTriggers:(id)arg11 shouldSuggestTriggers:(_Bool)arg12 modeType:(unsigned long long)arg13 userModeName:(id)arg14;	// IMP=0x00000000000ac048
- (id)initWithAbsoluteTimestamp:(double)arg1 modeUUID:(id)arg2 origin:(long long)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 isAutomationEnabled:(_Bool)arg6 uiLocation:(unsigned long long)arg7 isStart:(_Bool)arg8 confidenceScore:(double)arg9 suggestionUUID:(id)arg10 serializedTriggers:(id)arg11 shouldSuggestTriggers:(_Bool)arg12 modeType:(unsigned long long)arg13;	// IMP=0x00000000000abfe2
- (id)initWithAbsoluteTimestamp:(double)arg1 modeUUID:(id)arg2 origin:(long long)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 isAutomationEnabled:(_Bool)arg6 uiLocation:(unsigned long long)arg7 isStart:(_Bool)arg8 confidenceScore:(double)arg9 suggestionUUID:(id)arg10 serializedTriggers:(id)arg11 modeType:(unsigned long long)arg12;	// IMP=0x00000000000abf84
- (id)initWithAbsoluteTimestamp:(double)arg1 modeIdentifier:(id)arg2 origin:(long long)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 isAutomationEnabled:(_Bool)arg6 uiLocation:(unsigned long long)arg7 isStart:(_Bool)arg8 confidenceScore:(double)arg9 uuid:(id)arg10 serializedTriggers:(id)arg11 modeType:(unsigned long long)arg12;	// IMP=0x00000000000abf26
- (id)initWithAbsoluteTimestamp:(double)arg1 modeIdentifier:(id)arg2 origin:(long long)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 isAutomationEnabled:(_Bool)arg6 uiLocation:(unsigned long long)arg7 isStart:(_Bool)arg8 confidenceScore:(double)arg9 uuid:(id)arg10 serializedTriggers:(id)arg11;	// IMP=0x00000000000abed4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

