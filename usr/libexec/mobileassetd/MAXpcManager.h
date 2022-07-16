//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MAXpcManager : NSObject
{
}

- (void)dealloc;	// IMP=0x004000000003ce98
- (id)initWithServiceName:(id)arg1 callbackQueue:(id)arg2;	// IMP=0x001000000003cd40
- (void)attachProgressHandler:(id)arg1 assetId:(id)arg2 callBack:(CDUnknownBlockType)arg3 withPurpose:(id)arg4;	// IMP=0x001000000003cc35
- (void)setClientConnectionHandler;	// IMP=0x001000000003c7a7
- (void)sendAsync:(id)arg1 clientHandler:(CDUnknownBlockType)arg2 taskDescriptor:(id)arg3;	// IMP=0x001000000003c186
- (id)sendSync:(id)arg1;	// IMP=0x001000000003bf96
- (void)setClientName:(id)arg1;	// IMP=0x001000000003bf35
- (void)ensureConnection;	// IMP=0x001000000003be4e
- (void)clearConnection:(id)arg1;	// IMP=0x001000000003bd14

@end
