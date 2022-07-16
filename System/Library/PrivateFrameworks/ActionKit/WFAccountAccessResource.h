//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAccessResource.h>

@class NSArray;

@interface WFAccountAccessResource : WFAccessResource
{
    id _observer;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

+ (id)userInterfaceClasses;	// IMP=0x00000000002574e1
+ (id)userInterfaceProtocol;	// IMP=0x00000000002574d0
- (void).cxx_destruct;	// IMP=0x0000000000257315
- (id)settingsUIDefinition;	// IMP=0x00000000002571c2
- (void)logOut;	// IMP=0x000000000025706f
- (_Bool)supportsMultipleAccounts;	// IMP=0x0000000000257044
- (_Bool)canLogOut;	// IMP=0x0000000000256fe7
- (id)username;	// IMP=0x0000000000256e50
- (id)resourceName;	// IMP=0x0000000000256e25
- (id)name;	// IMP=0x0000000000256da1
- (void)makeAvailableWithRemoteInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000256cc4
- (unsigned long long)status;	// IMP=0x0000000000256b85
- (id)importErrorReasonForStatus:(unsigned long long)arg1;	// IMP=0x0000000000256b02
- (id)errorReasonForStatus:(unsigned long long)arg1;	// IMP=0x0000000000256a7f
- (id)protectedResourceDescription;	// IMP=0x0000000000256a06
@property(readonly, copy, nonatomic) NSArray *accounts;
@property(readonly, nonatomic) Class accountClass;
- (void)dealloc;	// IMP=0x0000000000256903
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000002567d0

@end
