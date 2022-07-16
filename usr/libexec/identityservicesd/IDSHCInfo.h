//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSHCInfo : NSObject
{
    long long _state;	// 8 = 0x8
    unsigned short _localCID;	// 16 = 0x10
    unsigned short _remoteCID;	// 18 = 0x12
    unsigned short _reqCount;	// 20 = 0x14
    unsigned int _lastSentSeq;	// 24 = 0x18
    unsigned int _lastSentAck;	// 28 = 0x1c
    void *_localContext;	// 32 = 0x20
    void *_remoteContext;	// 40 = 0x28
}

@property(nonatomic) unsigned int lastSentAck; // @synthesize lastSentAck=_lastSentAck;
@property(nonatomic) unsigned int lastSentSeq; // @synthesize lastSentSeq=_lastSentSeq;
@property(nonatomic) unsigned short remoteCID; // @synthesize remoteCID=_remoteCID;
@property(nonatomic) unsigned short localCID; // @synthesize localCID=_localCID;
@property(nonatomic) unsigned short reqCount; // @synthesize reqCount=_reqCount;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void *)remoteContext;	// IMP=0x00100000002a4d30
- (void *)localContext;	// IMP=0x00100000002a4d10
- (void)setRemoteContext:(void *)arg1;	// IMP=0x00100000002a4b10
- (void)setLocalContext:(void *)arg1;	// IMP=0x00100000002a4910
- (void)invalidate;	// IMP=0x00100000002a4680

@end

