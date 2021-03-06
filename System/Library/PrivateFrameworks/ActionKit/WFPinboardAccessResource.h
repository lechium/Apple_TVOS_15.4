//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFPinboardAccessResource : WFAccessResource
{
}

+ (id)userInterfaceClasses;	// IMP=0x000000000022c624
+ (id)userInterfaceProtocol;	// IMP=0x000000000022c613
+ (id)pinboardToken;	// IMP=0x000000000022c5b7
+ (id)pinboardPassword;	// IMP=0x000000000022c55b
+ (id)pinboardUsername;	// IMP=0x000000000022c4fd
- (void)logOut;	// IMP=0x000000000022c9bd
- (_Bool)canLogOut;	// IMP=0x000000000022c9b5
- (id)username;	// IMP=0x000000000022c99b
- (id)resourceName;	// IMP=0x000000000022c98e
- (void)makeAvailableWithRemoteInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000022c8f9
- (unsigned long long)status;	// IMP=0x000000000022c7fb
- (id)protectedResourceDescription;	// IMP=0x000000000022c7ee
- (id)icon;	// IMP=0x000000000022c7ce
- (id)name;	// IMP=0x000000000022c7bd

@end

