//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFSearchSuggestion-Protocol.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

@interface SFSearchSuggestion : NSObject <SFSearchSuggestion, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int score:1;
        unsigned int type:1;
        unsigned int previouslyEngaged:1;
    } _has;	// 8 = 0x8
    _Bool _previouslyEngaged;	// 12 = 0xc
    int _type;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_suggestion;	// 32 = 0x20
    NSString *_query;	// 40 = 0x28
    double _score;	// 48 = 0x30
    NSArray *_duplicateSuggestions;	// 56 = 0x38
    NSString *_topicIdentifier;	// 64 = 0x40
    NSString *_bundleIdentifier;	// 72 = 0x48
    NSString *_fbr;	// 80 = 0x50
    NSString *_scopedSearchApplicationBundleIdentifier;	// 88 = 0x58
    NSString *_utteranceText;	// 96 = 0x60
    NSString *_detailText;	// 104 = 0x68
    NSMutableDictionary *_serverFeatures;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000025fff
- (void).cxx_destruct;	// IMP=0x0000000000025f74
@property(copy, nonatomic) NSMutableDictionary *serverFeatures; // @synthesize serverFeatures=_serverFeatures;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *utteranceText; // @synthesize utteranceText=_utteranceText;
@property(copy, nonatomic) NSString *scopedSearchApplicationBundleIdentifier; // @synthesize scopedSearchApplicationBundleIdentifier=_scopedSearchApplicationBundleIdentifier;
@property(copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(nonatomic) _Bool previouslyEngaged; // @synthesize previouslyEngaged=_previouslyEngaged;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *topicIdentifier; // @synthesize topicIdentifier=_topicIdentifier;
@property(copy, nonatomic) NSArray *duplicateSuggestions; // @synthesize duplicateSuggestions=_duplicateSuggestions;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) double score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *suggestion; // @synthesize suggestion=_suggestion;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000025a11
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000258b1
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025762
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000256b0
- (_Bool)hasPreviouslyEngaged;	// IMP=0x00000000000256a2
- (_Bool)hasType;	// IMP=0x0000000000025688
- (_Bool)hasScore;	// IMP=0x0000000000025670
- (id)initWithSuggestion:(id)arg1 query:(id)arg2 score:(double)arg3 type:(int)arg4;	// IMP=0x000000000002251d
- (id)initWithIdentifier:(id)arg1 suggestion:(id)arg2 query:(id)arg3 score:(double)arg4 type:(int)arg5;	// IMP=0x000000000002241c
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001cec26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

