//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ATVJSClassWrapper : NSObject
{
    struct OpaqueJSClass *_jsClassRef;	// 8 = 0x8
}

@property(readonly, nonatomic) struct OpaqueJSClass *jsClassRef; // @synthesize jsClassRef=_jsClassRef;
- (void)dealloc;	// IMP=0x0000000000080e70
- (id)initWithJSClassRef:(struct OpaqueJSClass *)arg1;	// IMP=0x0000000000080e1c

@end

