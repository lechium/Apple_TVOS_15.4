//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SilentRequestPresenter : NSObject
{
}

+ (void)presentEngagementRequest:(id)arg1 withClientInfo:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x002000000016f84d
+ (void)presentDialogRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000016f6ee
+ (void)presentAuthenticateRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000016f58f
- (void)presentEngagementRequest:(id)arg1 withClientInfo:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x002000000016ff71
- (void)presentDialogRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000016fe3a
- (void)presentAuthenticateRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000016f9c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
