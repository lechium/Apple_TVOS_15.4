//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

@interface GKButtonStyle : NSObject
{
    _Bool _clipToBounds;	// 8 = 0x8
    double _cornerRadius;	// 16 = 0x10
    UIColor *_backgroundColor;	// 24 = 0x18
    id _compositingFilter;	// 32 = 0x20
    struct UIEdgeInsets _titleEdgeInsets;	// 40 = 0x28
}

+ (id)standardStyle;	// IMP=0x0000000000058f53
+ (id)defaultStyle;	// IMP=0x0000000000058ed1
- (void).cxx_destruct;	// IMP=0x00000000000591f5
@property(nonatomic) id compositingFilter; // @synthesize compositingFilter=_compositingFilter;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct UIEdgeInsets titleEdgeInsets; // @synthesize titleEdgeInsets=_titleEdgeInsets;
@property(nonatomic) _Bool clipToBounds; // @synthesize clipToBounds=_clipToBounds;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)applyToButton:(id)arg1;	// IMP=0x0000000000059070
- (id)initWithCornerRadius:(double)arg1 andBackgroundColor:(id)arg2;	// IMP=0x0000000000058fd5

@end
