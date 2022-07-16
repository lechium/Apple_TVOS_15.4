//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPEmailCompatibleCaptionBarItemChild-Protocol.h>

@class LPPadding, LPPointUnit, LPTextRowStyle;

__attribute__((visibility("hidden")))
@interface LPVerticalTextStackViewStyle : NSObject <LPEmailCompatibleCaptionBarItemChild>
{
    _Bool _shouldAlignToBaselines;	// 8 = 0x8
    unsigned int _maximumNumberOfLines;	// 12 = 0xc
    LPPointUnit *_firstLineLeading;	// 16 = 0x10
    LPPointUnit *_lastLineDescent;	// 24 = 0x18
    LPTextRowStyle *_aboveTopCaption;	// 32 = 0x20
    LPTextRowStyle *_topCaption;	// 40 = 0x28
    LPTextRowStyle *_bottomCaption;	// 48 = 0x30
    LPTextRowStyle *_belowBottomCaption;	// 56 = 0x38
    LPPadding *_captionTextPadding;	// 64 = 0x40
    LPPadding *_emailCompatibleMargin;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000395cb
@property(readonly, retain, nonatomic) LPPadding *emailCompatibleMargin; // @synthesize emailCompatibleMargin=_emailCompatibleMargin;
@property(readonly, retain, nonatomic) LPPadding *captionTextPadding; // @synthesize captionTextPadding=_captionTextPadding;
@property(nonatomic) _Bool shouldAlignToBaselines; // @synthesize shouldAlignToBaselines=_shouldAlignToBaselines;
@property(nonatomic) unsigned int maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property(readonly, nonatomic) LPTextRowStyle *belowBottomCaption; // @synthesize belowBottomCaption=_belowBottomCaption;
@property(readonly, nonatomic) LPTextRowStyle *bottomCaption; // @synthesize bottomCaption=_bottomCaption;
@property(readonly, nonatomic) LPTextRowStyle *topCaption; // @synthesize topCaption=_topCaption;
@property(readonly, nonatomic) LPTextRowStyle *aboveTopCaption; // @synthesize aboveTopCaption=_aboveTopCaption;
@property(retain, nonatomic) LPPointUnit *lastLineDescent; // @synthesize lastLineDescent=_lastLineDescent;
@property(retain, nonatomic) LPPointUnit *firstLineLeading; // @synthesize firstLineLeading=_firstLineLeading;
- (void)applyToAllTextViewStyles:(CDUnknownBlockType)arg1;	// IMP=0x00000000000394b9
- (id)initWithPlatform:(long long)arg1 fontScalingFactor:(double)arg2;	// IMP=0x0000000000038d0a

@end

