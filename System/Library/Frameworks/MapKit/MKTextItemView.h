//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MKTextItemView : UIView
{
    NSArray *_labels;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000096cb9
@property(copy, nonatomic) NSArray *labels; // @synthesize labels=_labels;
- (void)setTextColor:(id)arg1;	// IMP=0x0000000000096b46
- (id)initWithStrings:(id)arg1 labelsFont:(id)arg2 labelsSpacing:(double)arg3 labelsNumberOfLines:(long long)arg4;	// IMP=0x0000000000096541

@end
