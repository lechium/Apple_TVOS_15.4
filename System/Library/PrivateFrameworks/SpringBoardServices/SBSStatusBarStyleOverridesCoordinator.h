//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SBSStatusBarStyleOverridesCoordinatorDelegate;

@interface SBSStatusBarStyleOverridesCoordinator : NSObject
{
    unsigned long long _styleOverrides;	// 8 = 0x8
    id <SBSStatusBarStyleOverridesCoordinatorDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003cc2e
@property(readonly, nonatomic) unsigned long long styleOverrides; // @synthesize styleOverrides=_styleOverrides;
@property(nonatomic) __weak id <SBSStatusBarStyleOverridesCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_registrationInvalidated:(id)arg1;	// IMP=0x000000000003cb14
- (void)_handleStatusBarTapWithContext:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003c9f7
- (void)setRegisteredStyleOverrides:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000003c85f
- (void)dealloc;	// IMP=0x000000000003c75a

@end
