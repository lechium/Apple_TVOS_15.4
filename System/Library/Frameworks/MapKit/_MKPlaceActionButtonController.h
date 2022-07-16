//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class NSString;
@protocol _MKPlaceActionControlledButton;

@interface _MKPlaceActionButtonController : NSObject <_MKInfoCardChildViewControllerAnalyticsDelegate>
{
    _Bool _disabled;	// 8 = 0x8
    int _analyticsAction;	// 12 = 0xc
    NSString *_buttonTitle;	// 16 = 0x10
    NSString *_buttonSubTitle;	// 24 = 0x18
    CDUnknownBlockType _buttonSelectedBlock;	// 32 = 0x20
    NSString *_symbolName;	// 40 = 0x28
    id <_MKPlaceActionControlledButton> _delegate;	// 48 = 0x30
}

+ (id)actionButtonControllerWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(CDUnknownBlockType)arg3 disabled:(_Bool)arg4 symbolName:(id)arg5;	// IMP=0x000000000008b9bb
+ (id)actionButtonControllerWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000008b995
- (void).cxx_destruct;	// IMP=0x000000000008bbdf
@property(readonly, nonatomic) int analyticsAction; // @synthesize analyticsAction=_analyticsAction;
@property(readonly, nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <_MKPlaceActionControlledButton> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(readonly, nonatomic) CDUnknownBlockType buttonSelectedBlock; // @synthesize buttonSelectedBlock=_buttonSelectedBlock;
@property(readonly, nonatomic) NSString *buttonSubTitle; // @synthesize buttonSubTitle=_buttonSubTitle;
@property(readonly, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
- (id)infoCardChildUnactionableUIElements;	// IMP=0x000000000008bb71
- (id)infoCardChildPossibleActions;	// IMP=0x000000000008baa9
- (void)buttonTextChanged;	// IMP=0x000000000008ba73
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 analyticsAction:(int)arg3 selectedBlock:(CDUnknownBlockType)arg4 disabled:(_Bool)arg5 symbolName:(id)arg6;	// IMP=0x000000000008b81b
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000008b7fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

