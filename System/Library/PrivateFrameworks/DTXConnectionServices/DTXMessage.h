//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSError;
@protocol NSSecureCoding><NSObject;

@interface DTXMessage : NSObject
{
    unsigned int _messageType;	// 8 = 0x8
    int _compressionType;	// 12 = 0xc
    unsigned int _status;	// 16 = 0x10
    NSData *_payloadData;	// 24 = 0x18
    unsigned long long _cost;	// 32 = 0x20
    NSData *_serializedData;	// 40 = 0x28
    id <NSSecureCoding><NSObject> _payloadObject;	// 48 = 0x30
    void *_auxiliary;	// 56 = 0x38
    _Atomic _Bool _immutable;	// 64 = 0x40
    _Bool _deserialized;	// 65 = 0x41
    _Bool _expectsReply;	// 66 = 0x42
    unsigned int _identifier;	// 68 = 0x44
    unsigned int _channelCode;	// 72 = 0x48
    unsigned int _conversationIndex;	// 76 = 0x4c
    NSDictionary *_auxiliaryPromoted;	// 80 = 0x50
}

+ (_Bool)extractSerializedCompressionInfoFromBuffer:(const char *)arg1 length:(unsigned long long)arg2 compressionType:(int *)arg3 uncompressedLength:(unsigned long long *)arg4 compressedDataOffset:(unsigned long long *)arg5;	// IMP=0x0000000000019641
+ (id)message;	// IMP=0x00000000000165c6
+ (id)messageWithSelector:(SEL)arg1 arguments:(id)arg2;	// IMP=0x00000000000164e2
+ (id)messageWithSelector:(SEL)arg1 objectArguments:(id)arg2;	// IMP=0x0000000000016362
+ (id)messageWithSelector:(SEL)arg1 typesAndArguments:(unsigned int)arg2;	// IMP=0x00000000000161b6
+ (id)messageWithData:(id)arg1;	// IMP=0x0000000000016133
+ (id)messageReferencingBuffer:(const void *)arg1 length:(unsigned long long)arg2 destructor:(CDUnknownBlockType)arg3;	// IMP=0x00000000000160c1
+ (id)messageWithBuffer:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000016078
+ (id)messageWithPrimitive:(void *)arg1;	// IMP=0x0000000000016006
+ (id)messageWithError:(id)arg1;	// IMP=0x0000000000015fb4
+ (id)messageWithObject:(id)arg1;	// IMP=0x0000000000015f62
+ (void)setReportCompressionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015a5c
+ (id)defaultAllowedSecureCodingClasses;	// IMP=0x000000000001534d
+ (void)initialize;	// IMP=0x00000000000150bc
- (void).cxx_destruct;	// IMP=0x0000000000019fab
@property(readonly, nonatomic) unsigned long long cost; // @synthesize cost=_cost;
@property(nonatomic) unsigned int errorStatus; // @synthesize errorStatus=_status;
@property(readonly, nonatomic) _Bool deserialized; // @synthesize deserialized=_deserialized;
@property(nonatomic) unsigned int conversationIndex; // @synthesize conversationIndex=_conversationIndex;
@property(nonatomic) _Bool expectsReply; // @synthesize expectsReply=_expectsReply;
@property(nonatomic) unsigned int channelCode; // @synthesize channelCode=_channelCode;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long serializedLength;
- (void)serializedFormApply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019dca
- (id)initWithSerializedForm:(const char *)arg1 length:(unsigned long long)arg2 destructor:(CDUnknownBlockType)arg3 compressor:(id)arg4;	// IMP=0x0000000000019c4c
- (id)initWithSerializedForm:(id)arg1 compressor:(id)arg2;	// IMP=0x0000000000019b65
- (id)_initWithReferencedSerializedForm:(id)arg1 compressor:(id)arg2 payloadSet:(CDUnknownBlockType)arg3;	// IMP=0x0000000000019995
- (id)_decompressedData:(id)arg1 compressor:(id)arg2 compressionType:(int)arg3;	// IMP=0x000000000001969d
- (void)invokeWithTarget:(id)arg1 replyChannel:(id)arg2 validator:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018a9a
- (_Bool)shouldInvokeWithTarget:(id)arg1;	// IMP=0x00000000000188e7
@property(nonatomic) unsigned int messageType;
@property(readonly, nonatomic) _Bool isBarrier;
@property(readonly, nonatomic) _Bool isDispatch;
@property(retain, nonatomic) NSError *error;
- (id)valueForMessageKey:(id)arg1;	// IMP=0x00000000000186fe
- (id)dataForMessageKey:(id)arg1;	// IMP=0x000000000001869a
- (id)stringForMessageKey:(id)arg1;	// IMP=0x0000000000018636
- (long long)integerForMessageKey:(id)arg1;	// IMP=0x00000000000185b0
- (id)_faultAuxiliaryValueOfType:(Class)arg1 forKey:(id)arg2;	// IMP=0x00000000000184db
- (void)setData:(id)arg1 forMessageKey:(id)arg2;	// IMP=0x000000000001842c
- (void)setInteger:(long long)arg1 forMessageKey:(id)arg2;	// IMP=0x0000000000018385
- (void)setString:(id)arg1 forMessageKey:(id)arg2;	// IMP=0x00000000000182d6
- (void)setObject:(id)arg1 forMessageKey:(id)arg2;	// IMP=0x00000000000182d0
- (id)_mutableAuxiliaryDictionary;	// IMP=0x000000000001821f
- (void)_appendTypesAndValues:(unsigned int)arg1 withKey:(id)arg2 list:(struct __va_list_tag [1])arg3;	// IMP=0x0000000000017f5a
- (void)_willModifyAuxiliary;	// IMP=0x0000000000017ec4
- (void)_makeBarrier;	// IMP=0x0000000000017da9
- (void)_makeImmutable;	// IMP=0x00000000000179b4
- (const void *)getBufferWithReturnedLength:(unsigned long long *)arg1;	// IMP=0x000000000001796c
@property(readonly, nonatomic) id <NSSecureCoding><NSObject> object;
- (id)objectWithAllowedClasses:(id)arg1;	// IMP=0x00000000000177ea
@property(copy, nonatomic) id <NSSecureCoding><NSObject> payloadObject;
- (void)_setPayloadBuffer:(const char *)arg1 length:(unsigned long long)arg2 shouldCopy:(_Bool)arg3 destructor:(CDUnknownBlockType)arg4;	// IMP=0x0000000000017385
- (void)dealloc;	// IMP=0x0000000000017338
- (id)initWithInvocation:(id)arg1;	// IMP=0x000000000001708e
- (id)initWithSelector:(SEL)arg1 objects:(id)arg2;	// IMP=0x0000000000016e22
- (id)initWithSelector:(SEL)arg1 firstArg:(id)arg2 remainingObjectArgs:(struct __va_list_tag [1])arg3;	// IMP=0x0000000000016b59
- (id)newReplyReferencingBuffer:(const void *)arg1 length:(unsigned long long)arg2 destructor:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016ac6
- (id)newReplyWithMessage:(id)arg1;	// IMP=0x0000000000016784
- (id)newReplyWithError:(id)arg1;	// IMP=0x00000000000166f1
- (id)newReplyWithObject:(id)arg1;	// IMP=0x000000000001665e
- (id)newReply;	// IMP=0x00000000000165d8
- (void)compressWithCompressor:(id)arg1 usingType:(int)arg2 forCompatibilityWithVersion:(long long)arg3;	// IMP=0x0000000000015b7e
- (id)descriptionWithRoutingInformation:(struct DTXMessageRoutingInfo)arg1;	// IMP=0x0000000000015a4c
- (id)description;	// IMP=0x0000000000015376
@property(readonly, nonatomic) NSData *data; // @synthesize data=_payloadData;

@end

