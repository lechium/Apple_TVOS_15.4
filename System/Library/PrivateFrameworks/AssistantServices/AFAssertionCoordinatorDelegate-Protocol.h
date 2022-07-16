//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFAssertionCoordinator;
@protocol AFAssertion;

@protocol AFAssertionCoordinatorDelegate <NSObject>
- (void)assertionCoordinator:(AFAssertionCoordinator *)arg1 didRemoveAssertion:(id <AFAssertion>)arg2 isLastAssertion:(_Bool)arg3;
- (void)assertionCoordinator:(AFAssertionCoordinator *)arg1 didDeactivateAssertion:(id <AFAssertion>)arg2 isLastAssertion:(_Bool)arg3;
- (void)assertionCoordinator:(AFAssertionCoordinator *)arg1 didActivateAssertion:(id <AFAssertion>)arg2 isFirstAssertion:(_Bool)arg3;
- (void)assertionCoordinator:(AFAssertionCoordinator *)arg1 didAddAssertion:(id <AFAssertion>)arg2 isFirstAssertion:(_Bool)arg3;
@end

