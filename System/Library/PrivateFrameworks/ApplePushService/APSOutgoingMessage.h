//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface APSOutgoingMessage
{
    _Bool _ackReceived;	// 40 = 0x28
}

@property(nonatomic) _Bool ackReceived; // @synthesize ackReceived=_ackReceived;
- (void)setChannelID:(id)arg1;	// IMP=0x0000000000012dcf
- (id)channelID;	// IMP=0x0000000000012db6
- (void)setPushFlags:(unsigned int)arg1;	// IMP=0x0000000000012d5c
- (unsigned int)pushFlags;	// IMP=0x0000000000012d11
@property(nonatomic) unsigned long long ackTimestamp;
@property(nonatomic) _Bool sendRetried;
- (id)sentTimestamp;	// IMP=0x0000000000012bae
- (void)setSentTimestamp:(id)arg1;	// IMP=0x0000000000012b95
- (id)originator;	// IMP=0x0000000000012b7c
- (void)setOriginator:(id)arg1;	// IMP=0x0000000000012b63
@property(copy, nonatomic) NSString *senderTokenName;
- (void)setPushType:(unsigned long long)arg1;	// IMP=0x0000000000012ad7
- (unsigned long long)pushType;	// IMP=0x0000000000012a8c
- (void)setPriority:(long long)arg1;	// IMP=0x0000000000012a32
- (long long)priority;	// IMP=0x00000000000129e7
@property(nonatomic) unsigned long long payloadLength;
@property(nonatomic) unsigned long long payloadFormat;
- (void)setTimedOut:(_Bool)arg1;	// IMP=0x0000000000012843
- (_Bool)hasTimedOut;	// IMP=0x00000000000127f8
- (void)setCancelled:(_Bool)arg1;	// IMP=0x000000000001279e
- (_Bool)wasCancelled;	// IMP=0x0000000000012753
- (void)setSendInterface:(long long)arg1;	// IMP=0x00000000000126f9
- (long long)sendInterface;	// IMP=0x00000000000126a2
- (void)setSent:(_Bool)arg1;	// IMP=0x0000000000012648
- (_Bool)wasSent;	// IMP=0x00000000000125fd
@property(nonatomic, getter=isCritical) _Bool critical;
- (_Bool)isEager;	// IMP=0x00000000000124ac
- (id)rawTimeoutTime;	// IMP=0x000000000001242a
- (id)eagernessTimeoutTime;	// IMP=0x00000000000123a3
- (id)sendTimeoutTime;	// IMP=0x0000000000012321
- (unsigned long long)_effectiveSendTimeout;	// IMP=0x000000000001230f
@property(nonatomic) unsigned long long timeout;
- (void)setTimestamp:(id)arg1;	// IMP=0x0000000000012251
- (id)timestamp;	// IMP=0x0000000000012238
- (void)setMessageID:(unsigned long long)arg1;	// IMP=0x00000000000121de
- (unsigned long long)messageID;	// IMP=0x0000000000012193

@end

