//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInteraction-Protocol.h>

@class NSString, UIView;
@protocol UIScribbleInteractionDelegate;

@interface UIScribbleInteraction : NSObject <UIInteraction>
{
    _Bool _handlingWriting;	// 8 = 0x8
    _Bool __defaultSystemInteraction;	// 9 = 0x9
    id <UIScribbleInteractionDelegate> _delegate;	// 16 = 0x10
    UIView *_view;	// 24 = 0x18
}

+ (double)_recommendedBlankSpaceHeight;	// IMP=0x0000000000be9d9c
+ (_Bool)isPencilInputExpected;	// IMP=0x0000000000be9d90
+ (void)_lastEventSourceChanged:(long long)arg1;	// IMP=0x0000000000be9d2f
- (void).cxx_destruct;	// IMP=0x0000000000be9e23
@property(readonly, nonatomic, getter=_isDefaultSystemInteraction) _Bool _defaultSystemInteraction; // @synthesize _defaultSystemInteraction=__defaultSystemInteraction;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic, getter=isHandlingWriting) _Bool handlingWriting; // @synthesize handlingWriting=_handlingWriting;
@property(readonly, nonatomic) __weak id <UIScribbleInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didMoveToView:(id)arg1;	// IMP=0x0000000000be9dc2
- (void)willMoveToView:(id)arg1;	// IMP=0x0000000000be9dbc
- (void)_setDefaultSystemInteraction:(_Bool)arg1;	// IMP=0x0000000000be9db3
- (void)_setHandlingWriting:(_Bool)arg1;	// IMP=0x0000000000be9daa
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000be9ccb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

