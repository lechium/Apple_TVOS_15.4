//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PXCPLUIStatus : NSObject
{
    _Bool _paused;	// 8 = 0x8
    _Bool _inResetSync;	// 9 = 0x9
    _Bool _hasCompletedInitialSync;	// 10 = 0xa
    _Bool _isExiting;	// 11 = 0xb
    float _progress;	// 12 = 0xc
    NSString *_stateDescription;	// 16 = 0x10
    NSString *_failureDescription;	// 24 = 0x18
    NSString *_actionTitle;	// 32 = 0x20
    NSString *_actionConfirmationAlertTitle;	// 40 = 0x28
    NSString *_actionConfirmationAlertSubtitle;	// 48 = 0x30
    NSString *_actionConfirmationAlertButtonTitle;	// 56 = 0x38
    CDUnknownBlockType _action;	// 64 = 0x40
    NSString *_referencedItemsDescription;	// 72 = 0x48
    long long _state;	// 80 = 0x50
    unsigned long long _activity;	// 88 = 0x58
    long long _pauseReason;	// 96 = 0x60
    unsigned long long _numberOfItemsFailingToUpload;	// 104 = 0x68
    unsigned long long _numberOfPhotoAssets;	// 112 = 0x70
    unsigned long long _numberOfVideoAssets;	// 120 = 0x78
    unsigned long long _numberOfOtherAssets;	// 128 = 0x80
    long long _serviceAction;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000566f41
@property(nonatomic) long long serviceAction; // @synthesize serviceAction=_serviceAction;
@property(nonatomic) unsigned long long numberOfOtherAssets; // @synthesize numberOfOtherAssets=_numberOfOtherAssets;
@property(nonatomic) unsigned long long numberOfVideoAssets; // @synthesize numberOfVideoAssets=_numberOfVideoAssets;
@property(nonatomic) unsigned long long numberOfPhotoAssets; // @synthesize numberOfPhotoAssets=_numberOfPhotoAssets;
@property(nonatomic) unsigned long long numberOfItemsFailingToUpload; // @synthesize numberOfItemsFailingToUpload=_numberOfItemsFailingToUpload;
@property(nonatomic) _Bool isExiting; // @synthesize isExiting=_isExiting;
@property(nonatomic) _Bool hasCompletedInitialSync; // @synthesize hasCompletedInitialSync=_hasCompletedInitialSync;
@property(nonatomic) _Bool inResetSync; // @synthesize inResetSync=_inResetSync;
@property(nonatomic) long long pauseReason; // @synthesize pauseReason=_pauseReason;
@property(nonatomic) unsigned long long activity; // @synthesize activity=_activity;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *referencedItemsDescription; // @synthesize referencedItemsDescription=_referencedItemsDescription;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *actionConfirmationAlertButtonTitle; // @synthesize actionConfirmationAlertButtonTitle=_actionConfirmationAlertButtonTitle;
@property(retain, nonatomic) NSString *actionConfirmationAlertSubtitle; // @synthesize actionConfirmationAlertSubtitle=_actionConfirmationAlertSubtitle;
@property(retain, nonatomic) NSString *actionConfirmationAlertTitle; // @synthesize actionConfirmationAlertTitle=_actionConfirmationAlertTitle;
@property(retain, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) NSString *failureDescription; // @synthesize failureDescription=_failureDescription;
@property(retain, nonatomic) NSString *stateDescription; // @synthesize stateDescription=_stateDescription;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000566d0c
- (id)description;	// IMP=0x0000000000566906
- (id)init;	// IMP=0x00000000005668c0

@end
