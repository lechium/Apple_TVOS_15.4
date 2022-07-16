//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUI/AMSUIWebActionRunnable-Protocol.h>

@class AMSUIWebLoadingPageModel, AMSUIWebNavigationBarModel, NSDictionary, NSString;
@protocol AMSUIWebPageProvider;

__attribute__((visibility("hidden")))
@interface AMSUIWebFlowAction <AMSUIWebActionRunnable>
{
    _Bool _deferredPresentation;	// 8 = 0x8
    id _actionData;	// 16 = 0x10
    long long _animationType;	// 24 = 0x18
    NSString *_backgroundColor;	// 32 = 0x20
    AMSUIWebLoadingPageModel *_loadingPage;	// 40 = 0x28
    NSDictionary *_metrics;	// 48 = 0x30
    AMSUIWebNavigationBarModel *_navigationBar;	// 56 = 0x38
    long long _popToRelativeIndex;	// 64 = 0x40
    long long _presentationType;	// 72 = 0x48
    id <AMSUIWebPageProvider> _replacementPage;	// 80 = 0x50
    long long _replacementType;	// 88 = 0x58
    struct CGSize _modalWindowSize;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000005899e
@property(nonatomic) long long replacementType; // @synthesize replacementType=_replacementType;
@property(retain, nonatomic) id <AMSUIWebPageProvider> replacementPage; // @synthesize replacementPage=_replacementPage;
@property(nonatomic) long long presentationType; // @synthesize presentationType=_presentationType;
@property(nonatomic) long long popToRelativeIndex; // @synthesize popToRelativeIndex=_popToRelativeIndex;
@property(retain, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) struct CGSize modalWindowSize; // @synthesize modalWindowSize=_modalWindowSize;
@property(retain, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) AMSUIWebLoadingPageModel *loadingPage; // @synthesize loadingPage=_loadingPage;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool deferredPresentation; // @synthesize deferredPresentation=_deferredPresentation;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
@property(retain, nonatomic) id actionData; // @synthesize actionData=_actionData;
- (void)_runWithType:(long long)arg1 options:(id)arg2;	// IMP=0x00000000000584f2
- (id)runAction;	// IMP=0x000000000005817e
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000057b7b
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000057b38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

