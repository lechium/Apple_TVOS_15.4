//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIAutonomousSingleAppModeConfiguration;

@interface UIAutonomousSingleAppModeSession : NSObject
{
    _Bool _active;	// 8 = 0x8
    UIAutonomousSingleAppModeConfiguration *_effectiveConfiguration;	// 16 = 0x10
}

+ (void)__gaxTrampoline_requestSessionWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001682e
+ (void)requestSessionWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000167b2
+ (id)__gaxTrampoline_currentlyActiveSession;	// IMP=0x00000000000167aa
+ (id)currentlyActiveSession;	// IMP=0x0000000000016775
- (void).cxx_destruct;	// IMP=0x0000000000016c2d
@property(copy, nonatomic) UIAutonomousSingleAppModeConfiguration *effectiveConfiguration; // @synthesize effectiveConfiguration=_effectiveConfiguration;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)__gaxTrampoline_endSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016a4b
- (void)endWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000169e9
- (void)_guidedAccessStateDidChange:(id)arg1;	// IMP=0x0000000000016726
- (void)dealloc;	// IMP=0x00000000000166b1
- (id)initWithEffectiveConfiguration:(id)arg1;	// IMP=0x00000000000165f4

@end
