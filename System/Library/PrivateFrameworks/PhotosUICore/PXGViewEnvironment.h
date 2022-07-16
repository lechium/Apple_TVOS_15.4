//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class UIColor, UITraitCollection;

@interface PXGViewEnvironment : NSObject <NSCopying>
{
    _Bool _accessibilityEnabled;	// 8 = 0x8
    _Bool _wantsFocusRing;	// 9 = 0x9
    _Bool _emphasized;	// 10 = 0xa
    UIColor *_backgroundColor;	// 16 = 0x10
    UIColor *_tintColor;	// 24 = 0x18
    UITraitCollection *_traitCollection;	// 32 = 0x20
    long long _userInterfaceStyle;	// 40 = 0x28
    struct CGColor *_selectionHighlightColor;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000883e28
@property(readonly, nonatomic) _Bool emphasized; // @synthesize emphasized=_emphasized;
@property(readonly, nonatomic) _Bool wantsFocusRing; // @synthesize wantsFocusRing=_wantsFocusRing;
@property(readonly, nonatomic) _Bool accessibilityEnabled; // @synthesize accessibilityEnabled=_accessibilityEnabled;
@property(readonly, nonatomic) struct CGColor *selectionHighlightColor; // @synthesize selectionHighlightColor=_selectionHighlightColor;
@property(readonly, nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000883dd0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000883b01
- (void)dealloc;	// IMP=0x0000000000883ac7
- (id)initWithView:(id)arg1 accessibilityEnabled:(_Bool)arg2;	// IMP=0x0000000000883793

@end

