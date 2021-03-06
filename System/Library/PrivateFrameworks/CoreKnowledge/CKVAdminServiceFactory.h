//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreKnowledge/CKVAdminServiceProvider-Protocol.h>

@class CKVTaskController, CKVTaskHandler, NSString;

@interface CKVAdminServiceFactory <CKVAdminServiceProvider>
{
    CKVTaskHandler *_taskHandler;	// 8 = 0x8
    CKVTaskController *_daemonTaskController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e8b8e
- (id)adminService;	// IMP=0x00000000000e8adc
- (id)initWithQueue:(id)arg1 indexManager:(id)arg2 settings:(id)arg3 donateTaskProvider:(id)arg4 coalescenceManager:(id)arg5 daemonTaskController:(id)arg6 adminTaskController:(id)arg7;	// IMP=0x00000000000e897f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

