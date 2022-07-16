//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKActivity, GKClientProxy, GKPlayerCredential, GKStoreBag;

@interface GKDataTransport : NSObject
{
    GKStoreBag *_storeBag;	// 8 = 0x8
    GKClientProxy *_clientProxy;	// 16 = 0x10
    GKPlayerCredential *_credential;	// 24 = 0x18
    GKActivity *_activity;	// 32 = 0x20
}

+ (id)transportWithBag:(id)arg1 clientProxy:(id)arg2 credential:(id)arg3;	// IMP=0x0040000000045e3c
- (void).cxx_destruct;	// IMP=0x0020000000046d89
@property(retain, nonatomic) GKActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) GKPlayerCredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) GKClientProxy *clientProxy; // @synthesize clientProxy=_clientProxy;
@property(retain, nonatomic) GKStoreBag *storeBag; // @synthesize storeBag=_storeBag;
- (id)language;	// IMP=0x0010000000046d07
- (void)postRequest:(id)arg1 forBagKey:(id)arg2 result:(CDUnknownBlockType)arg3;	// IMP=0x001000000004693d
- (void)postRequest:(id)arg1 forBagKey:(id)arg2 response:(CDUnknownBlockType)arg3;	// IMP=0x0010000000046923
- (void)postRequest:(id)arg1 method:(id)arg2 forBagKey:(id)arg3 response:(CDUnknownBlockType)arg4;	// IMP=0x00100000000462b3
- (id)errorForBagError:(id)arg1 serverError:(id)arg2;	// IMP=0x0010000000046170
- (id)initWithBag:(id)arg1 clientProxy:(id)arg2 credential:(id)arg3;	// IMP=0x0010000000045ed1

@end

