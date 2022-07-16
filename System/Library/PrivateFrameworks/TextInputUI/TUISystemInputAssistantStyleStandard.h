//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputUI/TUISystemInputAssistantStyle-Protocol.h>

@class UIColor, UIImageSymbolConfiguration;

@interface TUISystemInputAssistantStyleStandard : NSObject <TUISystemInputAssistantStyle>
{
}

@property(readonly, nonatomic) _Bool clipsToBounds;
@property(readonly, nonatomic) _Bool shouldAnimatePredictionCandidate;
@property(readonly, nonatomic) double separatorMargin;
@property(readonly, nonatomic) UIImageSymbolConfiguration *barButtonImageSymbolConfiguration;
@property(readonly, nonatomic) double minimumInterBarItemSpace;
@property(readonly, nonatomic) double barButtonWidth;
@property(readonly, nonatomic) _Bool useContinuousCornerInHighlight;
@property(readonly, nonatomic) double highlightCornerRadius;
@property(readonly, nonatomic) double highlightMargin;
@property(readonly, nonatomic) UIColor *predictionHighlightColor;
@property(readonly, nonatomic) UIColor *predictionSeparatorColor;
@property(readonly, nonatomic) _Bool drawsPredictionBackdropView;
@property(readonly, nonatomic) _Bool enableButtonTintColor;

@end

