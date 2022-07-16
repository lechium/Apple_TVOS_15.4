//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInteraction-Protocol.h>

@class NSString, UIView;
@protocol UIIndirectScribbleInteractionDelegate;

@interface UIIndirectScribbleInteraction : NSObject <UIInteraction>
{
    long long __handlingWritingCount;	// 8 = 0x8
    _Bool _handlingWriting;	// 16 = 0x10
    _Bool __defaultSystemInteraction;	// 17 = 0x11
    id <UIIndirectScribbleInteractionDelegate> _delegate;	// 24 = 0x18
    UIView *_view;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000005a28ee
@property(readonly, nonatomic, getter=_isDefaultSystemInteraction) _Bool _defaultSystemInteraction; // @synthesize _defaultSystemInteraction=__defaultSystemInteraction;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic, getter=isHandlingWriting, setter=_setHandlingWriting:) _Bool handlingWriting; // @synthesize handlingWriting=_handlingWriting;
@property(readonly, nonatomic) __weak id <UIIndirectScribbleInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didMoveToView:(id)arg1;	// IMP=0x00000000005a2884
- (void)willMoveToView:(id)arg1;	// IMP=0x00000000005a287e
- (void)_setDefaultSystemInteraction:(_Bool)arg1;	// IMP=0x00000000005a2875
- (void)_setHandlingWritingCount:(long long)arg1;	// IMP=0x00000000005a283a
- (long long)_handlingWritingCount;	// IMP=0x00000000005a2830
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000005a27cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

