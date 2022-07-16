//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton, UIView;
@protocol UIPrinterAccessoryViewDelegate;

__attribute__((visibility("hidden")))
@interface UIPrinterAccessoryView
{
    int _printerState;	// 8 = 0x8
    UIButton *_infoButton;	// 16 = 0x10
    UIView *_statusView;	// 24 = 0x18
    id <UIPrinterAccessoryViewDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000af8ae9
@property(nonatomic) int printerState; // @synthesize printerState=_printerState;
@property(nonatomic) __weak id <UIPrinterAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000af87cc
- (void)layoutSubviews;	// IMP=0x0000000000af84a4
- (void)infoButtonPressed:(id)arg1;	// IMP=0x0000000000af8190
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000af80c4

@end
