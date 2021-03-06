//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface AVAirMessageTransformer
{
    NSData *_previousUnusedData;	// 8 = 0x8
    Class _messageClass;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000a26d
@property(readonly, nonatomic) Class messageClass; // @synthesize messageClass=_messageClass;
- (id)reverseTransformerForMessageData:(id)arg1;	// IMP=0x000000000000a0ba
- (id)dataForMessage:(id)arg1;	// IMP=0x0000000000009f19
- (void)resetState;	// IMP=0x0000000000009ef8
- (id)initWithMessageClass:(Class)arg1;	// IMP=0x0000000000009ea3

@end

