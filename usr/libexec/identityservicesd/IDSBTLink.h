//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBScalablePipe, NSString;
@protocol IDSLinkDelegate;

@interface IDSBTLink : NSObject
{
    NSString *_cbuuid;	// 8 = 0x8
    NSString *_deviceUniqueID;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    unsigned long long _totalBytesSent;	// 32 = 0x20
    unsigned long long _totalPacketsSent;	// 40 = 0x28
    unsigned long long _totalBytesReceived;	// 48 = 0x30
    unsigned long long _totalPacketsReceived;	// 56 = 0x38
    unsigned long long _previousBytesSent;	// 64 = 0x40
    unsigned long long _previousPacketsSent;	// 72 = 0x48
    unsigned long long _previousBytesReceived;	// 80 = 0x50
    unsigned long long _previousPacketsReceived;	// 88 = 0x58
    unsigned long long _discardedRawBytes;	// 96 = 0x60
    unsigned long long _correctRawBytesSinceLastCorruption;	// 104 = 0x68
    unsigned long long _correctFramesSinceLastCorruption;	// 112 = 0x70
    double _previousReportTime;	// 120 = 0x78
    NSString *_linkID;	// 128 = 0x80
    CBScalablePipe *_pipe;	// 136 = 0x88
    void *_dataChannel;	// 144 = 0x90
    unsigned int _dataChannelPendingTx;	// 152 = 0x98
    unsigned int _totalReceivedRawBytes;	// 156 = 0x9c
    CDStruct_727fadec *_currentIncomingPacket;	// 160 = 0xa0
    CDStruct_727fadec *_currentOutgoingPacket;	// 168 = 0xa8
    _Bool _resyncing;	// 176 = 0xb0
    _Bool _magnetCorruptionRecoveryMode;	// 177 = 0xb1
    _Bool _previousCorruptionsDetected;	// 178 = 0xb2
    double _lastResyncTime;	// 184 = 0xb8
    double _lastNewMagnetCorruptionTime;	// 192 = 0xc0
    double _lastDownstreamDumpLogTime;	// 200 = 0xc8
    double _lastUpstreamDumpLogTime;	// 208 = 0xd0
    _Bool _writeSuspended;	// 216 = 0xd8
    _Bool _remoteHostAwake;	// 217 = 0xd9
    _Bool _postedFirstHostStateChange;	// 218 = 0xda
    _Bool _linkSuspended;	// 219 = 0xdb
    id <IDSLinkDelegate> _delegate;	// 224 = 0xe0
    id <IDSLinkDelegate> _alternateDelegate;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x00200000006b2190
@property(readonly, copy) NSString *linkID; // @synthesize linkID=_linkID;
@property __weak id <IDSLinkDelegate> alternateDelegate; // @synthesize alternateDelegate=_alternateDelegate;
@property __weak id <IDSLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
- (void);	// IMP=0x00100000006b2010
@property(retain) NSString *cbuuid; // @synthesize cbuuid=_cbuuid;
@property(readonly) unsigned long long state; // @synthesize state=_state;
- (void)injectFakePacket:(CDStruct_727fadec *)arg1;	// IMP=0x00100000006b1de0
- (void)suspendLink:(_Bool)arg1;	// IMP=0x00100000006b19c0
- (_Bool)isLinkSuspended;	// IMP=0x00100000006b19a0
- (id)generateLinkReport:(double)arg1 isCurrentLink:(_Bool)arg2;	// IMP=0x00100000006b1540
- (void)_processOutgoingPacket;	// IMP=0x00100000006b0b60
- (void)_processIncomingPacket;	// IMP=0x00100000006adb50
- (long long)_readFromDataChannel:(void *)arg1 size:(unsigned long long)arg2 withFlags:(int)arg3 isSynced:(_Bool *)arg4;	// IMP=0x00100000006adb20
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000006ad5f0
- (void)flushBuffer:(unsigned long long)arg1;	// IMP=0x00100000006ad580
- (unsigned long long)sendPacketBufferArray:(struct **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x00100000006ad500
- (unsigned long long)sendPacketBuffer:(CDStruct_727fadec *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00100000006acd00
- (void)invalidate;	// IMP=0x00100000006accb0
- (void)remoteDetectedCorruption;	// IMP=0x00100000006acae0
- (void)start;	// IMP=0x00100000006ac970
- (void)triggerBTCorruptionRecovery;	// IMP=0x00100000006ac940
- (void)_submitMagnetCorruptionMetricsToAWD;	// IMP=0x00100000006ac5c0
- (void)_resetMagnetCorruptionMetrics;	// IMP=0x00100000006ac580
- (void)_dumpLogs:(double)arg1 isDownstream:(_Bool)arg2;	// IMP=0x00100000006abc90
- (void)_localDetectedCorruption;	// IMP=0x00100000006abb10
- (void)dealloc;	// IMP=0x00100000006ab810
- (id)initWithPipe:(id)arg1 useSkywalkChannel:(_Bool)arg2 withDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x00100000006aab50
- (id)copyLinkStatsDict;	// IMP=0x00100000006aa9f0
@property(readonly, getter=linkTypeString) NSString *linkTypeString;
@property(readonly) unsigned long long headerOverhead;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

