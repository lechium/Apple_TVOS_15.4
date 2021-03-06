//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, UIImageSymbolConfiguration;

__attribute__((visibility("hidden")))
@interface VUINowPlayingButtonImageViewLayout : NSObject
{
    double _maxHeight;	// 8 = 0x8
    double _maxWidth;	// 16 = 0x10
    UIColor *_tintColor;	// 24 = 0x18
    UIColor *_darkTintColor;	// 32 = 0x20
    UIColor *_highlightColor;	// 40 = 0x28
    UIImageSymbolConfiguration *_imageSymbolConfiguration;	// 48 = 0x30
    struct UIEdgeInsets _margin;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000022a03
@property(retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration; // @synthesize imageSymbolConfiguration=_imageSymbolConfiguration;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *darkTintColor; // @synthesize darkTintColor=_darkTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
- (id)init;	// IMP=0x00000000000228ec

@end

