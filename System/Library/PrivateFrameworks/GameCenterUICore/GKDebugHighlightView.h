//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface GKDebugHighlightView : UIView
{
    _Bool _isOval;	// 8 = 0x8
    UIColor *_color;	// 16 = 0x10
    NSString *_caption;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000c520
@property(nonatomic) _Bool isOval; // @synthesize isOval=_isOval;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000000c2f5
- (id)init;	// IMP=0x000000000000c257

@end

