//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIStatusBar_Placeholder
{
}

+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(_Bool)arg3 inWindow:(id)arg4 isAzulBLinked:(_Bool)arg5;	// IMP=0x0000000000cc48fd
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000cc4da5
- (void)_setHidden:(_Bool)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000cc4d15
- (double)defaultDoubleHeight;	// IMP=0x0000000000cc4d0c
- (long long)currentStyle;	// IMP=0x0000000000cc4ccf
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000cc4c0e
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000cc4b51
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000cc4a67
- (void)_requestStyle:(long long)arg1 partStyles:(id)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 animationParameters:(id)arg5 forced:(_Bool)arg6;	// IMP=0x0000000000cc49fb
- (id)_initWithFrame:(struct CGRect)arg1 showForegroundView:(_Bool)arg2 wantsServer:(_Bool)arg3 inProcessStateProvider:(id)arg4;	// IMP=0x0000000000cc47b7

@end

