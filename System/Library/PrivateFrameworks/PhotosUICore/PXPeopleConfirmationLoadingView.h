//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;
@protocol PXPerson;

@interface PXPeopleConfirmationLoadingView : UIView
{
    unsigned long long _loadingState;	// 8 = 0x8
    UIView *_loadingStatusView;	// 16 = 0x10
    UILabel *_noneFoundLabel;	// 24 = 0x18
    UIActivityIndicatorView *_loadingIndicator;	// 32 = 0x20
    id <PXPerson> _person;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000018d244
@property(readonly, nonatomic) id <PXPerson> person; // @synthesize person=_person;
@property(readonly, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(readonly, nonatomic) UILabel *noneFoundLabel; // @synthesize noneFoundLabel=_noneFoundLabel;
@property(readonly, nonatomic) UIView *loadingStatusView; // @synthesize loadingStatusView=_loadingStatusView;
@property(nonatomic) unsigned long long loadingState; // @synthesize loadingState=_loadingState;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000018cfe2
- (id)init;	// IMP=0x000000000018cfac
- (id)initWithFrame:(struct CGRect)arg1 person:(id)arg2 localizedName:(id)arg3;	// IMP=0x000000000018c017

@end

