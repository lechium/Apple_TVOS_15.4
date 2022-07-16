//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol KVDonateServiceProvider, OS_dispatch_queue;

@interface KVDonator : NSObject
{
    long long _itemType;	// 8 = 0x8
    NSString *_originAppId;	// 16 = 0x10
    NSString *_userId;	// 24 = 0x18
    NSString *_deviceId;	// 32 = 0x20
    NSObject<KVDonateServiceProvider> *_serviceProvider;	// 40 = 0x28
    unsigned long long _timeoutNanos;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

+ (id)donatorWithServiceProvider:(id)arg1 itemType:(long long)arg2 originAppId:(id)arg3 deviceId:(id)arg4 userId:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000005ff4
+ (id)donatorWithServiceProvider:(id)arg1 itemType:(long long)arg2 originAppId:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000005f5f
+ (id)donatorWithItemType:(long long)arg1 originAppId:(id)arg2 userId:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000005d72
+ (id)donatorWithItemType:(long long)arg1 originAppId:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000005cdc
+ (void)initialize;	// IMP=0x0000000000005cb8
- (void).cxx_destruct;	// IMP=0x000000000000561e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)donateWithOptions:(unsigned short)arg1 usingStream:(CDUnknownBlockType)arg2;	// IMP=0x000000000000513d
- (id)initWithQueue:(id)arg1 itemType:(long long)arg2 originAppId:(id)arg3 deviceId:(id)arg4 userId:(id)arg5 serviceProvider:(id)arg6 timeoutNanos:(unsigned long long)arg7;	// IMP=0x000000000000502b
- (id)init;	// IMP=0x0000000000004fe3

@end

