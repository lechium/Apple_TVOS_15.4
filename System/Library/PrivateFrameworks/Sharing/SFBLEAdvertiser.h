//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CURetrier, NSArray, NSData, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface SFBLEAdvertiser : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    long long _advertiseState;	// 16 = 0x10
    _Bool _invalidateCalled;	// 24 = 0x18
    NSData *_payloadDataCurrent;	// 32 = 0x20
    NSData *_payloadDataPrevious;	// 40 = 0x28
    NSDictionary *_payloadFields;	// 48 = 0x30
    NSString *_payloadIdentifier;	// 56 = 0x38
    long long _payloadType;	// 64 = 0x40
    CURetrier *_startRetrier;	// 72 = 0x48
    struct LogCategory *_ucat;	// 80 = 0x50
    long long _advertiseRate;	// 88 = 0x58
    CDUnknownBlockType _advertiseStateChangedHandler;	// 96 = 0x60
    CDUnknownBlockType _bluetoothStateChangedHandler;	// 104 = 0x68
    CDUnknownBlockType _connectionHandler;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 120 = 0x78
    CDUnknownBlockType _invalidationHandler;	// 128 = 0x80
    NSArray *_lePipeDevices;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000000776b3
@property(copy, nonatomic) NSArray *lePipeDevices; // @synthesize lePipeDevices=_lePipeDevices;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType connectionHandler; // @synthesize connectionHandler=_connectionHandler;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType advertiseStateChangedHandler; // @synthesize advertiseStateChangedHandler=_advertiseStateChangedHandler;
@property(nonatomic) long long advertiseRate; // @synthesize advertiseRate=_advertiseRate;
- (id)_preparePayloadNearbyInfo:(int *)arg1;	// IMP=0x00000000000772ce
- (id)_preparePayloadNearbyAction:(int *)arg1;	// IMP=0x0000000000076dc9
- (int)_preparePayload:(_Bool)arg1;	// IMP=0x0000000000076c7e
- (void)_restartIfNeeded:(_Bool)arg1;	// IMP=0x0000000000076bfe
- (void)_invalidate;	// IMP=0x0000000000076acf
- (void)invalidate;	// IMP=0x0000000000076a6e
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000767e9
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007670e
- (void)setPayloadFields:(id)arg1;	// IMP=0x000000000007654a
- (void)setPayloadData:(id)arg1;	// IMP=0x0000000000076386
- (id)description;	// IMP=0x0000000000075f0e
- (void)dealloc;	// IMP=0x0000000000075e1e
- (id)initWithType:(long long)arg1;	// IMP=0x0000000000075d15

@end
