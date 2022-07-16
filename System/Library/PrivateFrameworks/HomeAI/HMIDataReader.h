//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface HMIDataReader : NSObject
{
    NSData *_data;	// 8 = 0x8
    unsigned long long _position;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000008dc5
- (id)readData:(unsigned long long)arg1;	// IMP=0x0000000000008d97
- (void)seek:(unsigned long long)arg1;	// IMP=0x0000000000008d8d
- (unsigned long long)readUInt64;	// IMP=0x0000000000008d59
- (unsigned int)readUInt32;	// IMP=0x0000000000008d27
- (unsigned long long)length;	// IMP=0x0000000000008d11
- (unsigned long long)position;	// IMP=0x0000000000008d07
- (id)initWithData:(id)arg1;	// IMP=0x0000000000008c94

@end

