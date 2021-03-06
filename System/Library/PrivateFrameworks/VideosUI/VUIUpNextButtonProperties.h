//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView, VUIUpNextStateView;
@protocol VUIUpNextButtonProtocol;

__attribute__((visibility("hidden")))
@interface VUIUpNextButtonProperties : NSObject
{
    _Bool _isWatchListed;	// 8 = 0x8
    _Bool _dismissOnSelect;	// 9 = 0x9
    _Bool _confirmationShouldWaitCompletion;	// 10 = 0xa
    _Bool _hasUpdated;	// 11 = 0xb
    VUIUpNextStateView *_addedStateView;	// 16 = 0x10
    VUIUpNextStateView *_removedStateView;	// 24 = 0x18
    UIView<VUIUpNextButtonProtocol> *_delegate;	// 32 = 0x20
    NSString *_canonicalID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000debf7
@property(nonatomic) _Bool hasUpdated; // @synthesize hasUpdated=_hasUpdated;
@property(nonatomic) _Bool confirmationShouldWaitCompletion; // @synthesize confirmationShouldWaitCompletion=_confirmationShouldWaitCompletion;
@property(nonatomic) _Bool dismissOnSelect; // @synthesize dismissOnSelect=_dismissOnSelect;
@property(nonatomic) _Bool isWatchListed; // @synthesize isWatchListed=_isWatchListed;
@property(retain, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(nonatomic) __weak UIView<VUIUpNextButtonProtocol> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VUIUpNextStateView *removedStateView; // @synthesize removedStateView=_removedStateView;
@property(readonly, nonatomic) VUIUpNextStateView *addedStateView; // @synthesize addedStateView=_addedStateView;
- (void)_errorInUpdatingState:(id)arg1;	// IMP=0x00000000000de9b6
- (void)dealloc;	// IMP=0x00000000000de934
- (void)updateButtonContentView;	// IMP=0x00000000000de8ce
- (void)callAPIAndToggleUpNextState;	// IMP=0x00000000000de56d
- (void)_toggleUpNextState;	// IMP=0x00000000000de49d
- (void)removeNotificationObserver;	// IMP=0x00000000000de418
- (void)setupNotificationObserver;	// IMP=0x00000000000de38c
- (id)init;	// IMP=0x00000000000de313

@end

