//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/BSDescriptionProviding-Protocol.h>
#import <UserNotificationsKit/NCNotificationMuteAssertion-Protocol.h>

@class NSSet, NSString;

@interface NCNotificationThreadsMuteAssertion : NSObject <BSDescriptionProviding, NCNotificationMuteAssertion>
{
    NSSet *_mutedThreadIDs;	// 8 = 0x8
}

+ (id)threadsMuteAssertionWithMutedThreadIDs:(id)arg1;	// IMP=0x0000000000003ea7
- (void).cxx_destruct;	// IMP=0x000000000000439e
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000004382
- (id)succinctDescription;	// IMP=0x0000000000004332
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000004221
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000041d1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000041c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004139
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (unsigned long long)activeMuteAssertionLevelForThreadIdentifier:(id)arg1;	// IMP=0x0000000000003f5f
- (id)_initWithMutedThreadIDs:(id)arg1;	// IMP=0x0000000000003ef4

// Remaining properties
@property(readonly) Class superclass;

@end

