//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AutomationMode/XAMAuthorizationProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface XAMLocalAuthenticationProvider : NSObject <XAMAuthorizationProvider>
{
}

- (id)authorizationWithError:(id *)arg1;	// IMP=0x0000000000003514
- (void)requestAuthorizationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000033db
- (id)localizedAuthorizationReason;	// IMP=0x0000000000003368

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

