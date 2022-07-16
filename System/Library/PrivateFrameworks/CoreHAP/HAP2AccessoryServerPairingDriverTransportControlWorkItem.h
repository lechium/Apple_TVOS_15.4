//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

@interface HAP2AccessoryServerPairingDriverTransportControlWorkItem
{
    _Bool _connect;	// 8 = 0x8
    NSError *_cancelError;	// 16 = 0x10
}

+ (id)closeConnection;	// IMP=0x00000000001bce54
+ (id)openConnection;	// IMP=0x00000000001bce2d
- (void).cxx_destruct;	// IMP=0x00000000001bcc77
@property(retain, nonatomic) NSError *cancelError; // @synthesize cancelError=_cancelError;
@property(readonly, nonatomic) _Bool connect; // @synthesize connect=_connect;
- (void)cancelWithError:(id)arg1;	// IMP=0x00000000001bcb46
- (void)_finishWithError:(id)arg1;	// IMP=0x00000000001bcaa3
- (void)runForPairingDriver:(id)arg1;	// IMP=0x00000000001bc97f
- (id)initForClosing;	// IMP=0x00000000001bc96b
- (id)initForOpening;	// IMP=0x00000000001bc954
- (id)initWithConnect:(_Bool)arg1;	// IMP=0x00000000001bc912

@end

