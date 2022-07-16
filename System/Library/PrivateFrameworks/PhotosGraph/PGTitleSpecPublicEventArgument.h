//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGTitleSpecPublicEventArgument
{
    _Bool _shouldUseLongPublicEventTitle;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
}

+ (id)_cleanUpEventName:(id)arg1;	// IMP=0x000000000020b6b4
+ (id)argumentWithPublicEventType:(unsigned long long)arg1 shouldUseLongPublicEventTitle:(_Bool)arg2;	// IMP=0x000000000020b679
+ (id)argumentWithPublicEventType:(unsigned long long)arg1;	// IMP=0x000000000020b643
@property(readonly, nonatomic) _Bool shouldUseLongPublicEventTitle; // @synthesize shouldUseLongPublicEventTitle=_shouldUseLongPublicEventTitle;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)_generateTitleWithCategoryNameForPublicEventNode:(id)arg1;	// IMP=0x000000000020b30d
- (id)_generateTitleWithPerformerNamesForPublicEventNode:(id)arg1;	// IMP=0x000000000020aeb4
- (id)_generateTitleWithBusinessNameForPublicEventNode:(id)arg1;	// IMP=0x000000000020ae61
- (id)_generateTitleWithEventNameForPublicEventNode:(id)arg1;	// IMP=0x000000000020adcb
- (id)_commonPublicEventNodeForMomentNodes:(id)arg1;	// IMP=0x000000000020a69d
- (id)_resolvedStringWithPublicEventNode:(id)arg1 inMomentNodes:(id)arg2;	// IMP=0x000000000020a5b7
- (id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 argumentEvaluationContext:(id)arg3;	// IMP=0x000000000020a383
- (id)_resolvedStringWithMomentNodes:(id)arg1 argumentEvaluationContext:(id)arg2;	// IMP=0x000000000020a303
- (id)initWithPublicEventType:(unsigned long long)arg1 shouldUseLongPublicEventTitle:(_Bool)arg2;	// IMP=0x000000000020a2ad
- (id)initWithPublicEventType:(unsigned long long)arg1;	// IMP=0x000000000020a25e

@end

