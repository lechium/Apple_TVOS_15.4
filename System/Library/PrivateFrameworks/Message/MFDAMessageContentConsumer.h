//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFDAStreamingContentConsumer-Protocol.h>

@class DAMailMessage, NSMutableData, NSString;
@protocol MFCollectingDataConsumer, MFMessageDataConsumerFactory;

@interface MFDAMessageContentConsumer : NSObject <MFDAStreamingContentConsumer>
{
    int _requestedFormat;	// 8 = 0x8
    id <MFCollectingDataConsumer> _dataConsumer;	// 16 = 0x10
    id <MFCollectingDataConsumer> _alternatePartConsumer;	// 24 = 0x18
    id <MFMessageDataConsumerFactory> _consumerFactory;	// 32 = 0x20
    _Bool _triedCreatingAlternatePartConsumer;	// 40 = 0x28
    _Bool _didBeginStreaming;	// 41 = 0x29
    _Bool _succeeded;	// 42 = 0x2a
    NSMutableData *_bodyData;	// 48 = 0x30
    double _timeOfLastActivity;	// 56 = 0x38
    DAMailMessage *_message;	// 64 = 0x40
}

@property(readonly, nonatomic) double timeOfLastActivity; // @synthesize timeOfLastActivity=_timeOfLastActivity;
@property(nonatomic) int requestedFormat; // @synthesize requestedFormat=_requestedFormat;
@property(retain, nonatomic) id <MFMessageDataConsumerFactory> consumerFactory; // @synthesize consumerFactory=_consumerFactory;
@property(readonly, retain, nonatomic) NSMutableData *bodyData; // @synthesize bodyData=_bodyData;
@property(readonly, retain, nonatomic) DAMailMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) id <MFCollectingDataConsumer> alternatePartConsumer; // @synthesize alternatePartConsumer=_alternatePartConsumer;
@property(retain, nonatomic) id <MFCollectingDataConsumer> dataConsumer; // @synthesize dataConsumer=_dataConsumer;
- (void)dealloc;	// IMP=0x00000000000a4d7f
- (id)dataConsumerForPart:(id)arg1;	// IMP=0x00000000000a4d4e
- (_Bool)didBeginStreaming;	// IMP=0x00000000000a4d45
- (_Bool)succeeded;	// IMP=0x00000000000a4d3c
- (id)data;	// IMP=0x00000000000a4d19
- (void)didEndStreamingForMailMessage:(id)arg1;	// IMP=0x00000000000a4c9b
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;	// IMP=0x00000000000a4992
- (_Bool)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;	// IMP=0x00000000000a4972

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

