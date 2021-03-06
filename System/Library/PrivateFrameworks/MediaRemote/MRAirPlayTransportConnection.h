//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/AVOutputDeviceCommunicationChannelDelegate-Protocol.h>

@class APReceiverMediaRemoteCommunicationChannel, AVOutputContextCommunicationChannel, AVOutputDeviceCommunicationChannel, MROSTransaction, NSDate, NSString;

@interface MRAirPlayTransportConnection <AVOutputDeviceCommunicationChannelDelegate>
{
    _Bool _channelClosed;	// 8 = 0x8
    APReceiverMediaRemoteCommunicationChannel *_apCommunicationChannel;	// 16 = 0x10
    AVOutputContextCommunicationChannel *_outputContextCommunicationChannel;	// 24 = 0x18
    AVOutputDeviceCommunicationChannel *_outputDeviceCommunicationChannel;	// 32 = 0x20
    NSDate *_dateCreated;	// 40 = 0x28
    NSDate *_mostRecentMessageSentDate;	// 48 = 0x30
    unsigned long long _totalMessagesSentCount;	// 56 = 0x38
    unsigned long long _totalBytesSentCount;	// 64 = 0x40
    NSDate *_mostRecentMessageReceivedDate;	// 72 = 0x48
    unsigned long long _totalMessagesReceivedCount;	// 80 = 0x50
    unsigned long long _totalBytesReceivedCount;	// 88 = 0x58
    MROSTransaction *_transaction;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000009f25a
@property(retain, nonatomic) MROSTransaction *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) unsigned long long totalBytesReceivedCount; // @synthesize totalBytesReceivedCount=_totalBytesReceivedCount;
@property(nonatomic) unsigned long long totalMessagesReceivedCount; // @synthesize totalMessagesReceivedCount=_totalMessagesReceivedCount;
@property(retain, nonatomic) NSDate *mostRecentMessageReceivedDate; // @synthesize mostRecentMessageReceivedDate=_mostRecentMessageReceivedDate;
@property(nonatomic) unsigned long long totalBytesSentCount; // @synthesize totalBytesSentCount=_totalBytesSentCount;
@property(nonatomic) unsigned long long totalMessagesSentCount; // @synthesize totalMessagesSentCount=_totalMessagesSentCount;
@property(retain, nonatomic) NSDate *mostRecentMessageSentDate; // @synthesize mostRecentMessageSentDate=_mostRecentMessageSentDate;
@property(retain, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(nonatomic) _Bool channelClosed; // @synthesize channelClosed=_channelClosed;
@property(readonly, nonatomic) AVOutputDeviceCommunicationChannel *outputDeviceCommunicationChannel; // @synthesize outputDeviceCommunicationChannel=_outputDeviceCommunicationChannel;
@property(readonly, nonatomic) AVOutputContextCommunicationChannel *outputContextCommunicationChannel; // @synthesize outputContextCommunicationChannel=_outputContextCommunicationChannel;
@property(readonly, nonatomic) APReceiverMediaRemoteCommunicationChannel *apCommunicationChannel; // @synthesize apCommunicationChannel=_apCommunicationChannel;
@property(readonly, nonatomic) id effectiveChannel;
- (void)communicationChannelDidClose:(id)arg1;	// IMP=0x000000000009f054
- (void)communicationChannel:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x000000000009f03f
- (void)closeWithError:(id)arg1;	// IMP=0x000000000009edf9
- (unsigned long long)_sendTransportData:(id)arg1;	// IMP=0x000000000009ec58
- (unsigned long long)sendTransportData:(id)arg1 options:(id)arg2;	// IMP=0x000000000009eaaf
- (_Bool)isValid;	// IMP=0x000000000009ea39
- (void)ingestData:(id)arg1;	// IMP=0x000000000009e8e7
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithOutputDeviceCommunicationChannel:(id)arg1;	// IMP=0x000000000009e5cc
- (id)initWithOutputContextCommunicationChannel:(id)arg1 outputContext:(id)arg2;	// IMP=0x000000000009e43b
- (id)initWithAPCommunicationChannel:(id)arg1;	// IMP=0x000000000009e360
- (id)_init;	// IMP=0x000000000009e261

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

