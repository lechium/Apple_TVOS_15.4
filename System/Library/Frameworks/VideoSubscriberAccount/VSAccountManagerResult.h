//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperation;

@interface VSAccountManagerResult : NSObject
{
    NSOperation *_operation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004f440
@property(retain, nonatomic) NSOperation *operation; // @synthesize operation=_operation;
- (void)cancel;	// IMP=0x000000000004f3e8
- (id)initWithOperation:(id)arg1;	// IMP=0x000000000004f34d
- (id)init;	// IMP=0x000000000004f2de

@end

