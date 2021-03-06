//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, _CDInteraction, _PSCNAutocompleteFeedbackActionStatistics;

@interface _PSCNAutocompleteFeedbackSessionAccumulator : NSObject
{
    _CDInteraction *_interaction;	// 8 = 0x8
    NSMutableArray *_vendedSuggestionEvents;	// 16 = 0x10
    NSMutableArray *_metricsForImpressions;	// 24 = 0x18
    NSMutableArray *_metricsForSubmodelImpressions;	// 32 = 0x20
    _PSCNAutocompleteFeedbackActionStatistics *_metricsForAction;	// 40 = 0x28
}

+ (id)parseSubmodel:(id)arg1;	// IMP=0x0000000000033fdb
- (void).cxx_destruct;	// IMP=0x0000000000035538
@property(readonly, nonatomic) _PSCNAutocompleteFeedbackActionStatistics *metricsForAction; // @synthesize metricsForAction=_metricsForAction;
@property(readonly, nonatomic) NSMutableArray *metricsForSubmodelImpressions; // @synthesize metricsForSubmodelImpressions=_metricsForSubmodelImpressions;
@property(readonly, nonatomic) NSMutableArray *metricsForImpressions; // @synthesize metricsForImpressions=_metricsForImpressions;
@property(readonly, nonatomic) NSMutableArray *vendedSuggestionEvents; // @synthesize vendedSuggestionEvents=_vendedSuggestionEvents;
@property(readonly, nonatomic) _CDInteraction *interaction; // @synthesize interaction=_interaction;
- (void)updateWithVendedSuggestions:(id)arg1 reportTime:(id)arg2;	// IMP=0x000000000003528e
- (void)updateWithTappedSuggestion:(id)arg1;	// IMP=0x0000000000034d3d
- (void)updateWithFeedback:(id)arg1;	// IMP=0x0000000000034bea
- (void)updateWithInteraction:(id)arg1;	// IMP=0x0000000000034132
- (id)init;	// IMP=0x000000000003408f

@end

