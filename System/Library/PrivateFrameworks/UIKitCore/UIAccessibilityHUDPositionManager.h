//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface UIAccessibilityHUDPositionManager : NSObject
{
    NSMapTable *_managedHUDs;	// 8 = 0x8
    struct CGRect _keyboardAvoidanceArea;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000011533
- (void).cxx_destruct;	// IMP=0x0000000000012303
- (void)stopManagingPositionOfHUD:(id)arg1;	// IMP=0x00000000000122ed
- (void)beginManagingPositionOfHUD:(id)arg1 withReferenceView:(id)arg2;	// IMP=0x00000000000122ce
- (void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2;	// IMP=0x00000000000122a2
- (void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2 keyboardFrame:(struct CGRect)arg3;	// IMP=0x0000000000011b7d
- (void)keyboardFrameDidChange:(id)arg1;	// IMP=0x0000000000011a78
- (void)updateFramesForManagedHUDsUsingKeyboardFrame:(struct CGRect)arg1;	// IMP=0x00000000000118c8
- (void)dealloc;	// IMP=0x0000000000011853
- (id)init;	// IMP=0x0000000000011588

@end

