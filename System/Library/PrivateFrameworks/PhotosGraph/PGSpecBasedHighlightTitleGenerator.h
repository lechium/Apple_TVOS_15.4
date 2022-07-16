//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol PGEventEnrichment;

@interface PGSpecBasedHighlightTitleGenerator
{
    _Bool _createVerboseTitle;	// 8 = 0x8
    id <PGEventEnrichment> _collection;	// 16 = 0x10
    NSString *_meaningLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000047a949
@property(readonly, nonatomic) _Bool createVerboseTitle; // @synthesize createVerboseTitle=_createVerboseTitle;
@property(readonly, nonatomic) NSString *meaningLabel; // @synthesize meaningLabel=_meaningLabel;
@property(readonly, nonatomic) id <PGEventEnrichment> collection; // @synthesize collection=_collection;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;	// IMP=0x000000000047a7cf
- (id)initWithCollection:(id)arg1 meaningLabel:(id)arg2 createVerboseTitle:(_Bool)arg3 titleGenerationContext:(id)arg4;	// IMP=0x000000000047a6ad

@end
