//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface UCFilePackagerPacket : NSObject
{
    NSData *_packetData;	// 8 = 0x8
    long long _packetNumber;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000003fe4c
@property long long packetNumber; // @synthesize packetNumber=_packetNumber;
@property(retain) NSData *packetData; // @synthesize packetData=_packetData;

@end

