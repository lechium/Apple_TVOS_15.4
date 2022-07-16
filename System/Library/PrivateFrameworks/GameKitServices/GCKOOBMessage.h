//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameKitServices/NSSecureCoding-Protocol.h>

@class NSData;

@interface GCKOOBMessage : NSObject <NSSecureCoding>
{
    unsigned int type;	// 8 = 0x8
    unsigned int band;	// 12 = 0xc
    NSData *data;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000038ecb
- (void)dealloc;	// IMP=0x0000000000039092
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000038f8b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000038eef
- (id)data;	// IMP=0x0000000000038ee5
- (unsigned int)band;	// IMP=0x0000000000038edc
- (unsigned int)type;	// IMP=0x0000000000038ed3
- (id)init;	// IMP=0x0000000000038e90

@end
