//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFCalendarAccessResource : WFAccessResource
{
}

+ (_Bool)isSystemResource;	// IMP=0x000000000026bdd9
+ (unsigned long long)entityType;	// IMP=0x000000000026bdd1
- (void)makeAvailableWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000026be06
- (unsigned long long)status;	// IMP=0x000000000026bdfb
- (id)protectedResourceDescription;	// IMP=0x000000000026bdee
- (id)associatedAppIdentifier;	// IMP=0x000000000026bde1

@end

