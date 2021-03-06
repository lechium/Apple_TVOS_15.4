//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AVCRTCPPacket : NSObject
{
    unsigned char _packetType;	// 8 = 0x8
    unsigned int _SSRC;	// 12 = 0xc
}

+ (id)newPacketWithRTCPPacket:(struct tagRTCPPACKET *)arg1;	// IMP=0x000000000003d6ec
@property(nonatomic) unsigned int SSRC; // @synthesize SSRC=_SSRC;
@property(nonatomic) unsigned char packetType; // @synthesize packetType=_packetType;
- (id)description;	// IMP=0x000000000003dc63
- (id)initWithRTCPPacket:(struct tagRTCPPACKET *)arg1;	// IMP=0x000000000003d91c

@end

