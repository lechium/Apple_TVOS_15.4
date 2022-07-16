//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, TSBonjourAdvertiseDelegate;

@interface TSBonjourAdvertise : NSObject
{
    struct _DNSServiceRef_t *_sdRef;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <TSBonjourAdvertiseDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002c04a
@property(nonatomic) id <TSBonjourAdvertiseDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x000000000002bff7
- (_Bool)stopAdvertising;	// IMP=0x000000000002bfc9
- (_Bool)startAdvertisingWithError:(id *)arg1;	// IMP=0x000000000002be0f
- (void)registeredServiceWithName:(const char *)arg1 regType:(const char *)arg2 domain:(const char *)arg3 withFlags:(unsigned int)arg4;	// IMP=0x000000000002bc1f
- (id)init;	// IMP=0x000000000002bbc7

@end

