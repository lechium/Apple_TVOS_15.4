//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISystemShellApplication.h>

@class PREIdleSleepManager;

@interface PREApplication : UISystemShellApplication
{
    PREIdleSleepManager *_idleSleepManager;	// 8 = 0x8
}

+ (double)systemIdleSleepInterval;	// IMP=0x0040000000005950
+ (_Bool)registerAsSystemApp;	// IMP=0x0010000000005930
+ (_Bool)shouldCheckInWithBackboard;	// IMP=0x0010000000005910
+ (id)_newApplicationInitializationContext;	// IMP=0x00100000000055b0
+ (id)sharedApplication;	// IMP=0x00100000000053c0
- (void).cxx_destruct;	// IMP=0x0020000000005ac0
@property(retain, nonatomic) PREIdleSleepManager *idleSleepManager; // @synthesize idleSleepManager=_idleSleepManager;
- (void)applicationDidOrderOutContext:(id)arg1 screen:(id)arg2;	// IMP=0x00100000000059f0
- (void)applicationWillOrderInContext:(id)arg1 windowLevel:(float)arg2 screen:(id)arg3;	// IMP=0x0010000000005970
- (_Bool)_handlePhysicalButtonEvent:(id)arg1;	// IMP=0x0010000000005830
- (_Bool)_isSpringBoard;	// IMP=0x0010000000005810
- (_Bool)disablesFrontBoardImplicitWindowScenes;	// IMP=0x00100000000057f0
- (void)_createStatusBarWithRequestedStyle:(long long)arg1 orientation:(long long)arg2 hidden:(_Bool)arg3;	// IMP=0x00100000000057d0
- (id)init;	// IMP=0x00100000000053f0

@end
