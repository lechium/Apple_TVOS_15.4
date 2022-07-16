//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFInstapaperAccessResource : WFAccessResource
{
}

+ (id)userInterfaceClasses;	// IMP=0x00000000002f88b5
+ (id)userInterfaceProtocol;	// IMP=0x00000000002f88a4
+ (void)setInstapaperTokenSecret:(id)arg1;	// IMP=0x00000000002f87e2
+ (id)instapaperTokenSecret;	// IMP=0x00000000002f871d
+ (id)keychain;	// IMP=0x00000000002f86e3
+ (void)setInstapaperToken:(id)arg1;	// IMP=0x00000000002f8666
+ (id)instapaperToken;	// IMP=0x00000000002f8608
+ (void)setInstapaperUsername:(id)arg1;	// IMP=0x00000000002f858b
+ (id)instapaperUsername;	// IMP=0x00000000002f852d
+ (void)initialize;	// IMP=0x00000000002f8509
- (void)logOut;	// IMP=0x00000000002f8af6
- (_Bool)canLogOut;	// IMP=0x00000000002f8aee
- (id)username;	// IMP=0x00000000002f8ad4
- (id)resourceName;	// IMP=0x00000000002f8ac3
- (void)makeAvailableWithRemoteInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002f8a2e
- (unsigned long long)status;	// IMP=0x00000000002f8981
- (id)protectedResourceDescription;	// IMP=0x00000000002f8974
- (id)associatedAppIdentifier;	// IMP=0x00000000002f8967

@end

