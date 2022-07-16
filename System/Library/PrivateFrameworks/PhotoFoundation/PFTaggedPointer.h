//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PFTaggedPointer : NSObject
{
    union {
        unsigned long long unsignedPayload;
        long long signedPayload;
    } _payload;	// 8 = 0x8
}

+ (id)newInstanceWithSignedPayload:(long long)arg1;	// IMP=0x00000000000348ce
+ (id)newInstanceWithPayload:(unsigned long long)arg1;	// IMP=0x00000000000347e3
+ (unsigned short)tag;	// IMP=0x0000000000034630
+ (_Bool)taggedPointersEnabled;	// IMP=0x000000000003461c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000345a0
- (unsigned long long)hash;	// IMP=0x000000000003458e
- (_Bool)isTaggedPointer;	// IMP=0x0000000000034572
- (long long)signedPayload;	// IMP=0x000000000003451d
- (unsigned long long)payload;	// IMP=0x00000000000344c7
- (id)initWithSignedPayload:(long long)arg1;	// IMP=0x000000000003448a
- (id)initWithPayload:(unsigned long long)arg1;	// IMP=0x000000000003444d

@end
