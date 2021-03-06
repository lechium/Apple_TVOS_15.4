//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRProtocolMessageOptions, NSArray, NSMutableArray;

@interface MRCompositeMessage
{
    NSMutableArray *_messages;	// 8 = 0x8
    MRProtocolMessageOptions *_transportOptions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000016643f
- (id)description;	// IMP=0x0000000000166181
- (void)setTransportOptions:(id)arg1;	// IMP=0x0000000000166120
- (id)transportOptions;	// IMP=0x0000000000165de2
@property(readonly, nonatomic) NSArray *messages;
- (void)addMessage:(id)arg1;	// IMP=0x0000000000165d04
- (id)init;	// IMP=0x0000000000165ca7

@end

