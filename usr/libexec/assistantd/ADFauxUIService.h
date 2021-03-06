//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface ADFauxUIService
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000200fbe
- (void)_unhandledCommand:(id)arg1 error:(id)arg2 forDomain:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000200f2b
- (void)_unhandledCommand:(id)arg1 forDomain:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000200f11
- (void);	// IMP=0x0010000000200d3f
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000002007c4
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x00100000002007bc
- (id)commandsForDomain:(id)arg1;	// IMP=0x0010000000200735
- (id)domains;	// IMP=0x00100000002006cb
- (id)handle;	// IMP=0x00100000002006c2
- (id)init;	// IMP=0x00100000002005fe

@end

