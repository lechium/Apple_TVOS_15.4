//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSStallDetector, MISSING_TYPE, NSData, NSMutableArray, NSMutableData, NSMutableDictionary, NSSet, NSString;
@protocol IDSSocketPairConnectionDelegate, OS_dispatch_queue;

@interface IDSSocketPairConnection : NSObject
{
    NSMutableData *_headerData;	// 8 = 0x8
    NSMutableData *_currentMessageData;	// 16 = 0x10
    id <IDSSocketPairConnectionDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
    struct os_unfair_lock_s _lock;	// 40 = 0x28
    unsigned long long _currentOutgoingDataIndex;	// 48 = 0x30
    NSData *_outgoingData;	// 56 = 0x38
    NSMutableArray *_outgoingMessageArray;	// 64 = 0x40
    unsigned int _currentOutgoingFragmentedMessageID;	// 72 = 0x48
    unsigned long long _inFlightMessageCountLowWaterMark;	// 80 = 0x50
    NSMutableDictionary *_incomingDataFragments;	// 88 = 0x58
    NSString *_connectionID;	// 96 = 0x60
    unsigned int _fragmentationSize;	// 104 = 0x68
    _Bool _isConnected;	// 108 = 0x6c
    unsigned int _currentDataLength;	// 112 = 0x70
    long long _bytesReceived;	// 120 = 0x78
    double _prevBPS;	// 128 = 0x80
    int _connectedSocket;	// 136 = 0x88
    _Bool _writeSocketIsResumed;	// 140 = 0x8c
    double _lastDateCheck;	// 144 = 0x90
    _Bool _notifyWhenConnectionReceivesBytes;	// 152 = 0x98
    long long _priority;	// 160 = 0xa0
    CDUnknownBlockType _encryptionBlock;	// 168 = 0xa8
    CDUnknownBlockType _decryptionBlock;	// 176 = 0xb0
    unsigned int _maxAllowedMessageSize;	// 184 = 0xb8
    double _lastSocketActivityTime;	// 192 = 0xc0
    IDSStallDetector *_outgoingStallDetector;	// 200 = 0xc8
    unsigned long long _linkType;	// 208 = 0xd0
    _Bool _hasEndedSession;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x002000000005fb20
@property(nonatomic) _Bool hasEndedSession; // @synthesize hasEndedSession=_hasEndedSession;
@property(retain, nonatomic) IDSStallDetector *outgoingStallDetector; // @synthesize outgoingStallDetector=_outgoingStallDetector;
@property(copy, nonatomic) NSString *connectionID; // @synthesize connectionID=_connectionID;
@property(nonatomic) unsigned int maxAllowedMessageSize; // @synthesize maxAllowedMessageSize=_maxAllowedMessageSize;
- (void)setOTREncryptionBlock:(CDUnknownBlockType)arg1 decryptionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000005f5b0
- (void)setNotifyWhenConnectionReceivesBytes:(_Bool)arg1;	// IMP=0x001000000005f560
- (void)_endSession;	// IMP=0x001000000005f1c0
- (_Bool)sendDataMessage:(id)arg1 canFragment:(_Bool)arg2;	// IMP=0x001000000005ed10
- (_Bool)sendDataMessage:(id)arg1;	// IMP=0x001000000005eca0
- (void)_sendToConnectedSocket;	// IMP=0x001000000005dd30
- (_Bool)_queueNextOutgoingData;	// IMP=0x001000000005cb40
- (void)_processBytesAvailable;	// IMP=0x001000000005b590
- (_Bool)_processIncomingMessage:(id)arg1;	// IMP=0x001000000005a590
- (void)processStoredIncomingMessage:(id)arg1;	// IMP=0x001000000005a190
- (void)removePendingMessagesForProtectionClass:(unsigned int)arg1;	// IMP=0x00100000000598a0
- (long long)_read:(char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x00100000000593b0
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000059230
@property(nonatomic) unsigned long long inFlightMessageCountLowWaterMark;
@property(nonatomic) unsigned int fragmentationSize;
@property(readonly, nonatomic) NSSet *inFlightMessages;
@property(readonly, nonatomic) double lastSocketActivityTime;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned long long inFlightMessageCount;
@property(readonly, nonatomic) _Bool isConnected;
- (void)endSession;	// IMP=0x0010000000058750
- (MISSING_TYPE *)dealloc;	// IMP=0x0010000000058660
- (void)start;	// IMP=0x00100000000583f0
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 priority:(long long)arg4 connectionID:(id)arg5 linkType:(unsigned long long)arg6;	// IMP=0x0010000000057d70

@end
