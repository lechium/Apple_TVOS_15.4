//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Catalyst/CATDictionaryCodable-Protocol.h>

@class CATIDSMessageMetadata, NSDictionary;
@protocol CATIDSMessage;

__attribute__((visibility("hidden")))
@interface CATIDSMessagePayload : NSObject <CATDictionaryCodable>
{
    CATIDSMessageMetadata *_metadata;	// 8 = 0x8
    id <CATIDSMessage> _message;	// 16 = 0x10
}

+ (id)instanceWithDictionary:(id)arg1;	// IMP=0x000000000000d04f
- (void).cxx_destruct;	// IMP=0x000000000000d2dc
@property(readonly, nonatomic) id <CATIDSMessage> message; // @synthesize message=_message;
@property(readonly, nonatomic) CATIDSMessageMetadata *metadata; // @synthesize metadata=_metadata;
- (id)messageContent;	// IMP=0x000000000000d21c
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
- (id)initWithMetadata:(id)arg1 message:(id)arg2;	// IMP=0x000000000000ceb3
- (id)initWithMessage:(id)arg1;	// IMP=0x000000000000ce22

@end

