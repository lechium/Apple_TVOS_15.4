//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol NSObject;

@interface IDSSocketPairMessage : NSObject
{
    NSData *_underlyingData;	// 8 = 0x8
    unsigned char _command;	// 16 = 0x10
    id <NSObject> _context;	// 24 = 0x18
    NSString *_topic;	// 32 = 0x20
    _Bool _useDynamicServiceName;	// 40 = 0x28
    _Bool _cancelled;	// 41 = 0x29
    _Bool _wasWrittenToConnection;	// 42 = 0x2a
}

+ (id)messageWithCommand:(unsigned char)arg1 data:(id)arg2;	// IMP=0x00000000000a4384
+ (id)messageWithHeaderData:(id)arg1 data:(id)arg2;	// IMP=0x00000000000a4301
+ (id)messageWithData:(id)arg1;	// IMP=0x00000000000a421e
+ (unsigned int)dataLengthFromHeaderData:(id)arg1;	// IMP=0x00000000000a41ac
+ (unsigned int)headerDataSize;	// IMP=0x00000000000a41a1
- (void).cxx_destruct;	// IMP=0x00000000000a49de
@property(nonatomic) _Bool wasWrittenToConnection; // @synthesize wasWrittenToConnection=_wasWrittenToConnection;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool useDynamicServiceName; // @synthesize useDynamicServiceName=_useDynamicServiceName;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) id <NSObject> context; // @synthesize context=_context;
@property(readonly, nonatomic) unsigned char command; // @synthesize command=_command;
@property(readonly, nonatomic) NSData *underlyingData; // @synthesize underlyingData=_underlyingData;
- (id)_existingUnderlyingData;	// IMP=0x00000000000a484e
@property(readonly, nonatomic) unsigned long long underlyingDataLength;
- (id)_nonHeaderData;	// IMP=0x00000000000a4802
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;	// IMP=0x00000000000a478c

@end

