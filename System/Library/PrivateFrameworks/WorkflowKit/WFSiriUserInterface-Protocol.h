//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFUserInterfaceHost-Protocol.h>

@class INIntent, INInteraction, NSArray, NSString, NSUserActivity;

@protocol WFSiriUserInterface <WFUserInterfaceHost>
@property(readonly, nonatomic) long long executionContext;
@property(readonly, copy, nonatomic) NSArray *airPlayRouteIDs;
- (_Bool)isRunningInSiri;
- (void)configureIntent:(INIntent *)arg1;
- (_Bool)executeIntent:(INIntent *)arg1 completionHandler:(void (^)(INInteraction *, NSError *))arg2;
- (void)openUserActivity:(NSUserActivity *)arg1 bundleIdentifier:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)openInteractionInApp:(INInteraction *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)speakText:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
@end
