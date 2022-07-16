//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface TVViewLayout : NSObject
{
    _Bool _acceptsFocus;	// 8 = 0x8
    _Bool _centerGrowth;	// 9 = 0x9
    UIColor *_tintColor;	// 16 = 0x10
    UIColor *_darkTintColor;	// 24 = 0x18
    UIColor *_backgroundColor;	// 32 = 0x20
    UIColor *_darkBackgroundColor;	// 40 = 0x28
    double _height;	// 48 = 0x30
    double _maxHeight;	// 56 = 0x38
    double _maxWidth;	// 64 = 0x40
    double _minHeight;	// 72 = 0x48
    double _minWidth;	// 80 = 0x50
    double _width;	// 88 = 0x58
    double _focusSizeIncrease;	// 96 = 0x60
    NSString *_focusAlign;	// 104 = 0x68
    double _lineSpacing;	// 112 = 0x70
    long long _alignment;	// 120 = 0x78
    long long _contentAlignment;	// 128 = 0x80
    UIColor *_highlightColor;	// 136 = 0x88
    long long _position;	// 144 = 0x90
    NSString *_highlightStyle;	// 152 = 0x98
    double _interitemSpacing;	// 160 = 0xa0
    NSString *_progressStyle;	// 168 = 0xa8
    NSString *_group;	// 176 = 0xb0
    struct UIEdgeInsets _margin;	// 184 = 0xb8
    struct UIEdgeInsets _padding;	// 216 = 0xd8
    struct UIEdgeInsets _focusMargin;	// 248 = 0xf8
    struct CGAffineTransform _focusTransform;	// 280 = 0x118
}

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;	// IMP=0x00000000000e06a9
+ (Class)layoutClassForElement:(id)arg1;	// IMP=0x00000000000e03ef
- (void).cxx_destruct;	// IMP=0x00000000000e1466
@property(copy, nonatomic) NSString *group; // @synthesize group=_group;
@property(copy, nonatomic) NSString *progressStyle; // @synthesize progressStyle=_progressStyle;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) struct CGAffineTransform focusTransform; // @synthesize focusTransform=_focusTransform;
@property(copy, nonatomic) NSString *highlightStyle; // @synthesize highlightStyle=_highlightStyle;
@property(nonatomic) _Bool centerGrowth; // @synthesize centerGrowth=_centerGrowth;
@property(nonatomic) _Bool acceptsFocus; // @synthesize acceptsFocus=_acceptsFocus;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) long long contentAlignment; // @synthesize contentAlignment=_contentAlignment;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(copy, nonatomic) NSString *focusAlign; // @synthesize focusAlign=_focusAlign;
@property(nonatomic) double focusSizeIncrease; // @synthesize focusSizeIncrease=_focusSizeIncrease;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) struct UIEdgeInsets focusMargin; // @synthesize focusMargin=_focusMargin;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) UIColor *darkBackgroundColor; // @synthesize darkBackgroundColor=_darkBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *darkTintColor; // @synthesize darkTintColor=_darkTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
- (id)init;	// IMP=0x00000000000e109a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e0458
- (CDUnknownBlockType)tv_layoutPropertyGetterForStyle:(id)arg1;	// IMP=0x000000000005f51f
- (CDUnknownBlockType)tv_layoutPropertySetterForStyle:(id)arg1;	// IMP=0x000000000005e1c1
- (double)defaultFocusSizeIncrease;	// IMP=0x00000000000e14e7

@end

