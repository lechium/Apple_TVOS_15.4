//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITextFieldBackgroundView;

__attribute__((visibility("hidden")))
@interface _UITextFieldSystemBackgroundProvider
{
    UITextFieldBackgroundView *_systemBackgroundView;	// 8 = 0x8
}

+ (id)systemStyleMetricsProvider;	// IMP=0x00000000005cb6a6
- (void).cxx_destruct;	// IMP=0x00000000005cbbc0
- (void)_buildDescription:(id)arg1;	// IMP=0x00000000005cbb1f
- (void)setProgress:(double)arg1;	// IMP=0x00000000005cbafe
- (void)enabledDidChangeAnimated:(_Bool)arg1;	// IMP=0x00000000005cba5a
- (void)removeFromTextField;	// IMP=0x00000000005cb9b4
- (id)overridingSetBackgroundColor:(id)arg1;	// IMP=0x00000000005cb994
- (id)overridingGetBackgroundColor;	// IMP=0x00000000005cb977
- (void)addToTextField:(id)arg1;	// IMP=0x00000000005cb87e
- (id)backgroundView;	// IMP=0x00000000005cb7b4
- (long long)associatedBorderStyle;	// IMP=0x00000000005cb7a9
- (Class)systemBackgroundViewClass;	// IMP=0x00000000005cb71a
- (id)preferredMetricsProvider;	// IMP=0x00000000005cb701

@end

