//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFCameraAccessResource : WFAccessResource
{
}

+ (_Bool)isSystemResource;	// IMP=0x000000000029dda2
- (void)makeAvailableWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000029dd30
- (id)importErrorReasonForStatus:(unsigned long long)arg1;	// IMP=0x000000000029dce1
- (id)errorReasonForStatus:(unsigned long long)arg1;	// IMP=0x000000000029dc92
- (unsigned long long)status;	// IMP=0x000000000029dc87
- (id)protectedResourceDescription;	// IMP=0x000000000029dc7a
- (id)associatedAppIdentifier;	// IMP=0x000000000029dc6d

@end

