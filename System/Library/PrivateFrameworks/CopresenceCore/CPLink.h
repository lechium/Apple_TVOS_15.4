//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CopresenceCore/CPLinkProtocol-Protocol.h>
#import <CopresenceCore/NSCopying-Protocol.h>
#import <CopresenceCore/NSSecureCoding-Protocol.h>

@class CryptoHelper, IDSGroupSessionUnicastParameter, NSString;
@protocol CPLinkDelegate, OS_dispatch_queue, OS_nw_connection;

@interface CPLink : NSObject <CPLinkProtocol, NSSecureCoding, NSCopying>
{
    NSObject<OS_nw_connection> *_connection;	// 8 = 0x8
    CryptoHelper *_cryptoHelper;	// 16 = 0x10
    unsigned char _linkType;	// 24 = 0x18
    int _connectionState;	// 28 = 0x1c
    NSObject<OS_dispatch_queue> *_networkQueue;	// 32 = 0x20
    id <CPLinkDelegate> _delegate;	// 40 = 0x28
    IDSGroupSessionUnicastParameter *_unicastParam;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000025fb6
+ (long long)_getIDSDataModelForLinkType:(unsigned char)arg1;	// IMP=0x0000000000025f95
+ (unsigned int)_trafficClassForLinkPriority:(unsigned int)arg1;	// IMP=0x000000000002596c
+ (id)linkWithGroupSessionID:(id)arg1 localParticipantID:(unsigned long long)arg2 remoteParticipantID:(unsigned long long)arg3 dataMode:(long long)arg4 connectionIndex:(unsigned long long)arg5;	// IMP=0x0000000000024d79
- (void).cxx_destruct;	// IMP=0x000000000002631c
@property(copy, nonatomic) IDSGroupSessionUnicastParameter *unicastParam; // @synthesize unicastParam=_unicastParam;
@property int connectionState; // @synthesize connectionState=_connectionState;
@property(retain) NSObject<OS_nw_connection> *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <CPLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned char linkType; // @synthesize linkType=_linkType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *networkQueue; // @synthesize networkQueue=_networkQueue;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000261ac
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000260c4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002604b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025fbe
- (void)_readData:(id)arg1;	// IMP=0x0000000000025b6a
- (_Bool)_isUnreliableLink;	// IMP=0x0000000000025b42
- (void)_enableKeepAlive;	// IMP=0x0000000000025988
- (void)resetTrafficPriority:(unsigned int)arg1;	// IMP=0x0000000000025910
- (void)close;	// IMP=0x000000000002587c
- (_Bool)isReady;	// IMP=0x0000000000025863
- (void)sendUnicastData:(id)arg1 ofType:(unsigned char)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002552a
- (void)sendData:(id)arg1 ofType:(unsigned char)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000025518
- (void)requestNWConnectionWithReply:(unsigned char)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024fc3
- (id)initWithUnicastParameter:(id)arg1;	// IMP=0x0000000000024e24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
