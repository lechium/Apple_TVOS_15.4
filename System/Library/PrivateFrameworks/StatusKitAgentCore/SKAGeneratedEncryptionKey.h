//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPStatusKitIncomingRatchet, MPStatusKitOutgoingRatchet, NSData, NSDate;

@interface SKAGeneratedEncryptionKey : NSObject
{
    NSData *_originalOutgoingRatchetState;	// 8 = 0x8
    NSDate *_dateGenerated;	// 16 = 0x10
}

+ (id)logger;	// IMP=0x000000000002f23c
- (void).cxx_destruct;	// IMP=0x000000000002f2ac
@property(readonly, nonatomic) NSDate *dateGenerated; // @synthesize dateGenerated=_dateGenerated;
@property(readonly, nonatomic) NSData *originalOutgoingRatchetState; // @synthesize originalOutgoingRatchetState=_originalOutgoingRatchetState;
- (id)initWithOriginalOutgoingRatchetState:(id)arg1 dateGenerated:(id)arg2;	// IMP=0x000000000002f1a3
- (id)initWithCoreDataGeneratedEncryptionKey:(id)arg1;	// IMP=0x000000000001bd5b
@property(readonly, nonatomic) MPStatusKitIncomingRatchet *incomingRatchet;
@property(readonly, nonatomic) MPStatusKitOutgoingRatchet *outgoingRatchet;

@end
