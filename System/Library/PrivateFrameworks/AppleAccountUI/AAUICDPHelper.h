//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface AAUICDPHelper : NSObject
{
    UIViewController *_presentingViewController;	// 8 = 0x8
    _Bool _forceInline;	// 16 = 0x10
}

+ (id)cdpContextForPrimaryAccountWithAuthenticationResults:(id)arg1;	// IMP=0x000000000002e27a
+ (id)cdpContextForPrimaryAccount;	// IMP=0x000000000002e200
+ (id)cdpContextForAccount:(id)arg1;	// IMP=0x000000000002e111
+ (id)helperWithPresenter:(id)arg1;	// IMP=0x000000000002e0be
- (void).cxx_destruct;	// IMP=0x000000000002e446
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) _Bool forceInline; // @synthesize forceInline=_forceInline;
- (id)cdpStateControllerWithContext:(id)arg1;	// IMP=0x000000000002e34d
- (id)cdpStateControllerForPrimaryAccount;	// IMP=0x000000000002e2e6

@end

