//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/__CFNCoreLoggableReq-Protocol.h>

@interface __CFNCoreLoggable : NSObject <__CFNCoreLoggableReq>
{
    struct CoreLoggable *_loggable;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x00000000001b0bc9
- (const struct CoreLoggable *)loggable;	// IMP=0x00000000001b0bbf
- (id)initWithLoggableName:(const char *)arg1;	// IMP=0x00000000001b0b62

@end
