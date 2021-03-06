//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SYDWriteTrackerClient : NSObject
{
    unsigned short _numberOfWrites;	// 8 = 0x8
    unsigned long long _bytesWritten;	// 16 = 0x10
}

@property(nonatomic) unsigned short numberOfWrites; // @synthesize numberOfWrites=_numberOfWrites;
@property(nonatomic) unsigned long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
- (id)plistRepresentation;	// IMP=0x001000000001b106
- (id)initWithPlistRepresentation:(id)arg1;	// IMP=0x001000000001b028

@end

