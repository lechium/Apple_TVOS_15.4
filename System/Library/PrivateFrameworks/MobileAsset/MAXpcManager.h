//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MAXpcManager : NSObject
{
}

- (void)dealloc;	// IMP=0x00000000000109b7
- (id)initWithServiceName:(id)arg1 callbackQueue:(id)arg2;	// IMP=0x000000000001085f
- (void)attachProgressHandler:(id)arg1 assetId:(id)arg2 callBack:(CDUnknownBlockType)arg3 withPurpose:(id)arg4;	// IMP=0x00000000000106b1
- (void)setClientConnectionHandler;	// IMP=0x0000000000010223
- (void)sendAsync:(id)arg1 clientHandler:(CDUnknownBlockType)arg2 taskDescriptor:(id)arg3;	// IMP=0x000000000000fafc
- (id)sendSync:(id)arg1;	// IMP=0x000000000000f90c
- (void)setClientName:(id)arg1;	// IMP=0x000000000000f8ab
- (void)ensureConnection;	// IMP=0x000000000000f7c4
- (void)clearConnection:(id)arg1;	// IMP=0x000000000000f68a

@end

