//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface GCMouseEventData : NSObject <NSSecureCoding>
{
    unsigned short _source;	// 8 = 0x8
    unsigned int _type;	// 12 = 0xc
    float _deltaX;	// 16 = 0x10
    float _deltaY;	// 20 = 0x14
    unsigned long long _buttonMask;	// 24 = 0x18
    unsigned long long _senderID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b1cc9
@property unsigned long long senderID; // @synthesize senderID=_senderID;
@property unsigned long long buttonMask; // @synthesize buttonMask=_buttonMask;
@property float deltaY; // @synthesize deltaY=_deltaY;
@property float deltaX; // @synthesize deltaX=_deltaX;
@property unsigned short source; // @synthesize source=_source;
@property unsigned int type; // @synthesize type=_type;
- (id)debugDescription;	// IMP=0x00000000000b1c71
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b1ba1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b1aab

@end

