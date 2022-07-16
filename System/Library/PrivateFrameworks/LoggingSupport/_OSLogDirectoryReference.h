//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _OSLogDirectoryReference : NSObject
{
    int _fd;	// 8 = 0x8
    long long _etk;	// 16 = 0x10
}

@property(readonly, nonatomic) int fileDescriptor;
- (void)dealloc;	// IMP=0x000000000002862c
- (void)close;	// IMP=0x00000000000285ce
- (id)initWithDescriptor:(int)arg1 sandboxExtensionToken:(const char *)arg2;	// IMP=0x0000000000028560
- (id)initWithDescriptor:(int)arg1;	// IMP=0x0000000000028551

@end

