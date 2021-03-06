//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <CacheDelete/CacheDeleteServiceProtocol-Protocol.h>

@interface CacheDeleteRemoteExtensionContext : NSExtensionContext <CacheDeleteServiceProtocol>
{
}

+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x000000000002bc15
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x000000000002bba9
- (void)servicePing:(CDUnknownBlockType)arg1;	// IMP=0x000000000002cf5f
- (void)serviceNotify:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002cc54
- (void)serviceCallback:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002cb48
- (void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002c796
- (void)serviceCancelPurge:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c4d1
- (void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002c11f
- (void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002bd17
- (id)init;	// IMP=0x000000000002bc81

@end

