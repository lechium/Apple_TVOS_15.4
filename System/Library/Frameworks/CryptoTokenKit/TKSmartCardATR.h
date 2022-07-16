//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray;

@interface TKSmartCardATR : NSObject
{
    NSMutableArray *_interfaces;	// 8 = 0x8
    NSData *_bytes;	// 16 = 0x10
    NSData *_historicalBytes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002891c
@property(readonly, nonatomic) NSData *historicalBytes; // @synthesize historicalBytes=_historicalBytes;
@property(readonly, nonatomic) NSData *bytes; // @synthesize bytes=_bytes;
@property(readonly, nonatomic) NSArray *historicalRecords;
- (id)description;	// IMP=0x00000000000283dd
- (id)_formatHexData:(id)arg1 to:(id)arg2;	// IMP=0x00000000000282e5
@property(readonly, nonatomic) NSArray *protocols;
- (id)interfaceGroupForProtocol:(unsigned long long)arg1;	// IMP=0x0000000000027e04
- (id)interfaceGroupAtIndex:(long long)arg1;	// IMP=0x0000000000027db2
- (id)parseFromSource:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027b6c
- (id)initWithSource:(CDUnknownBlockType)arg1;	// IMP=0x00000000000279ba
- (id)initWithBytes:(id)arg1;	// IMP=0x000000000002780e

@end
