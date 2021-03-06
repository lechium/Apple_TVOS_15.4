//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/BSInvalidatable-Protocol.h>

@class NSIndexPath, NSString, UIAction;
@protocol _AVUnifiedPlayerContextMenuRepresentationActionObservationDelegate;

__attribute__((visibility("hidden")))
@interface _AVUnifiedPlayerContextMenuRepresentationActionObserver : NSObject <BSInvalidatable>
{
    UIAction *_action;	// 8 = 0x8
    NSIndexPath *_indexPath;	// 16 = 0x10
    id <_AVUnifiedPlayerContextMenuRepresentationActionObservationDelegate> _delegate;	// 24 = 0x18
}

+ (id)observeAction:(id)arg1 atIndexPath:(id)arg2 withDelegate:(id)arg3;	// IMP=0x0000000000116a9e
+ (id)_keyPathsToObserve;	// IMP=0x0000000000116a6e
- (void).cxx_destruct;	// IMP=0x0000000000116a3d
@property(readonly, nonatomic) __weak id <_AVUnifiedPlayerContextMenuRepresentationActionObservationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) UIAction *action; // @synthesize action=_action;
- (void)_stopObserving:(id)arg1;	// IMP=0x00000000001168a3
- (void)_startObserving:(id)arg1;	// IMP=0x0000000000116729
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000001166eb
- (void)invalidate;	// IMP=0x000000000011669e
- (void)dealloc;	// IMP=0x0000000000116660
- (id)initWithAction:(id)arg1 indexPath:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000116590

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

