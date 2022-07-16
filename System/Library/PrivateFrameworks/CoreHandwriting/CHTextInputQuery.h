//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol CHTextInputQueryTargetDataSource;

@interface CHTextInputQuery
{
    NSArray *_availableItems;	// 8 = 0x8
    id <CHTextInputQueryTargetDataSource> _textInputTargetsDataSource;	// 16 = 0x10
    double _totalDuration;	// 24 = 0x18
}

+ (id)queryItemStableIdentifierForStrokeGroup:(id)arg1;	// IMP=0x00000000000e18c0
- (void).cxx_destruct;	// IMP=0x00000000000e1890
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property __weak id <CHTextInputQueryTargetDataSource> textInputTargetsDataSource; // @synthesize textInputTargetsDataSource=_textInputTargetsDataSource;
- (id)debugName;	// IMP=0x00000000000e17e0
@property(copy, nonatomic, setter=_setAvailableItems:) NSArray *availableItems; // @synthesize availableItems=_availableItems;
- (id)q_textInputItemsFromSessionResult:(id)arg1;	// IMP=0x00000000000e1010
- (void)q_updateQueryResult;	// IMP=0x00000000000e0dd0
- (void)dealloc;	// IMP=0x00000000000e0d10
- (id)initWithRecognitionSession:(id)arg1;	// IMP=0x00000000000e0c50

@end

