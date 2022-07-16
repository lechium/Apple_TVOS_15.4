//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AMSUIWebModelInterface-Protocol.h>

@class AMSUIWebActivityIndicatorModel, AMSUIWebAppViewModel, NSDictionary, NSString;
@protocol AMSUIWebActionRunnable;

__attribute__((visibility("hidden")))
@interface AMSUIWebButtonModel : NSObject <AMSUIWebModelInterface>
{
    _Bool _bold;	// 8 = 0x8
    _Bool _enabled;	// 9 = 0x9
    id <AMSUIWebActionRunnable> _action;	// 16 = 0x10
    SEL _actionSelector;	// 24 = 0x18
    AMSUIWebActivityIndicatorModel *_activityIndicator;	// 32 = 0x20
    AMSUIWebAppViewModel *_appView;	// 40 = 0x28
    id _target;	// 48 = 0x30
    NSString *_title;	// 56 = 0x38
    long long _style;	// 64 = 0x40
    NSString *_systemImageName;	// 72 = 0x48
    NSDictionary *_underlyingJSObject;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000423a8
@property(retain, nonatomic) NSDictionary *underlyingJSObject; // @synthesize underlyingJSObject=_underlyingJSObject;
@property(retain, nonatomic) NSString *systemImageName; // @synthesize systemImageName=_systemImageName;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) id target; // @synthesize target=_target;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool bold; // @synthesize bold=_bold;
@property(retain, nonatomic) AMSUIWebAppViewModel *appView; // @synthesize appView=_appView;
@property(retain, nonatomic) AMSUIWebActivityIndicatorModel *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) SEL actionSelector; // @synthesize actionSelector=_actionSelector;
@property(retain, nonatomic) id <AMSUIWebActionRunnable> action; // @synthesize action=_action;
- (id)_imageForButtonWithNavStyle:(long long)arg1;	// IMP=0x0000000000042190
- (id)createDialogAction;	// IMP=0x00000000000420a7
- (id)_createProxCardItemWithTarget:(id)arg1 selector:(SEL)arg2;	// IMP=0x000000000004209f
- (id)_createSpinnerItem;	// IMP=0x0000000000041fd6
- (id)_createAppViewItemWithModel:(id)arg1;	// IMP=0x0000000000041a60
- (long long)_barButtonItemStyle;	// IMP=0x0000000000041a47
- (id)createBarButtonItemWithTarget:(id)arg1 selector:(SEL)arg2 navBar:(id)arg3;	// IMP=0x00000000000417ab
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000004134c
- (id)initWithAppViewObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000041247

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

