//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TouchRemote/TROperationHandler-Protocol.h>

@class NSString;

@interface TRSetupConfigurationOperationHandler : NSObject <TROperationHandler>
{
    CDUnknownBlockType _configurationHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000003f8b
@property(copy, nonatomic) CDUnknownBlockType configurationHandler; // @synthesize configurationHandler=_configurationHandler;
- (void)_handleConfigurationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003d6a
- (void)registerMessageHandlersForSession:(id)arg1;	// IMP=0x0000000000003ccb
- (id)initWithConfigurationHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003c60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

