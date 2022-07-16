//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKLinkedApplicationObserver-Protocol.h>

@class NSArray, NSString, NSURL, PKLinkedApplication, UIActivityIndicatorView, UIColor;

@interface PKLinkedApplicationActionCell <PKLinkedApplicationObserver>
{
    UIActivityIndicatorView *_activityIndicator;	// 8 = 0x8
    UIColor *_textColor;	// 16 = 0x10
    UIColor *_disabledTextColor;	// 24 = 0x18
    PKLinkedApplication *_linkedApplication;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000023e731
@property(readonly, nonatomic) PKLinkedApplication *linkedApplication; // @synthesize linkedApplication=_linkedApplication;
@property(copy, nonatomic) UIColor *disabledTextColor; // @synthesize disabledTextColor=_disabledTextColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void)linkedApplicationDidChangeState:(id)arg1;	// IMP=0x000000000023e652
@property(copy, nonatomic) NSURL *appLaunchURL;
@property(copy, nonatomic) NSArray *storeIDs;
- (void)reloadApplicationStateIfNecessary;	// IMP=0x000000000023e5c1
- (void)layoutSubviews;	// IMP=0x000000000023e2b6
- (void)didMoveToWindow;	// IMP=0x000000000023e240
- (void)dealloc;	// IMP=0x000000000023e1f4
- (id)initWithLinkedApplication:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000023e11f
- (id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2 reuseIdentifier:(id)arg3;	// IMP=0x000000000023e069
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000023e050
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000023e008

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
