//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteTextInput/RTIInputSystemPayloadDelegate-Protocol.h>

@class NSString, RTIDataPayload;
@protocol RTIInputSystemPayloadDelegate;

@interface RTIInputSystemSourceSession <RTIInputSystemPayloadDelegate>
{
    id <RTIInputSystemPayloadDelegate> _forwardingPayloadDelegate;	// 8 = 0x8
    id <RTIInputSystemPayloadDelegate> _payloadDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000215f
@property(nonatomic) __weak id <RTIInputSystemPayloadDelegate> payloadDelegate; // @synthesize payloadDelegate=_payloadDelegate;
@property(nonatomic) __weak id <RTIInputSystemPayloadDelegate> forwardingPayloadDelegate; // @synthesize forwardingPayloadDelegate=_forwardingPayloadDelegate;
- (void)handleTextActionPayload:(id)arg1;	// IMP=0x0000000000001c1f
- (void)handleForwardingResponseActionPayload:(id)arg1;	// IMP=0x0000000000001a77
@property(readonly, copy, nonatomic) RTIDataPayload *currentForwardingDataPayload;
- (void)addSessionDelegate:(id)arg1;	// IMP=0x00000000000018e9
- (void)setSessionDelegate:(id)arg1;	// IMP=0x0000000000001873
- (void)flushOperations;	// IMP=0x00000000000016db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
