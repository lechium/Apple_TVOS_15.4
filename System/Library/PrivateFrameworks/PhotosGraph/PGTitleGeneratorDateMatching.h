//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateInterval, NSSet, NSString, PGGraph, PGTitle, PGTitleGenerationContext;

@interface PGTitleGeneratorDateMatching : NSObject
{
    PGTitleGenerationContext *_titleGenerationContext;	// 8 = 0x8
    NSString *_holidayName;	// 16 = 0x10
    _Bool _isForHighlight;	// 24 = 0x18
    PGGraph *_graph;	// 32 = 0x20
    long long _type;	// 40 = 0x28
    NSDateInterval *_referenceDateInterval;	// 48 = 0x30
    NSSet *_dateNodes;	// 56 = 0x38
    NSSet *_momentNodes;	// 64 = 0x40
    unsigned long long _lineBreakBehavior;	// 72 = 0x48
}

+ (id)_typeMatchings;	// IMP=0x00000000002ffcee
+ (_Bool)type:(long long)arg1 isBetterThanType:(long long)arg2;	// IMP=0x00000000002ffac1
- (void).cxx_destruct;	// IMP=0x00000000002ff9d8
@property(readonly, nonatomic) unsigned long long lineBreakBehavior; // @synthesize lineBreakBehavior=_lineBreakBehavior;
@property(readonly, nonatomic) _Bool isForHighlight; // @synthesize isForHighlight=_isForHighlight;
@property(readonly, nonatomic) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(retain, nonatomic) NSSet *dateNodes; // @synthesize dateNodes=_dateNodes;
@property(readonly, nonatomic) NSDateInterval *referenceDateInterval; // @synthesize referenceDateInterval=_referenceDateInterval;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
- (long long)_matchingTypeForDateNode:(id)arg1;	// IMP=0x00000000002ff59b
- (long long)_findBestType;	// IMP=0x00000000002ff3e2
- (_Bool)_dateNodeIntersectsWithReferenceDateIntervalByIgnoringYear;	// IMP=0x00000000002fed9b
@property(readonly, nonatomic) unsigned long long allowedTimeTitleFormats;
@property(readonly, nonatomic) PGTitle *title;
- (id)initWithType:(long long)arg1 referenceDateInterval:(id)arg2 momentNodes:(id)arg3 titleGenerationContext:(id)arg4;	// IMP=0x00000000002fe6bc
- (id)initWithType:(long long)arg1 referenceDateInterval:(id)arg2 highlightNode:(id)arg3 titleGenerationContext:(id)arg4;	// IMP=0x00000000002fe5b2
- (id)initWithType:(long long)arg1 referenceDateInterval:(id)arg2 momentNodes:(id)arg3 lineBreakBehavior:(unsigned long long)arg4 isForHighlight:(_Bool)arg5 titleGenerationContext:(id)arg6;	// IMP=0x00000000002fe582

@end

