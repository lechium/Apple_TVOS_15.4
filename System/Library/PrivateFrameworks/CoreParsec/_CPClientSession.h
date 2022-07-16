//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPClientSession-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _CPUsageEnvelope, _CPUsageSinceLookback;

@interface _CPClientSession : PBCodable <_CPClientSession, NSSecureCoding>
{
    _Bool _removeTimestamps;	// 8 = 0x8
    _Bool _duEnabled;	// 9 = 0x9
    _Bool _isInternalCarry;	// 10 = 0xa
    int _previousSessionEndReason;	// 12 = 0xc
    unsigned int _devicePersistentD20;	// 16 = 0x10
    int _privateRelayStatus;	// 20 = 0x14
    NSString *_agent;	// 24 = 0x18
    NSString *_userGuidString;	// 32 = 0x20
    NSDictionary *_resourceVersions;	// 40 = 0x28
    double _sessionStart;	// 48 = 0x30
    NSString *_parsecDeveloperID;	// 56 = 0x38
    NSString *_countryCode;	// 64 = 0x40
    NSString *_locale;	// 72 = 0x48
    _CPUsageSinceLookback *_usageSinceLookback;	// 80 = 0x50
    _CPUsageEnvelope *_cohortsFeedback;	// 88 = 0x58
    NSArray *_experimentInfos;	// 96 = 0x60
    NSData *_jsonFeedback;	// 104 = 0x68
    NSArray *_feedbacks;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000007b162
@property(copy, nonatomic) NSArray *feedbacks; // @synthesize feedbacks=_feedbacks;
@property(copy, nonatomic) NSData *jsonFeedback; // @synthesize jsonFeedback=_jsonFeedback;
@property(copy, nonatomic) NSArray *experimentInfos; // @synthesize experimentInfos=_experimentInfos;
@property(nonatomic) _Bool isInternalCarry; // @synthesize isInternalCarry=_isInternalCarry;
@property(nonatomic) int privateRelayStatus; // @synthesize privateRelayStatus=_privateRelayStatus;
@property(nonatomic) unsigned int devicePersistentD20; // @synthesize devicePersistentD20=_devicePersistentD20;
@property(retain, nonatomic) _CPUsageEnvelope *cohortsFeedback; // @synthesize cohortsFeedback=_cohortsFeedback;
@property(retain, nonatomic) _CPUsageSinceLookback *usageSinceLookback; // @synthesize usageSinceLookback=_usageSinceLookback;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) _Bool duEnabled; // @synthesize duEnabled=_duEnabled;
@property(copy, nonatomic) NSString *parsecDeveloperID; // @synthesize parsecDeveloperID=_parsecDeveloperID;
@property(nonatomic) _Bool removeTimestamps; // @synthesize removeTimestamps=_removeTimestamps;
@property(nonatomic) int previousSessionEndReason; // @synthesize previousSessionEndReason=_previousSessionEndReason;
@property(nonatomic) double sessionStart; // @synthesize sessionStart=_sessionStart;
@property(copy, nonatomic) NSDictionary *resourceVersions; // @synthesize resourceVersions=_resourceVersions;
@property(copy, nonatomic) NSString *userGuidString; // @synthesize userGuidString=_userGuidString;
@property(copy, nonatomic) NSString *agent; // @synthesize agent=_agent;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007a0a5
- (void)writeTo:(id)arg1;	// IMP=0x000000000007995f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000079952
- (id)feedbackAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000079935
- (unsigned long long)feedbackCount;	// IMP=0x0000000000079918
- (void)addFeedback:(id)arg1;	// IMP=0x000000000007989e
- (void)clearFeedback;	// IMP=0x0000000000079881
- (void)setFeedback:(id)arg1;	// IMP=0x000000000007984d
- (id)experimentInfoAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000797fc
- (unsigned long long)experimentInfoCount;	// IMP=0x00000000000797df
- (void)addExperimentInfo:(id)arg1;	// IMP=0x0000000000079765
- (void)clearExperimentInfo;	// IMP=0x0000000000079748
- (void)setExperimentInfo:(id)arg1;	// IMP=0x0000000000079714
- (void)setResourceVersions:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000794e7
- (_Bool)getResourceVersions:(id *)arg1 forKey:(id)arg2;	// IMP=0x000000000007948a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end
