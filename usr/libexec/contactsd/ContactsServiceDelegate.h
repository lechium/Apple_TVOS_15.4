//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNScheduler, CNTCC;

@interface ContactsServiceDelegate : NSObject
{
    CDUnknownBlockType _serviceProvider;	// 8 = 0x8
    id <CNScheduler> _workQueue;	// 16 = 0x10
    id <CNTCC> _tccServices;	// 24 = 0x18
}

+ (id)os_log;	// IMP=0x0020000000009f75
- (void).cxx_destruct;	// IMP=0x002000000000a533
@property(readonly, nonatomic) id <CNTCC> tccServices; // @synthesize tccServices=_tccServices;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy, nonatomic) CDUnknownBlockType serviceProvider; // @synthesize serviceProvider=_serviceProvider;
- (_Bool)isClientAuthorizedAccessWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x001000000000a31b
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000a1c5
- (id)initWithServiceProvider:(CDUnknownBlockType)arg1 schedulerProvider:(id)arg2 tccServices:(id)arg3;	// IMP=0x001000000000a0cf
- (id)init;	// IMP=0x0010000000009fd1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

