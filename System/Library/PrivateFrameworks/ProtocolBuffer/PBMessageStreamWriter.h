//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOutputStream;

@interface PBMessageStreamWriter : NSObject
{
    NSOutputStream *_stream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000a291
- (_Bool)writeMessage:(id)arg1;	// IMP=0x000000000000a141
- (id)initWithOutputStream:(id)arg1;	// IMP=0x000000000000a0d6

@end

