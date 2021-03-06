//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PeopleSuggester/NSCopying-Protocol.h>

@class NSString;

@interface CoreBehaviorAnalysisPETCoreBehaviorAnalysisEvent : PBCodable <NSCopying>
{
    NSString *_confidence;	// 8 = 0x8
    unsigned int _highConfidenceRuleCount;	// 16 = 0x10
    unsigned int _locationOfInterestContainingRuleCount;	// 20 = 0x14
    unsigned int _locationOfInterestRulesCardinality;	// 24 = 0x18
    unsigned int _lowConfidenceRuleCount;	// 28 = 0x1c
    unsigned int _mediumConfidenceRuleCount;	// 32 = 0x20
    unsigned int _photoContactContainingRuleCount;	// 36 = 0x24
    unsigned int _photoContactInContext;	// 40 = 0x28
    unsigned int _photoContactInRule;	// 44 = 0x2c
    unsigned int _photoContactOverlap;	// 48 = 0x30
    unsigned int _photoContactRulesCardinality;	// 52 = 0x34
    unsigned int _photoSceneContainingRuleCount;	// 56 = 0x38
    unsigned int _photoSceneInContext;	// 60 = 0x3c
    unsigned int _photoSceneInRule;	// 64 = 0x40
    unsigned int _photoSceneOverlap;	// 68 = 0x44
    unsigned int _photoSceneRulesCardinality;	// 72 = 0x48
    NSString *_sessionId;	// 80 = 0x50
    unsigned int _sourceBundleIdContainingRuleCount;	// 88 = 0x58
    unsigned int _sourceBundleIdRulesCardinality;	// 92 = 0x5c
    NSString *_support;	// 96 = 0x60
    unsigned int _targetBundleIdContainingRuleCount;	// 104 = 0x68
    unsigned int _targetBundleIdRulesCardinality;	// 108 = 0x6c
    unsigned int _topicContainingRuleCount;	// 112 = 0x70
    unsigned int _topicRulesCardinality;	// 116 = 0x74
    unsigned int _totalMessagesRecieved;	// 120 = 0x78
    unsigned int _totalMessagesSent;	// 124 = 0x7c
    unsigned int _totalShares;	// 128 = 0x80
    NSString *_uniqueShareEventIdentifier;	// 136 = 0x88
    _Bool _contentUrlInContext;	// 144 = 0x90
    _Bool _contentUrlInRule;	// 145 = 0x91
    _Bool _contentUrlOverlap;	// 146 = 0x92
    _Bool _isWeekendInRule;	// 147 = 0x93
    _Bool _isWeekendOverlap;	// 148 = 0x94
    _Bool _lOIInContext;	// 149 = 0x95
    _Bool _lOIInRule;	// 150 = 0x96
    _Bool _lOIOverlap;	// 151 = 0x97
    _Bool _personAndAppMatched;	// 152 = 0x98
    _Bool _personMatched;	// 153 = 0x99
    _Bool _sourceBundleIdInContext;	// 154 = 0x9a
    _Bool _sourceBundleIdInRule;	// 155 = 0x9b
    _Bool _sourceBundleIdOverlap;	// 156 = 0x9c
    _Bool _targetBundleIDInConsequent;	// 157 = 0x9d
    _Bool _targetBundleIdInContext;	// 158 = 0x9e
    _Bool _targetBundleIdInRule;	// 159 = 0x9f
    _Bool _targetBundleIdOverlap;	// 160 = 0xa0
    _Bool _timeOfDaySlotInRule;	// 161 = 0xa1
    _Bool _timeOfDaySlotOverlap;	// 162 = 0xa2
    _Bool _topicInContext;	// 163 = 0xa3
    _Bool _topicInRule;	// 164 = 0xa4
    _Bool _topicOverlap;	// 165 = 0xa5
    _Bool _utiTypeInContext;	// 166 = 0xa6
    _Bool _utiTypeInRule;	// 167 = 0xa7
    _Bool _utiTypeOverlap;	// 168 = 0xa8
    struct {
        unsigned int topicContainingRuleCount:1;
        unsigned int topicRulesCardinality:1;
        unsigned int personAndAppMatched:1;
        unsigned int personMatched:1;
        unsigned int topicInContext:1;
        unsigned int topicInRule:1;
        unsigned int topicOverlap:1;
    } _has;	// 172 = 0xac
}

- (void).cxx_destruct;	// IMP=0x000000000005c1e0
@property(nonatomic) _Bool topicInRule; // @synthesize topicInRule=_topicInRule;
@property(nonatomic) _Bool topicInContext; // @synthesize topicInContext=_topicInContext;
@property(nonatomic) _Bool topicOverlap; // @synthesize topicOverlap=_topicOverlap;
@property(nonatomic) unsigned int topicContainingRuleCount; // @synthesize topicContainingRuleCount=_topicContainingRuleCount;
@property(nonatomic) unsigned int topicRulesCardinality; // @synthesize topicRulesCardinality=_topicRulesCardinality;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool utiTypeOverlap; // @synthesize utiTypeOverlap=_utiTypeOverlap;
@property(nonatomic) _Bool utiTypeInRule; // @synthesize utiTypeInRule=_utiTypeInRule;
@property(nonatomic) _Bool timeOfDaySlotOverlap; // @synthesize timeOfDaySlotOverlap=_timeOfDaySlotOverlap;
@property(nonatomic) _Bool timeOfDaySlotInRule; // @synthesize timeOfDaySlotInRule=_timeOfDaySlotInRule;
@property(nonatomic) _Bool targetBundleIdOverlap; // @synthesize targetBundleIdOverlap=_targetBundleIdOverlap;
@property(nonatomic) _Bool targetBundleIdInRule; // @synthesize targetBundleIdInRule=_targetBundleIdInRule;
@property(nonatomic) _Bool targetBundleIDInConsequent; // @synthesize targetBundleIDInConsequent=_targetBundleIDInConsequent;
@property(retain, nonatomic) NSString *support; // @synthesize support=_support;
@property(nonatomic) _Bool sourceBundleIdOverlap; // @synthesize sourceBundleIdOverlap=_sourceBundleIdOverlap;
@property(nonatomic) _Bool sourceBundleIdInRule; // @synthesize sourceBundleIdInRule=_sourceBundleIdInRule;
@property(nonatomic) unsigned int photoSceneOverlap; // @synthesize photoSceneOverlap=_photoSceneOverlap;
@property(nonatomic) unsigned int photoSceneInRule; // @synthesize photoSceneInRule=_photoSceneInRule;
@property(nonatomic) unsigned int photoContactOverlap; // @synthesize photoContactOverlap=_photoContactOverlap;
@property(nonatomic) unsigned int photoContactInRule; // @synthesize photoContactInRule=_photoContactInRule;
@property(nonatomic) _Bool personMatched; // @synthesize personMatched=_personMatched;
@property(nonatomic) _Bool personAndAppMatched; // @synthesize personAndAppMatched=_personAndAppMatched;
@property(nonatomic) _Bool lOIOverlap; // @synthesize lOIOverlap=_lOIOverlap;
@property(nonatomic) _Bool lOIInRule; // @synthesize lOIInRule=_lOIInRule;
@property(nonatomic) _Bool isWeekendOverlap; // @synthesize isWeekendOverlap=_isWeekendOverlap;
@property(nonatomic) _Bool isWeekendInRule; // @synthesize isWeekendInRule=_isWeekendInRule;
@property(nonatomic) _Bool contentUrlOverlap; // @synthesize contentUrlOverlap=_contentUrlOverlap;
@property(nonatomic) _Bool contentUrlInRule; // @synthesize contentUrlInRule=_contentUrlInRule;
@property(retain, nonatomic) NSString *confidence; // @synthesize confidence=_confidence;
@property(nonatomic) _Bool utiTypeInContext; // @synthesize utiTypeInContext=_utiTypeInContext;
@property(retain, nonatomic) NSString *uniqueShareEventIdentifier; // @synthesize uniqueShareEventIdentifier=_uniqueShareEventIdentifier;
@property(nonatomic) unsigned int totalShares; // @synthesize totalShares=_totalShares;
@property(nonatomic) unsigned int totalMessagesSent; // @synthesize totalMessagesSent=_totalMessagesSent;
@property(nonatomic) unsigned int totalMessagesRecieved; // @synthesize totalMessagesRecieved=_totalMessagesRecieved;
@property(nonatomic) unsigned int targetBundleIdRulesCardinality; // @synthesize targetBundleIdRulesCardinality=_targetBundleIdRulesCardinality;
@property(nonatomic) _Bool targetBundleIdInContext; // @synthesize targetBundleIdInContext=_targetBundleIdInContext;
@property(nonatomic) unsigned int targetBundleIdContainingRuleCount; // @synthesize targetBundleIdContainingRuleCount=_targetBundleIdContainingRuleCount;
@property(nonatomic) unsigned int sourceBundleIdRulesCardinality; // @synthesize sourceBundleIdRulesCardinality=_sourceBundleIdRulesCardinality;
@property(nonatomic) _Bool sourceBundleIdInContext; // @synthesize sourceBundleIdInContext=_sourceBundleIdInContext;
@property(nonatomic) unsigned int sourceBundleIdContainingRuleCount; // @synthesize sourceBundleIdContainingRuleCount=_sourceBundleIdContainingRuleCount;
@property(nonatomic) unsigned int photoSceneRulesCardinality; // @synthesize photoSceneRulesCardinality=_photoSceneRulesCardinality;
@property(nonatomic) unsigned int photoSceneInContext; // @synthesize photoSceneInContext=_photoSceneInContext;
@property(nonatomic) unsigned int photoSceneContainingRuleCount; // @synthesize photoSceneContainingRuleCount=_photoSceneContainingRuleCount;
@property(nonatomic) unsigned int photoContactRulesCardinality; // @synthesize photoContactRulesCardinality=_photoContactRulesCardinality;
@property(nonatomic) unsigned int photoContactInContext; // @synthesize photoContactInContext=_photoContactInContext;
@property(nonatomic) unsigned int photoContactContainingRuleCount; // @synthesize photoContactContainingRuleCount=_photoContactContainingRuleCount;
@property(nonatomic) unsigned int mediumConfidenceRuleCount; // @synthesize mediumConfidenceRuleCount=_mediumConfidenceRuleCount;
@property(nonatomic) unsigned int lowConfidenceRuleCount; // @synthesize lowConfidenceRuleCount=_lowConfidenceRuleCount;
@property(nonatomic) _Bool lOIInContext; // @synthesize lOIInContext=_lOIInContext;
@property(nonatomic) unsigned int locationOfInterestRulesCardinality; // @synthesize locationOfInterestRulesCardinality=_locationOfInterestRulesCardinality;
@property(nonatomic) unsigned int locationOfInterestContainingRuleCount; // @synthesize locationOfInterestContainingRuleCount=_locationOfInterestContainingRuleCount;
@property(nonatomic) unsigned int highConfidenceRuleCount; // @synthesize highConfidenceRuleCount=_highConfidenceRuleCount;
@property(nonatomic) _Bool contentUrlInContext; // @synthesize contentUrlInContext=_contentUrlInContext;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005b7e0
- (unsigned long long)hash;	// IMP=0x000000000005b136
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005aa1a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a609
- (void)copyTo:(id)arg1;	// IMP=0x000000000005a25b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000059ce1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000059cd4
- (id)dictionaryRepresentation;	// IMP=0x0000000000057175
- (id)description;	// IMP=0x00000000000570c6
@property(nonatomic) _Bool hasTopicInRule;
@property(nonatomic) _Bool hasTopicInContext;
@property(nonatomic) _Bool hasTopicOverlap;
@property(nonatomic) _Bool hasTopicContainingRuleCount;
@property(nonatomic) _Bool hasTopicRulesCardinality;
@property(readonly, nonatomic) _Bool hasSessionId;
@property(nonatomic) _Bool hasPersonMatched;
@property(nonatomic) _Bool hasPersonAndAppMatched;

@end

