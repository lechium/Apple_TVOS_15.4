//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol PXDisplaySuggestionFetchResult;

@interface PXSuggestionsDataSource
{
    id <PXDisplaySuggestionFetchResult> _suggestions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004b47ae
@property(readonly, nonatomic) id <PXDisplaySuggestionFetchResult> suggestions; // @synthesize suggestions=_suggestions;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000004b464b
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;	// IMP=0x00000000004b4643
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x00000000004b45a4
- (long long)numberOfSections;	// IMP=0x00000000004b4599
- (id)initWithSuggestionsFetchResult:(id)arg1;	// IMP=0x00000000004b452b
- (id)init;	// IMP=0x00000000004b44b1

@end

