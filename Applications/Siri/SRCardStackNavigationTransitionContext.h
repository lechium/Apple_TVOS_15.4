//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIView;
@protocol SiriUIDarkening;

@interface SRCardStackNavigationTransitionContext : NSObject
{
    _Bool _completed;	// 8 = 0x8
    double _percentComplete;	// 16 = 0x10
    UIView<SiriUIDarkening> *_backgroundPlatteredCardView;	// 24 = 0x18
    UIView<SiriUIDarkening> *_fromPlatteredCardView;	// 32 = 0x20
    UIView<SiriUIDarkening> *_toPlatteredCardView;	// 40 = 0x28
    double _transitionDuration;	// 48 = 0x30
    UIView *_containerView;	// 56 = 0x38
    CDUnknownBlockType _completion;	// 64 = 0x40
    struct CGRect _backgroundPlatteredCardViewOriginalFrame;	// 72 = 0x48
    struct CGRect _fromPlatteredCardViewOriginalFrame;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000005f898
@property(nonatomic, getter=_isCompleted, setter=_setCompleted:) _Bool completed; // @synthesize completed=_completed;
@property(copy, nonatomic, getter=_completion, setter=_setCompletion:) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(retain, nonatomic) UIView<SiriUIDarkening> *toPlatteredCardView; // @synthesize toPlatteredCardView=_toPlatteredCardView;
@property(retain, nonatomic) UIView<SiriUIDarkening> *fromPlatteredCardView; // @synthesize fromPlatteredCardView=_fromPlatteredCardView;
@property(nonatomic) struct CGRect fromPlatteredCardViewOriginalFrame; // @synthesize fromPlatteredCardViewOriginalFrame=_fromPlatteredCardViewOriginalFrame;
@property(retain, nonatomic) UIView<SiriUIDarkening> *backgroundPlatteredCardView; // @synthesize backgroundPlatteredCardView=_backgroundPlatteredCardView;
@property(nonatomic) struct CGRect backgroundPlatteredCardViewOriginalFrame; // @synthesize backgroundPlatteredCardViewOriginalFrame=_backgroundPlatteredCardViewOriginalFrame;
@property(nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
- (void)completeTransition:(_Bool)arg1;	// IMP=0x001000000005f64e
@property(readonly, nonatomic) long long semanticContentAttribute;
- (id)init;	// IMP=0x001000000005f5b3
- (id)initWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005f540

@end

