//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableDictionary;

@interface TSKPieChartView : UIView
{
    NSMutableDictionary *_valueDict;	// 8 = 0x8
    NSMutableDictionary *_colorDict;	// 16 = 0x10
    NSMutableDictionary *_slices;	// 24 = 0x18
    NSArray *_sliceIdentifiers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000e2d0
@property(readonly, copy, nonatomic) NSArray *sliceIdentifiers; // @synthesize sliceIdentifiers=_sliceIdentifiers;
- (void)_updateSlices:(_Bool)arg1;	// IMP=0x000000000000dd50
- (void)updateValues:(id)arg1 forSlicesWithIdentifiers:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000000d950
- (id)initWithFrame:(struct CGRect)arg1 sliceIdentifiers:(id)arg2 colors:(id)arg3 values:(id)arg4;	// IMP=0x000000000000d340

@end

