//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSStreamDelegate-Protocol.h>

@class NSInputStream, NSOutputStream, NSString;

__attribute__((visibility("hidden")))
@interface AVAirTransportStreams <NSStreamDelegate>
{
    NSInputStream *_inputStream;	// 8 = 0x8
    NSOutputStream *_outputStream;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000003b57
@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x0000000000003782
- (void)_inputStreamDidClose;	// IMP=0x0000000000003729
- (void)_outputStreamCanWrite;	// IMP=0x0000000000003717
- (void)_outputStreamDidOpen;	// IMP=0x000000000000367a
- (void)_inputStreamHasBytesAvailable;	// IMP=0x00000000000034ac
- (long long)_writeData:(id)arg1;	// IMP=0x0000000000003404
- (id)_readAvailableData;	// IMP=0x00000000000033b6
- (_Bool)canWrite;	// IMP=0x0000000000003372
- (_Bool)isReadyToSend;	// IMP=0x000000000000332a
- (id)_readDataNonBlockingUpToMaxLength:(unsigned long long)arg1;	// IMP=0x0000000000002ee4
@property(readonly, copy) NSString *description;
- (void)open;	// IMP=0x0000000000002d27
- (void)invalidate;	// IMP=0x0000000000002b3b
- (id)initWithInput:(id)arg1 output:(id)arg2;	// IMP=0x00000000000029d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

