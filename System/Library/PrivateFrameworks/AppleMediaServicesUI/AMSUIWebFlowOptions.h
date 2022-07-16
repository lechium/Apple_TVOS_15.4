//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSUIWebLoadingPageModel, AMSUIWebNavigationBarModel, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebFlowOptions : NSObject
{
    _Bool _animated;	// 8 = 0x8
    _Bool _deferredPresentation;	// 9 = 0x9
    _Bool _disableTimeout;	// 10 = 0xa
    _Bool _reuseExistingPage;	// 11 = 0xb
    _Bool _suppressErrorPage;	// 12 = 0xc
    NSString *_backgroundColor;	// 16 = 0x10
    AMSUIWebLoadingPageModel *_loadingPage;	// 24 = 0x18
    long long _modalPresentationStyle;	// 32 = 0x20
    long long _modalTransitionStyle;	// 40 = 0x28
    AMSUIWebNavigationBarModel *_navigationBar;	// 48 = 0x30
    NSDictionary *_pageData;	// 56 = 0x38
    struct CGSize _modalWindowSize;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000005cb1d
@property(nonatomic) _Bool suppressErrorPage; // @synthesize suppressErrorPage=_suppressErrorPage;
@property(retain, nonatomic) NSDictionary *pageData; // @synthesize pageData=_pageData;
@property(retain, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) struct CGSize modalWindowSize; // @synthesize modalWindowSize=_modalWindowSize;
@property(nonatomic) long long modalTransitionStyle; // @synthesize modalTransitionStyle=_modalTransitionStyle;
@property(nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property(retain, nonatomic) AMSUIWebLoadingPageModel *loadingPage; // @synthesize loadingPage=_loadingPage;
@property(nonatomic) _Bool reuseExistingPage; // @synthesize reuseExistingPage=_reuseExistingPage;
@property(nonatomic) _Bool disableTimeout; // @synthesize disableTimeout=_disableTimeout;
@property(nonatomic) _Bool deferredPresentation; // @synthesize deferredPresentation=_deferredPresentation;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;

@end

