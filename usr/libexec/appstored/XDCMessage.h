//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, XDCDevice;

@interface XDCMessage : NSObject
{
    _Bool _reply;	// 8 = 0x8
    unsigned short _messageType;	// 10 = 0xa
    NSData *_messagePayload;	// 16 = 0x10
    XDCDevice *_device;	// 24 = 0x18
    NSString *_messageID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000195093
@property(getter=isReply) _Bool reply; // @synthesize reply=_reply;
@property(retain) NSString *messageID; // @synthesize messageID=_messageID;
@property(retain) XDCDevice *device; // @synthesize device=_device;
@property(readonly) unsigned short messageType; // @synthesize messageType=_messageType;
@property(readonly) NSData *messagePayload; // @synthesize messagePayload=_messagePayload;
- (id)replyWithProtobuf:(id)arg1 messageType:(unsigned short)arg2;	// IMP=0x0010000000194f7c
- (id)copyIDSRepresentation;	// IMP=0x0010000000194f44
- (id)initWithProtobuf:(id)arg1 device:(id)arg2 messageID:(id)arg3;	// IMP=0x0010000000194e64
- (id)initWithProtobuf:(id)arg1 messageType:(unsigned short)arg2;	// IMP=0x0010000000194ddd

@end
