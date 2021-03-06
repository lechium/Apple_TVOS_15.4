//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DTActivityTraceTapMemo, NSMutableArray, NSMutableData, NSString, XRConstantEngineeringValue, XRIntKeyedDictionary;

@interface DTActivityTapTableDecoder : NSObject
{
    NSMutableArray *_memos;	// 8 = 0x8
    DTActivityTraceTapMemo *_currentChunk;	// 16 = 0x10
    NSMutableData *_stack;	// 24 = 0x18
    struct unique_ptr<DTTableRowDecoder, std::default_delete<DTTableRowDecoder>> _tableRowDecoder;	// 32 = 0x20
    struct unique_ptr<DTStateActionDecoder, std::default_delete<DTStateActionDecoder>> _decoder;	// 40 = 0x28
    unsigned char _osLogTableID;	// 48 = 0x30
    XRIntKeyedDictionary *_processesByPID;	// 56 = 0x38
    XRIntKeyedDictionary *_threadsByTID;	// 64 = 0x40
    char _buffer[1024];	// 72 = 0x48
    struct {
        unsigned char time;
        unsigned char category;
        unsigned char subsystem;
        unsigned char senderImagePath;
        unsigned char format;
        unsigned char message;
        unsigned char backtrace;
        unsigned char process;
        unsigned char thread;
        unsigned char messageType;
        unsigned char senderImageUUID;
        unsigned char senderImageOffset;
    } _columns;	// 1096 = 0x448
    _Bool _outOfData;	// 1108 = 0x454
    _Bool _failed;	// 1109 = 0x455
}

- (id).cxx_construct;	// IMP=0x0000000000013b91
- (void).cxx_destruct;	// IMP=0x0000000000013b18
@property(readonly, nonatomic, getter=hasFailed) _Bool failed; // @synthesize failed=_failed;
@property(readonly, nonatomic, getter=isOutOfData) _Bool outOfData; // @synthesize outOfData=_outOfData;
@property(readonly, nonatomic) XRConstantEngineeringValue *message;
@property(readonly, nonatomic) XRConstantEngineeringValue *backtrace;
@property(readonly, nonatomic) unsigned long long senderImageOffset;
@property(readonly, nonatomic) XRConstantEngineeringValue *senderImageUUID;
@property(readonly, nonatomic) unsigned char messageType;
@property(readonly, nonatomic) XRConstantEngineeringValue *thread;
@property(readonly, nonatomic) XRConstantEngineeringValue *process;
@property(readonly, nonatomic) NSString *format;
@property(readonly, nonatomic) NSString *senderImagePath;
@property(readonly, nonatomic) NSString *category;
@property(readonly, nonatomic) NSString *subsystem;
@property(readonly, nonatomic) unsigned long long time;
- (_Bool)next;	// IMP=0x000000000001151c
- (void)addData:(id)arg1;	// IMP=0x000000000001148d
- (void)addMemo:(id)arg1;	// IMP=0x0000000000011427
- (id)init;	// IMP=0x0000000000011280

@end

