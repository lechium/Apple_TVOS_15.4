//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKSubcredentialInvitationFlowControllerOperation-Protocol.h>
#import <PassKitUI/PKSubcredentialProvisioningControllerDelegate-Protocol.h>

@class PKAppletSubcredentialSharingSession;
@protocol PKSessionDelegate;

@protocol PKSubcredentialInvitationProvisioningFlowControllerOperation <PKSubcredentialInvitationFlowControllerOperation, PKSubcredentialProvisioningControllerDelegate>
- (PKAppletSubcredentialSharingSession *)sharingSessionWithDelegate:(id <PKSessionDelegate>)arg1;
@end

