//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EAAccessory, NSInputStream, NSOutputStream, NSString;

@interface EASession : NSObject
{
    EAAccessory *_accessory;	// 8 = 0x8
    unsigned int _sessionID;	// 16 = 0x10
    NSString *_protocolString;	// 24 = 0x18
    NSInputStream *_inputStream;	// 32 = 0x20
    NSOutputStream *_outputStream;	// 40 = 0x28
    _Bool _openCompleted;	// 48 = 0x30
    int _sock;	// 52 = 0x34
    _Bool _useSocketInterfaceForEASession;	// 56 = 0x38
    NSString *_eaSessionUUIDFromCoreAccessories;	// 64 = 0x40
}

@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(readonly, nonatomic) NSString *protocolString; // @synthesize protocolString=_protocolString;
@property(readonly, nonatomic) EAAccessory *accessory; // @synthesize accessory=_accessory;
- (void)_handleIncomingEAData:(id)arg1;	// IMP=0x000000000000b0e8
- (id)EASessionUUID;	// IMP=0x000000000000b0de
- (void)setOpenCompleted:(_Bool)arg1;	// IMP=0x000000000000b072
- (_Bool)isOpenCompleted;	// IMP=0x000000000000b069
- (void)_endStreams;	// IMP=0x000000000000b02e
- (void)_streamClosed;	// IMP=0x000000000000afa0
- (unsigned int)_sessionID;	// IMP=0x000000000000af97
- (id)_shortDescription;	// IMP=0x000000000000af43
- (id)description;	// IMP=0x000000000000aebf
- (void)dealloc;	// IMP=0x000000000000ad74
- (id)initWithAccessory:(id)arg1 forProtocol:(id)arg2;	// IMP=0x000000000000a6fa
- (id)init;	// IMP=0x000000000000a6ce

@end

