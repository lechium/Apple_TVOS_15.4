//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface CertInfoDescriptionCellContentView : UIView
{
    NSArray *_labelsAndValues;	// 8 = 0x8
    double _idealHeight;	// 16 = 0x10
    int _sizesCount;	// 24 = 0x18
    struct CGSize *_sizes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000f62c
- (void)layoutSubviews;	// IMP=0x000000000000f5eb
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000000f29b
- (double)rowHeight;	// IMP=0x000000000000f289
- (void)setLabelsAndValues:(id)arg1;	// IMP=0x000000000000f219
- (void)_recalculateIdealHeight;	// IMP=0x000000000000efbe
- (id)_valueFont;	// IMP=0x000000000000ef9d
- (id)_labelFont;	// IMP=0x000000000000ef7c
- (void)dealloc;	// IMP=0x000000000000ef36

@end

